/* SPDX-License-Identifier: MIT */
/*
 * Copyright (C) 2025 Jonathan Ingram
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#ifndef __JX_CMBSWAP_H__
#define __JX_CMBSWAP_H__

#include <stddef.h>
#include <stdint.h>
#include <string.h>     // for memcpy
#include "cmdefs.h"     // for __GNUC_PREREQ

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
 * Platform Endianness #defines
 */

#define CM_BIG_ENDIAN           4321    /* 0x11223344 */
#define CM_LITTLE_ENDIAN        1234    /* 0x44332211 */
#define CM_PDP_ENDIAN           3412    /* 0x22114433 */

#if (defined(__BYTE_ORDER__)                                    \
          &&(__BYTE_ORDER__==__ORDER_BIG_ENDIAN__))             \
||  (defined(__BYTE_ORDER)                                      \
          &&(__BYTE_ORDER==__BIG_ENDIAN))                       \
||  (defined(__BIG_ENDIAN__))                                   \
||  (defined(WORDS_BIGENDIAN))  /* autoconf */

#define CM_BYTE_ORDER           CM_BIG_ENDIAN
#else
/* default to little-endian */
#define CM_BYTE_ORDER           CM_LITTLE_ENDIAN
#endif

/* Only for checking at runtime */
#define CM_IS_BIG_ENDIAN        (*(const uint16_t *)"\0\xff" < 0x100)
#define CM_IS_LITTLE_ENDIAN     (*(const uint16_t *)"\0\xff" >= 0x100)

/******************************************************************************
 * Standard API implementation
 */

static inline uint16_t CM_bswap16( uint16_t x )
{
#if __GNUC_PREREQ(4,8)
    return __builtin_bswap16(x);
#else
    return ((uint16_t)(((x >> 8) & 0x00ff) | ((x << 8) & 0xff00)));
#endif
}
static inline uint32_t CM_bswap32( uint32_t x )
{
#if __GNUC_PREREQ(4,3)
    return __builtin_bswap32(x);
#else
    return ((uint32_t)(((x >> 24) & 0x000000ff) |
                       ((x >>  8) & 0x0000ff00) |
                       ((x <<  8) & 0x00ff0000) |
                       ((x << 24) & 0xff000000)));
#endif
}
static inline uint64_t CM_bswap64( uint64_t x )
{
#if __GNUC_PREREQ(4,3)
    return __builtin_bswap64(x);
#else
    return ((uint64_t)(((x >> 56) & 0x000000ff) |
                       ((x >> 40) & 0x0000ff00) |
                       ((x >> 24) & 0x00ff0000) |
                       ((x >>  8) & 0xff000000) |
                       ((x <<  8) & ((uint64_t)0xff << 32)) |
                       ((x << 24) & ((uint64_t)0xff << 40)) |
                       ((x << 40) & ((uint64_t)0xff << 48)) |
                       ((x << 56) & ((uint64_t)0xff << 56))));
#endif
}

// <arpa/inet.h> functions
// https://man7.org/linux/man-pages/man3/htons.3p.html
// https://man7.org/linux/man-pages/man3/htonl.3p.html

#if (CM_BYTE_ORDER == CM_BIG_ENDIAN)
#define CM_htons(n)     ((uint16_t)(n))
#define CM_ntohs(n)     ((uint16_t)(n))
#define CM_htonl(n)     ((uint32_t)(n))
#define CM_ntohl(n)     ((uint32_t)(n))
#define CM_htonll(n)    ((uint64_t)(n)) /* non-standard */
#define CM_ntohll(n)    ((uint64_t)(n)) /* non-standard */
#else
#define CM_htons(n)     CM_bswap16(n)
#define CM_ntohs(n)     CM_bswap16(n)
#define CM_htonl(n)     CM_bswap32(n)
#define CM_ntohl(n)     CM_bswap32(n)
#define CM_htonll(n)    CM_bswap64(n)   /* non-standard */
#define CM_ntohll(n)    CM_bswap64(n)   /* non-standard */
#endif

// <endian.h> functions
// https://man7.org/linux/man-pages/man3/endian.3.html

