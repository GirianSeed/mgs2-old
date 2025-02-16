#ifndef __MGS2_COMMON_H__
#define __MGS2_COMMON_H__

#include <stddef.h>
#include <sys/types.h>
#include <eetypes.h>

/*---------------------------------------------------------------------------*/
// https://gcc.gnu.org/onlinedocs/cpp/Common-Predefined-Macros.html

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

/*---------------------------------------------------------------------------*/

#ifndef MIN
#define MIN(x, y)       (((x) < (y)) ? (x) : (y))
#endif
#ifndef MAX
#define MAX(x, y)       (((x) > (y)) ? (x) : (y))
#endif
#ifndef ABS
#define ABS(x)          (((x) >= 0) ? (x) : -(x))
#endif

#ifndef CLAMP
#define CLAMP(x, min, max) (MAX(MIN(x, max), min))
#endif

#ifndef _countof
#define _countof(array) (sizeof(array)/sizeof(array[0]))
#endif
#define countof(array)  _countof(array)
#define COUNTOF(array)  _countof(array)

#define PACKED          __attribute__((packed))
#define ALIGN(_x)       __attribute__((aligned(_x)))
#define ALIGN8          ALIGN(8)
#define ALIGN16         ALIGN(16)
#define ALIGN64         ALIGN(64)
#define ALIGN128        ALIGN(128)

/*---------------------------------------------------------------------------*/

#define HANGUP()        (*(int *)1 = 0)

#define ASSERT(cond)                                            \
    if (!(cond)) {                                              \
        /* todo: decompile */                                   \
        HANGUP();                                               \
    }

#define XASSERT(cond, mesg ...)                                 \
    if (!(cond)) {                                              \
        /* todo: decompile */                                   \
        printf( mesg );                                         \
        HANGUP();                                               \
    }

/*---------------------------------------------------------------------------*/
// https://en.cppreference.com/w/c/language/arithmetic_types#Boolean_type
// NOTE: (bool)0.5 evaluates to true, whereas (int)0.5 evaluates to 0.

typedef int             BOOL;

#ifndef FALSE
#define FALSE           (0)
#endif
#ifndef TRUE
#define TRUE            (!FALSE)
#endif

/*---------------------------------------------------------------------------*/

typedef signed char     int8;           /*  8-bit signed integer    */
typedef unsigned char   u_int8;         /*  8-bit unsigned integer  */
typedef signed short    int16;          /* 16-bit signed integer    */
typedef unsigned short  u_int16;        /* 16-bit unsigned integer  */
typedef signed int      int32;          /* 32-bit signed integer    */
typedef unsigned int    u_int32;        /* 32-bit unsigned integer  */
typedef signed long     int64;          /* 64-bit signed integer    */
typedef unsigned long   u_int64;        /* 64-bit unsigned integer  */
typedef signed long     long64;         /* 64-bit signed integer    */
typedef unsigned long   u_long64;       /* 64-bit unsigned integer  */

// https://gcc.gnu.org/onlinedocs/gcc/_005f_005fint128.html
// https://gcc.gnu.org/onlinedocs/gccint/Machine-Modes.html

typedef long128         int128;         /* 128-bit signed integer   */
typedef u_long128       u_int128;       /* 128-bit unsigned integer */

/*---------------------------------------------------------------------------*/

typedef struct CVECTOR {
    u_char r, g, b, a;
} CVECTOR;

typedef struct SVECTOR {
    short vx;
    short vy;
    short vz;
    short vw;
} ALIGN8 SVECTOR;

typedef struct IVECTOR {
    int vx;
    int vy;
    int vz;
    int vw;
} ALIGN16 IVECTOR;

typedef struct FVECTOR {
    float vx;
    float vy;
    float vz;
    float vw;
} ALIGN16 FVECTOR;

typedef struct FMATRIX {
    float m[4][4];
} ALIGN16 FMATRIX;

#endif // {{{ END OF FILE }}}
