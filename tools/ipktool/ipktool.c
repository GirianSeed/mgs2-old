#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <utime.h>
#include <getopt.h>

#include "mydefs.h"
#include "mybswap.h"
#include "myfsutil.h"
#include "xmalloc.h"

/******************************************************************************
 * KCEJ "IPK" encode/decode stuff
 */

typedef struct {
    uint32_t paksize;   /* */
    uint32_t elfsize;   /* */
    uint32_t namelen;   /* strlen(name)+1 */
    uint32_t pad0;      /* padding */
} ipkModuleTag;

static_assert(sizeof(ipkModuleTag) == 16, "sizeof ipkModuleTag is wrong!");

/* todo: big-endian compatibility */
#define XORKEY_1STVAL   0x7e8a6b4c
#define XORKEY_ADDVAL   0xa84e6b2e
#define XORKEY_SUBVAL   0x57b194d2

static uint32_t decode_work = XORKEY_1STVAL;

void decode_reset(void)
{
    decode_work = XORKEY_1STVAL;
}

/* decode to buffer */
void decode(void *dst, void *src, size_t size)
{
    uint32_t *ptr = (uint32_t *)dst;

    memcpy(dst, src, size);

    while (size > 0) {
        *ptr++ ^= decode_work;
        decode_work += XORKEY_ADDVAL;
        size -= sizeof(uint32_t);
    }
}

/* decode in place */
void decode_in(void *buffer, size_t size)
{
    uint32_t *ptr = (uint32_t *)buffer;

    while (size > 0) {
        *ptr++ ^= decode_work;
        decode_work += XORKEY_ADDVAL;
        size -= sizeof(uint32_t);
    }
}

/******************************************************************************
 * internal defines
 */

#ifdef USE_PS2TOOL_MEMSIZE
#define IOP_TOTAL_MEMORY ((1024 * 1024) * 8)
#else
#define IOP_TOTAL_MEMORY ((1024 * 1024) * 2)
#endif

/******************************************************************************
 * internal flags
 */

static int show_version = 0;
static int verbose_flag = 0;    /* todo: implement */
static int set_timestamp = 0;   /* todo: implement */

/******************************************************************************
 * internal functions
 */

typedef struct {
    void        *elf;       /* ptr to irx data      */
    const char  *name;      /* ptr to irx filename  */
    const char  *argp;      /* ptr to argument(s)   */
    uint32_t    args;       /* size of argument(s)  */
    uint32_t    paksize;    /* (ipkModuleTag)->paksize */
    uint32_t    elfsize;    /* (ipkModuleTag)->elfsize */
    uint32_t    namelen;    /* (ipkModuleTag)->namelen */
    uint32_t    pad0;       /* (ipkModuleTag)->pad0    */
} iopMetaData;

static void get_ipk_taginfo(const ipkModuleTag *modtag, iopMetaData *mdata)
{
    mdata->paksize = my_le32toh(modtag->paksize);
    mdata->elfsize = my_le32toh(modtag->elfsize);
    mdata->namelen = my_le32toh(modtag->namelen);
    mdata->pad0    = my_le32toh(modtag->pad0);
}

static void *get_ipk_modinfo(const ipkModuleTag *modtag, iopMetaData *mdata)
{
    uint8_t *ptr = ((void *)modtag + sizeof(ipkModuleTag));

    if (modtag->paksize == 0) {
        memset(mdata, 0, sizeof(iopMetaData));
        return NULL;
    }
    get_ipk_taginfo(modtag, mdata);

    mdata->name = (const char *)(ptr + mdata->elfsize);
    mdata->argp = (const char *)((uintptr_t)mdata->name + (strlen(mdata->name) + 1));
    mdata->args = ((mdata->namelen - 1) - strlen(mdata->name));
    mdata->elf = ptr;

    return ptr += mdata->paksize;
}

static int probe_ipk_file(FILE *fp, const char *fname, const size_t ipksize)
{
    if (ipksize <= sizeof(ipkModuleTag)) {
        eprintf("Invalid file: '%s' is too small!", fname);
        return -1;
    }
    if (ipksize >= IOP_TOTAL_MEMORY) {
        /* file is bigger than the's IOP total memory */
        eprintf("Invalid file: '%s' is too large!", fname);
        return -1;
    }

    iopMetaData mdata;
    ipkModuleTag modtag;
    long int pos = ftell(fp);

    /* load first tag */
    fseek(fp, 0, SEEK_SET);
    fread(&modtag, sizeof(ipkModuleTag), 1, fp);
    fseek(fp, pos, SEEK_SET);

    decode_reset();
    /* decode first tag */
    decode_in(&modtag, sizeof(ipkModuleTag));
    decode_reset();

    /* get metadata */
    get_ipk_taginfo(&modtag, &mdata);

    /* check for obviously malformed tags */
    if (mdata.paksize > ipksize) {
        eprintf("Corrupt module tag.");
        return -1;
    }
    if (mdata.paksize < (mdata.elfsize + mdata.namelen)) {
        eprintf("Corrupt module tag.");
        return -1;
    }
    if (mdata.pad0 != 0x00000000) {
        eprintf("Unexpected padding value found. (%#010x)", mdata.pad0);
    }
    return 0;
}