#if (CM_BYTE_ORDER == CM_BIG_ENDIAN)
#define CM_htobe16(n)   ((uint16_t)(n))
#define CM_htobe32(n)   ((uint32_t)(n))
#define CM_htobe64(n)   ((uint64_t)(n))
#define CM_htole16(n)   CM_bswap16(n)
#define CM_htole32(n)   CM_bswap32(n)
#define CM_htole64(n)   CM_bswap64(n)
#define CM_be16toh(n)   ((uint16_t)(n))
#define CM_be32toh(n)   ((uint32_t)(n))
#define CM_be64toh(n)   ((uint64_t)(n))
#define CM_le16toh(n)   CM_bswap16(n)
#define CM_le32toh(n)   CM_bswap32(n)
#define CM_le64toh(n)   CM_bswap64(n)
#else
#define CM_htobe16(n)   CM_bswap16(n)
#define CM_htobe32(n)   CM_bswap32(n)
#define CM_htobe64(n)   CM_bswap64(n)
#define CM_htole16(n)   ((uint16_t)(n))
#define CM_htole32(n)   ((uint32_t)(n))
#define CM_htole64(n)   ((uint64_t)(n))
#define CM_be16toh(n)   CM_bswap16(n)
#define CM_be32toh(n)   CM_bswap32(n)
#define CM_be64toh(n)   CM_bswap64(n)
#define CM_le16toh(n)   ((uint16_t)(n))
#define CM_le32toh(n)   ((uint32_t)(n))
#define CM_le64toh(n)   ((uint64_t)(n))
#endif

/******************************************************************************
 * XNU/SDL-Style API implementation
 */

#define CM_SwapConstInt16(x) \
    ((uint16_t)((((uint16_t)(x) & 0xff00U) >> 8) | \
                (((uint16_t)(x) & 0x00ffU) << 8)))

#define CM_SwapConstInt32(x) \
    ((uint32_t)((((uint32_t)(x) & 0xff000000U) >> 24) | \
                (((uint32_t)(x) & 0x00ff0000U) >>  8) | \
                (((uint32_t)(x) & 0x0000ff00U) <<  8) | \
                (((uint32_t)(x) & 0x000000ffU) << 24)))

