#ifndef __JOYDIV_STRCODE_H__
#define __JOYDIV_STRCODE_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int32_t GV_StrCode16( const char *string );
int32_t GV_StrCode24( const char *string );
uint32_t GV_StrCode32( const char *string );

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
