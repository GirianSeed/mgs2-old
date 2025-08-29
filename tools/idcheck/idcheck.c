#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

#include "mydefs.h"
#include "strcode.h"

/*---------------------------------------------------------------------------*/

typedef struct {
    const char *base_name;
    const char *ext_name;
    uint32_t    strcode;
} idCheckTable;

#define GetStrCode24(_id)   ((uint32_t)((_id) & 0x00ffffff))
#define GetFileExtId(_id)   ((uint32_t)((_id) & 0xff000000) >> 24)

#define MakeStrCodeId(_strcode, _extid) \
    (uint32_t)(((_extid) << 24) | ((_strcode) & 0x00ffffff))

/*---------------------------------------------------------------------------*/

static char *split_filename(char *const filename)
{
    char *dot = strrchr(filename, '.');
    char *ext = dot + 1;

    /* check dot character(s) */
    if (dot == NULL) {
        eprintf("%s: no filename extension.\n", filename);
        // todo: allow missing extensions?
        exit(1);
    }
#ifndef ALLOW_DOT_IN_BASENAME
    if (dot != strchr(filename, '.')) {
        eprintf("%s: cannot use \'.\' in the basename.\n", filename);
        exit(1);
    }
#endif
    /* check extension */
    if (!isalpha(ext[0]) || !islower(ext[0])) {
        eprintf("%s: extension must be lowercase alpha.\n", filename);
        exit(1);
    }
//  if (strlen(ext) != 3) {
//      eprintf("%s: extension is longer than 3 chars.\n", filename);
//      exit(1);
//  }

    *dot = '\0';    // "split" the string in two
    return ext;
}

/*---------------------------------------------------------------------------*/

// Original message:
// "id_check : id conflict checker for MGS\n"
// "usage : id_check file1 file2 [file3 ...]\n"

static void usage(const char *self)
{
    eprintf("%s : id conflict checker for MGS\n", self);
    eprintf("usage : %s file1 file2 [file3 ...]\n", self);
    exit(1);
}

/*---------------------------------------------------------------------------*/

int main(int argc, char *argv[])
{
    /* argument check */
    if (argc < 3) {
        /* need at least two strings to compare */
        usage(argv[0]);
    }

    /* don't include the program's name */
    argc--;
    argv++;

    /* allocate the id table */
    idCheckTable *tbl = malloc(argc * sizeof(idCheckTable));
    if (tbl == NULL) {
        perror("malloc() failed");
        exit(1);
    }

    /* initialize the id table */
    for (int i=0; i < argc; i++) {
        tbl[i].base_name = argv[i];
        tbl[i].ext_name = split_filename(argv[i]);
        tbl[i].strcode = MakeStrCodeId(
            StrCode24(tbl[i].base_name), (tbl[i].ext_name[0] - 'a'));
    }

    for (int i=0; i < argc; i++) {
    for (int j=0; j < argc; j++) {
        /* don't compare the same entry */
        if (i == j) {
            continue;
        }
        /* implicitly checks the strcode and extension */
        if (tbl[j].strcode == tbl[i].strcode) {
            eprintf("id conflict found!\n");
            eprintf("%s.%s\t=> 0x%08x : %8d\n", tbl[i].base_name, tbl[i].ext_name,
                GetStrCode24(tbl[i].strcode), GetStrCode24(tbl[i].strcode));
            eprintf("%s.%s\t=> 0x%08x : %8d\n", tbl[j].base_name, tbl[j].ext_name,
                GetStrCode24(tbl[j].strcode), GetStrCode24(tbl[j].strcode));
            exit(1);
        }
    }
    } // double-loop

    /* print formatted list */
    for (int i=0; i < argc; i++) {
        // the format is meant to replicate KCEJ's original id_check output.
        printf("%s.%s\t=> 0x%08x : %8d\n", tbl[i].base_name, tbl[i].ext_name,
            GetStrCode24(tbl[i].strcode), GetStrCode24(tbl[i].strcode));
    }

    return 0;
}