static void decode_ipk_data(void *const ipkbuf_top, const size_t ipksize)
{
    ptrdiff_t diff = 0;
    void *inptr = ipkbuf_top;

    iopMetaData mdata;
    ipkModuleTag *modtag;

    decode_reset();
    do {
        /* decode header */
        decode_in(inptr, sizeof(ipkModuleTag));

        modtag = (ipkModuleTag *)inptr;
        inptr += sizeof(ipkModuleTag);

        /* get metadata */
        get_ipk_taginfo(modtag, &mdata);

        if (mdata.paksize != 0) {
            /* decode body */
            decode_in(inptr, mdata.paksize);
            decode_reset();
        }

        inptr += mdata.paksize;
        diff = ((uintptr_t)inptr - (uintptr_t)ipkbuf_top);
    }
    while (diff < ipksize);
}

/******************************************************************************
 * "decode" subroutine
 */

static int sub_decode(const char *infile, const char *outfile)
{
    FILE *ifp = NULL;
    FILE *ofp = NULL;

    if (!(ifp = fopen(infile, "rb"))) {
        perror(infile);
        exit(EXIT_FAILURE);
    }
    if (!(ofp = fopen(outfile, "wb"))) {
        perror(outfile);
        exit(EXIT_FAILURE);
    }

    /* check input file */
    size_t ipksize = get_stat_size(infile);
    if (probe_ipk_file(ifp, infile, ipksize) < 0) {
        exit(EXIT_FAILURE);
    }

    /* constant pointer to the top */
    void *const ipkbuf_top = xmalloc(ipksize);

    /* load input data */
    fseek(ifp, 0, SEEK_SET);
    fread(ipkbuf_top, ipksize, 1, ifp);
    fclose(ifp);

    /* decode & output data */
    decode_ipk_data(ipkbuf_top, ipksize);
    fwrite(ipkbuf_top, ipksize, 1, ofp);
    fclose(ofp);

    free(ipkbuf_top);
    return 0;
}

/******************************************************************************
 * "extract" subroutine
 */

static int sub_extract(const char *infile)
{
    int ret = 0;
    FILE *ifp = NULL;
    FILE *ofp = NULL;

    if (!(ifp = fopen(infile, "rb"))) {
        perror(infile);
        exit(EXIT_FAILURE);
    }

    /* check input file */
    size_t ipksize = get_stat_size(infile);
    if (probe_ipk_file(ifp, infile, ipksize) < 0) {
        exit(EXIT_FAILURE);
    }

    /* constant pointer to the top */
    void *const ipkbuf_top = xmalloc(ipksize);

    /* load input data */
    fseek(ifp, 0, SEEK_SET);
    fread(ipkbuf_top, ipksize, 1, ifp);
    fclose(ifp);

    /* decode & output data */
    decode_ipk_data(ipkbuf_top, ipksize);

    iopMetaData mdata;
    ipkModuleTag *modtag = (ipkModuleTag *)ipkbuf_top;

    while (( modtag = get_ipk_modinfo(modtag, &mdata) )) {
        if (verbose_flag) {
            printf("module : %.*s\n", mdata.namelen, mdata.name);
            printf("argv   : %.*s\n", mdata.args, mdata.argp);
            printf("packsize elfsize  namelen  padding\n");
            printf("%08x %08x %08x %08x%s\n",
                mdata.paksize, mdata.elfsize,
                mdata.namelen, mdata.pad0, (mdata.pad0!=0)?"(*)":"");
        }
        if ((mdata.namelen) > FILENAME_MAX) {
            eprintf("ERROR: module name is too long!\n");
            ret = EXIT_FAILURE;
            continue;
        }
        if (!(ofp = fopen(mdata.name, "wb"))) {
            perror(mdata.name);
            ret = EXIT_FAILURE;
            continue;
        }

        fwrite(mdata.elf, mdata.elfsize, 1, ofp);
        fclose(ofp); /* todo: copy timestamp from module.ipk */
    }

    free(ipkbuf_top);
    return ret;
}

