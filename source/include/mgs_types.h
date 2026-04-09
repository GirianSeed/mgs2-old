#ifndef __MGS2_MGS_TYPES_H__
#define __MGS2_MGS_TYPES_H__

#include <stddef.h>     // for size_t
#include <limits.h>     // for MIN/MAX
#include "sys_types.h"
#include "mgs_defs.h"

#ifdef __R5900__
#include <eetypes.h>    // for u_long128
#endif

/*---------------------------------------------------------------------------*/
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
#if (defined(__R5900__) || defined(__LP64__))
typedef signed long     int64;          /* 64-bit signed integer    */
typedef unsigned long   u_int64;        /* 64-bit unsigned integer  */
#elif defined(_MSC_VER)
typedef signed __int64  int64;          /* 64-bit signed integer    */
typedef unsigned __int64 u_int64;       /* 64-bit unsigned integer  */
#else
typedef signed long long int64;         /* 64-bit signed integer    */
typedef unsigned long long u_int64;     /* 64-bit unsigned integer  */
#endif
typedef int64           long64;         /* 64-bit signed long       */
typedef u_int64         u_long64;       /* 64-bit unsigned long     */

#if !defined(__R5900__)
#if (defined(__GNUC__) && defined(__SIZEOF_INT128__))
// https://gcc.gnu.org/onlinedocs/gcc/_005f_005fint128.html
// https://gcc.gnu.org/onlinedocs/gccint/Machine-Modes.html

typedef   signed int long128    __attribute__((mode(TI)));
typedef unsigned int u_long128  __attribute__((mode(TI)));
#else
// One of several ways to make a fake 128-bit integer.
typedef struct { u_long64 hi,lo; } long128;
typedef struct { u_long64 hi,lo; } u_long128;
#endif
#endif // !defined(__R5900__)

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
