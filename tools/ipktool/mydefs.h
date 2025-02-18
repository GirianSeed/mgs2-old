#ifndef __MYDEFS_H__
#define __MYDEFS_H__

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include <stdbool.h>
#include <stdint.h>
#include <limits.h>

/******************************************************************************
 * GNU-C Compiler version tests
 */

#if defined(__GNUC__)
#if defined(__GNUC_PATCHLEVEL__) // GCC 3.0
#  define GCC_VERSION ((__GNUC__       * 10000)\
                      +(__GNUC_MINOR__ *   100)\
                      +(__GNUC_PATCHLEVEL__))
#else
#  define GCC_VERSION ((__GNUC__       * 10000)\
                      +(__GNUC_MINOR__ *   100))
#endif // __GNUC_PATCHLEVEL__
#else
#  define GCC_VERSION 0
#endif // __GNUC__

/* Macro to test version of GCC.  Returns 0 for non-GCC or too old GCC. */
#ifndef __GNUC_PREREQ
#  if defined(__GNUC__) && defined(__GNUC_MINOR__)
#    define __GNUC_PREREQ(maj, min) \
        ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#  else
#    define __GNUC_PREREQ(maj, min) 0
#  endif
#endif
/* Version with trailing underscores for BSD compatibility. */
#ifndef __GNUC_PREREQ__
#define __GNUC_PREREQ__(maj, min) __GNUC_PREREQ(maj, min)
#endif

/******************************************************************************
 * common #defines
 */

#ifndef _countof
#define _countof(array)         (sizeof(array)/sizeof(array[0]))
#endif
#define countof(array)          _countof(array)
#define COUNTOF(array)          _countof(array)

#define ROUND_UP(n, p2)         ((n) + ((p2)-1) & ~((p2)-1))
#define ROUND_DOWN(n, p2)       ((n) & ~((p2)-1))

/******************************************************************************
 * stdout/stderr printf
 */

#if defined(__GNUC__)
#define eprintf(format, ...) fprintf(stderr, format, ##__VA_ARGS__)
#define oprintf(format, ...) fprintf(stdout, format, ##__VA_ARGS__)
#else
#define eprintf(format, ...) fprintf(stderr, format __VA_OPT__(,) __VA_ARGS__)
#define oprintf(format, ...) fprintf(stdout, format __VA_OPT__(,) __VA_ARGS__)
#endif

#endif // {{{ END OF FILE }}}
