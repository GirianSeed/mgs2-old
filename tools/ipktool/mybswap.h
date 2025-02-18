#ifndef __MYBSWAP_H__
#define __MYBSWAP_H__

#include <stdint.h>
#include <limits.h>

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
 * common inline functions
 */

#if defined(__GNUC__) // GCC 4.3
// https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
#define my_bswap16(x) __builtin_bswap16(x)
#define my_bswap32(x) __builtin_bswap32(x)
#define my_bswap64(x) __builtin_bswap64(x)
#else
static inline uint16_t my_bswap16(uint16_t x)
{
    return ((uint16_t)(((x >> 8) & 0x00ff) | ((x << 8) & 0xff00)));
}
static inline uint32_t my_bswap32(uint32_t x)
{
    return ((uint32_t)(((x >> 24) & 0x000000ff) |
                       ((x >>  8) & 0x0000ff00) |
                       ((x <<  8) & 0x00ff0000) |
                       ((x << 24) & 0xff000000)));
}
static inline uint64_t my_bswap64(uint64_t x)
{
    return ((uint64_t)(((x >> 56) & 0x000000ff) |
                       ((x >> 40) & 0x0000ff00) |
                       ((x >> 24) & 0x00ff0000) |
                       ((x >>  8) & 0xff000000) |
                       ((x <<  8) & ((uint64_t)0xff << 32)) |
                       ((x << 24) & ((uint64_t)0xff << 40)) |
                       ((x << 40) & ((uint64_t)0xff << 48)) |
                       ((x << 56) & ((uint64_t)0xff << 56))));
}
#endif

/******************************************************************************
 * <arpa/inet.h> style functions
 */

#ifdef WORDS_BIGENDIAN
#define my_htons(n)     (n)
#define my_ntohs(n)     (n)
#define my_htonl(n)     (n)
#define my_ntohl(n)     (n)
#define my_htonll(n)    (n)
#define my_ntohll(n)    (n)
#else
#define my_htons(n)     my_bswap16(n)
#define my_ntohs(n)     my_bswap16(n)
#define my_htonl(n)     my_bswap32(n)
#define my_ntohl(n)     my_bswap32(n)
#define my_htonll(n)    my_bswap64(n)
#define my_ntohll(n)    my_bswap64(n)
#endif

/******************************************************************************
 * <endian.h> style functions
 */

#ifdef WORDS_BIGENDIAN
#define my_htobe16(n)   (n)
#define my_htobe32(n)   (n)
#define my_htobe64(n)   (n)
#define my_htole16(n)   my_bswap16(n)
#define my_htole32(n)   my_bswap32(n)
#define my_htole64(n)   my_bswap64(n)
#define my_be16toh(n)   (n)
#define my_be32toh(n)   (n)
#define my_be64toh(n)   (n)
#define my_le16toh(n)   my_bswap16(n)
#define my_le32toh(n)   my_bswap32(n)
#define my_le64toh(n)   my_bswap64(n)
#else
#define my_htobe16(n)   my_bswap16(n)
#define my_htobe32(n)   my_bswap32(n)
#define my_htobe64(n)   my_bswap64(n)
#define my_htole16(n)   (n)
#define my_htole32(n)   (n)
#define my_htole64(n)   (n)
#define my_be16toh(n)   my_bswap16(n)
#define my_be32toh(n)   my_bswap32(n)
#define my_be64toh(n)   my_bswap64(n)
#define my_le16toh(n)   (n)
#define my_le32toh(n)   (n)
#define my_le64toh(n)   (n)
#endif

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
