#ifndef __eprintf_h__
#define __eprintf_h__

#include <stddef.h>     // for misc.
#include <stdio.h>      // for fprintf

/*---------------------------------------------------------------------------*/
// https://gcc.gnu.org/onlinedocs/cpp/Macros.html
// https://gcc.gnu.org/onlinedocs/cpp/Variadic-Macros.html

#if defined(__GNUC__)
/* classic GNU-C(++) extension */
#define eprintf(format, ...)    fprintf(stderr, format, ##__VA_ARGS__)
#define oprintf(format, ...)    fprintf(stdout, format, ##__VA_ARGS__)
#elif (__cplusplus >= 202002L) || (__STDC_VERSION__ >= 202311L)
/* Official C++20 & C23 support */
#define eprintf(format, ...)    fprintf(stderr, format __VA_OPT__(,) __VA_ARGS__)
#define oprintf(format, ...)    fprintf(stdout, format __VA_OPT__(,) __VA_ARGS__)
#else
#define eprintf(args...)        fprintf(stderr, args)
#define oprintf(args...)        fprintf(stdout, args)
#endif

#endif // {{{ END OF FILE }}}
