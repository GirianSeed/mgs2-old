#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <stdbool.h>
#include <inttypes.h>
#include <limits.h>

#include "strcode.h"
#include "eprintf.h"

/******************************************************************************
 * main routine
 */

int main( int argc, char *argv[] )
{
    /* argument check */
    if (argc < 2) {
        eprintf("Usage: %s [args...]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    /* output string hashes */
    for (int i = 1; i < argc; i++) {
#if defined USE_MGS1_STRCODE_ONLY
        printf("%04x %s\n", GV_StrCode16(argv[i]), argv[i]);
#elif defined USE_MGS2_STRCODE_ONLY
        printf("%08x %s\n", GV_StrCode24(argv[i]), argv[i]);
#elif defined USE_ZOE1_STRCODE_ONLY
        printf("%08x %s\n", GV_StrCode32(argv[i]), argv[i]);
#else
        printf("%04x %08x %08x %s\n",
            GV_StrCode16(argv[i]),
            GV_StrCode24(argv[i]),
            GV_StrCode32(argv[i]),
            argv[i]);
#endif
    }
    return 0;
}
