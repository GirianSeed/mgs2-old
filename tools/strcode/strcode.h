#ifndef INCLUDED_STRCODE_H
#define INCLUDED_STRCODE_H

#include <stdint.h>
#include <limits.h>

#ifdef __cplusplus
extern "C" {
#endif

/* 16-bit string-hashing function.
 * Originally from "METAL GEAR SOLID" (1998).
 */
int32_t StrCode16( const char *string );

/* 24-bit string-hashing function.
 * Originally from "METAL GEAR SOLID 2" (2001).
 */
int32_t StrCode24( const char *string );

/* 32-bit string-hashing function.
 * Originally from "ZONE OF THE ENDERS" (2001).
 */
uint32_t StrCode32( const char *string );

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