#define CM_SwapConstInt64(x) \
    ((uint64_t)((((uint64_t)(x) & 0xff00000000000000ULL) >> 56) | \
                (((uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | \
                (((uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | \
                (((uint64_t)(x) & 0x000000ff00000000ULL) >>  8) | \
                (((uint64_t)(x) & 0x00000000ff000000ULL) <<  8) | \
                (((uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | \
                (((uint64_t)(x) & 0x000000000000ff00ULL) << 40) | \
                (((uint64_t)(x) & 0x00000000000000ffULL) << 56)))

static inline uint16_t CM_SwapInt16( uint16_t val )
{
    return CM_SwapConstInt16( val );
}
static inline uint32_t CM_SwapInt32( uint32_t val )
{
    return CM_SwapConstInt32( val );
}
static inline uint64_t CM_SwapInt64( uint64_t val )
{
    return CM_SwapConstInt64( val );
}

static inline float CM_SwapFloat( float val )
{
    union { uint32_t u32; float f32; } temp;
    temp.f32 = val;
    temp.u32 = CM_SwapInt32( temp.u32 );
    return temp.f32;
}
static inline double CM_SwapDouble( double val )
{
    union { uint64_t u64; double f64; } temp;
    temp.f64 = val;
    temp.u64 = CM_SwapInt64( temp.u64 );
    return temp.f64;
}

/* SDL_endian.h-Style #defines */
#define CM_Swap16(x)            CM_SwapInt16(x)
#define CM_Swap32(x)            CM_SwapInt32(x)
#define CM_Swap64(x)            CM_SwapInt64(x)

#if (CM_BYTE_ORDER == CM_BIG_ENDIAN)
#define CM_Swap16BE(x)          (x)
#define CM_Swap32BE(x)          (x)
#define CM_Swap64BE(x)          (x)
#define CM_SwapFloatBE(x)       (x)
#define CM_SwapDoubleBE(x)      (x)
#define CM_Swap16LE(x)          CM_Swap16(x)
#define CM_Swap32LE(x)          CM_Swap32(x)
#define CM_Swap64LE(x)          CM_Swap64(x)
#define CM_SwapFloatLE(x)       CM_SwapFloat(x)
#define CM_SwapDoubleLE(x)      CM_SwapDouble(x)
#else
#define CM_Swap16BE(x)          CM_Swap16(x)
#define CM_Swap32BE(x)          CM_Swap32(x)
#define CM_Swap64BE(x)          CM_Swap64(x)
#define CM_SwapFloatBE(x)       CM_SwapFloat(x)
#define CM_SwapDoubleBE(x)      CM_SwapDouble(x)
#define CM_Swap16LE(x)          (x)
#define CM_Swap32LE(x)          (x)
#define CM_Swap64LE(x)          (x)
#define CM_SwapFloatLE(x)       (x)
#define CM_SwapDoubleLE(x)      (x)
#endif

/******************************************************************************
 * Runtime Endianness Check helpers
 */

static inline int CM_CheckBigEndian( void )
{
    const uint32_t test = 0x01ffff00;
    return (*(const uint8_t *)&test == 0x01);
}
static inline int CM_CheckLittleEndian( void )
{
    const uint32_t test = 0x00ffff01;
    return (*(const uint8_t *)&test == 0x01);
}
static inline int CM_GetByteOrder( void )
{
    const uint32_t test = 0x01ffff00;
    return (*(const uint8_t *)&test) ? CM_BIG_ENDIAN : CM_LITTLE_ENDIAN;
}

/******************************************************************************
 * Unaligned Word Load/Store helpers
 */

static inline uint16_t CM_load16( uint8_t *ptr )
{
    uint16_t val;
    memcpy( &val, ptr, sizeof(uint16_t) );
    return val;
}
static inline uint32_t CM_load32( uint8_t *ptr )
{
    uint32_t val;
    memcpy( &val, ptr, sizeof(uint32_t) );
    return val;
}
static inline uint64_t CM_load64( uint8_t *ptr )
{
    uint64_t val;
    memcpy( &val, ptr, sizeof(uint64_t) );
    return val;
}

static inline void CM_store16( uint8_t *ptr, uint16_t val )
{
    memcpy( ptr, &val, sizeof(uint16_t) );
}
static inline void CM_store32( uint8_t *ptr, uint32_t val )
{
    memcpy( ptr, &val, sizeof(uint32_t) );
}
static inline void CM_store64( uint8_t *ptr, uint64_t val )
{
    memcpy( ptr, &val, sizeof(uint64_t) );
}

/******************************************************************************
 * "FOURCC" ID Constant helpers
 */

#if (CM_BYTE_ORDER == CM_BIG_ENDIAN)
#define CM_FOURCC(A, B, C, D)                                   \
    ((uint32_t)(((uint32_t)(unsigned char)(A) << 24) |          \
                ((uint32_t)(unsigned char)(B) << 16) |          \
                ((uint32_t)(unsigned char)(C) <<  8) |          \
                ((uint32_t)(unsigned char)(D) <<  0)))
#else
#define CM_FOURCC(A, B, C, D)                                   \
    ((uint32_t)(((uint32_t)(unsigned char)(A) <<  0) |          \
                ((uint32_t)(unsigned char)(B) <<  8) |          \
                ((uint32_t)(unsigned char)(C) << 16) |          \
                ((uint32_t)(unsigned char)(D) << 24)))
#endif

/* for multi-char constants */
#if (CM_BYTE_ORDER == CM_BIG_ENDIAN)
#define CM_FOURCC_MCC(mcc)      ((uint32_t)(mcc))
#else
#define CM_FOURCC_MCC(mcc)                                      \
    ((uint32_t)((((uint32_t)(mcc) & 0x000000ffU) << 24) |       \
                (((uint32_t)(mcc) & 0x0000ff00U) <<  8) |       \
                (((uint32_t)(mcc) & 0x00ff0000U) >>  8) |       \
                (((uint32_t)(mcc) & 0xff000000U) >> 24)))
#endif

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
