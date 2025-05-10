#include <stdint.h>
#include <limits.h>

/*!
 *  @brief      1st-generation string-hashing function.
 *              Originally from "METAL GEAR SOLID" (1998).
 *
 *  Given that the digest is only 16 bits wide, this algorithm is highly
 *  prone to collisions. Check for collisions after precalculating a set
 *  of hashes intended for use at runtime. (e.g. stage data files)
 *
 *  @li Passing an empty string will return 0.
 *  @li Passing a single-char string will return the value of the char.
 *  @li Mutations of strings differing in only the last character will
 *      result in the lowest byte of the hash mirroring that difference.
 *
 *  Input/Output Examples:
 *
 *  @li GV_StrCode("cb_box11") returns @c 0xADDB
 *  @li GV_StrCode("cb_box12") returns @c 0xADDC
 *  @li GV_StrCode("op_kcej_l") returns @c 0x4349
 *  @li GV_StrCode("op_kcej_r") returns @c 0x434F
 *
 *  @param      string      NULL-terminated string.
 *
 *  @retval     0           if @p string is empty.
 *  @retval     non-zero    16-bit hash of @p string.
 */
uint32_t GV_StrCode16( const char *string )
{
    unsigned char c;
    unsigned char *p = (unsigned char *)string;
    uint16_t id = 0;

    while (( c = *p++ )) {
        id = ((id << 5) | (id >> 11));
        id += c;
    }
    return id;
}

/*!
 *  @brief      2nd-generation string-hashing function.
 *              Originally from "METAL GEAR SOLID 2" (2001).
 *
 *  Given that the digest is only 24 bits wide, this algorithm is rather
 *  prone to collisions. Check for collisions after precalculating a set
 *  of hashes intended for use at runtime. (e.g. stage data files)
 *
 *  @li Passing an empty string will return 1.
 *  @li Passing a single-char string will return the value of the char.
 *  @li Mutations of strings differing in only the last character will
 *      result in the lowest byte of the hash mirroring that difference.
 *  @li Mutations of strings differing by one or several characters often
 *      result in only small differences between returned values.
 *
 *  Input/Output Examples:
 *
 *  @li GV_StrCode("sna_mugen_bdn1") returns @c 0x0028021E
 *  @li GV_StrCode("sna_mugen_bdn2") returns @c 0x0028021F
 *  @li GV_StrCode("cbx_a_alp_ovl") returns @c 0x007BBF37
 *  @li GV_StrCode("cbx_b_alp_ovl") returns @c 0x007CBF37
 *
 *  @param      string      NULL-terminated string.
 *
 *  @retval      1          if @p string is empty.
 *  @retval     >1          24-bit hash of @p string.
 */
uint32_t GV_StrCode24( const char *string )
{
    unsigned char c;
    unsigned char *p = (unsigned char *)string;
    uint32_t id = 0, mask = 0x00ffffff;

    while (( c = *p++ )) {
        id = ((id << 5) | (id >> 19));
        id += c;
        id &= mask;
    }
    if (id == 0) id = 1;

    return id;
}

/*!
 *  @brief      3rd-generation string-hashing function.
 *              Originally from "ZONE OF THE ENDERS" (2001).
 *
 *  @remark     This function was originally named @c FS_StrCode
 *              as it belonged to ZOE's custom variant of @b libfs.
 *
 *  @param      string      NULL-terminated string.
 *
 *  @retval     0           if @p string is empty.
 *  @retval     non-zero    32-bit hash of @p string.
 */
uint32_t GV_StrCode32( const char *string )
{
    uint32_t c;
    int32_t n = 0;
    uint32_t id = 0;

    while (( c = *string++ )) {
        id += ((id << (c & 0x0f)) | ((id >> 3) + (c << (n & 0x0f)) + c));
        n++;
    }
    return id;
}