/******************************************************************************
 * "create" subroutine
 */

static int sub_create(const char *outfile)
{
    (void)outfile;
    /* todo: implement */
    return 0;
}

/******************************************************************************
 * standard bit helpers
 */

int count_ones(uint32_t num)
{
#ifdef __GNUC__ // GCC 3.4
    return __builtin_popcount(num);
#else
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
#endif
}

/******************************************************************************
 * main routine
 */

#define VERSION "0.9"

static void version(void)
{
    printf("ipktool version " VERSION "\n");
#ifndef NO_BUILD_TIMESTAMP
    printf("compiled: " __DATE__ " @ " __TIME__ "\n");
#endif
    printf("\n");
}

static void usage(const char *self, int exit_code)
{
    eprintf("Usage: %s [args...]\n", self);
    eprintf("  -h, --help                    # show help\n");
    eprintf("  -v, --version                 # show version\n");
    eprintf("  -v, --verbose                 # enable verbose output\n");
//  eprintf("  -t, --timestamp               # preserve timestamps\n");
    eprintf("  -d, --decode <input.ipk>      # decode iop packfile\n");
    eprintf("  -x, --extract <input.ipk>     # extract irx modules\n");
//  eprintf("  -c, --create <output.ipk>     # create iop packfile\n");
    exit(exit_code);
}

int main(int argc, char *argv[])
{
#define OP_MODE_DECODE  (1 << 0)
#define OP_MODE_EXTRACT (1 << 1)
#define OP_MODE_CREATE  (1 << 2)
#define MAX_OP_MODES    (3)

    int exit_code = 0;
    int mode_flags = 0;

/* default filename */
#define IPKFILE_NAME "module.ipk"
#define OUTFILE_NAME "decode.bin"

    const char *infile = NULL;
    const char *outfile = NULL;

    int c;
    int option_index = 0;
    static const char *short_opts = "hvtd:x:c:o:";
    static const struct option long_options[] = {
        { "help",      no_argument,       0, 'h' },
        { "version",   no_argument,       &show_version, 1 },
        { "verbose",   no_argument,       &verbose_flag, 1 },
        { "timestamp", no_argument,       0, 't' },
        { "decode",    required_argument, 0, 'd' },
        { "extract",   required_argument, 0, 'x' },
        { "create",    required_argument, 0, 'c' },
        { 0, 0, 0, 0 }
    };

    while ((c = getopt_long(argc, argv, short_opts,
                    long_options, &option_index)) != -1)
    {
        switch (c) {
        case 0:
            if (long_options[option_index].flag != 0)
                break;
            printf("option %s", long_options[option_index].name);
            if (optarg)
                printf(" with arg %s", optarg);
            printf("\n");
            break;

        case '?':
            /* getopt_long already printed an error message. */
            usage(argv[0], EXIT_FAILURE);
            break;

        case 'h':
            usage(argv[0], EXIT_SUCCESS);
            break;

        case 'v':
            verbose_flag = 1;
            show_version = 1;
            break;

        case 't':
            set_timestamp = 1;
            break;

        case 'd':
            mode_flags |= OP_MODE_DECODE;
            infile = optarg;
            break;

        case 'x':
            mode_flags |= OP_MODE_EXTRACT;
            infile = optarg;
            break;

        case 'c':
            mode_flags |= OP_MODE_CREATE;
            outfile = optarg;
            break;

        case 'o':
            outfile = optarg;
            break;

        default:
            exit(EXIT_FAILURE);
        }
    }

    if (show_version) {
        version();
    }

    switch (mode_flags) {
    case 0:
        if (!show_version) {
            version();
            eprintf("No operation mode selected.\n");
            usage(argv[0], EXIT_FAILURE);
        }
        break;
    case OP_MODE_DECODE:
        if (outfile == NULL) {
            outfile = OUTFILE_NAME;
        }
        exit_code = sub_decode(infile, outfile);
        break;
    case OP_MODE_EXTRACT:
        exit_code = sub_extract(infile);
        break;
    case OP_MODE_CREATE:
        exit_code = sub_create(outfile);
        break;
    default:
        if (1 != count_ones(mode_flags)) {
            eprintf("\nERROR: mutually-exclusive modes selected!\n");
        } else {
            eprintf("\nERROR: invalid mode set!\n");
        }
        return EXIT_FAILURE;
    }

    return exit_code;
}
