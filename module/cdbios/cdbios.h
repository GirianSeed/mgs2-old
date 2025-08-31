#ifndef __KCEJ_CDBIOS_H__
#define __KCEJ_CDBIOS_H__

#include <libcdvd.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cdbios_ee.c */
void cdbios_init( void );
int cdbios_get_status( void );
int cdbios_get_read_size( void );
void cdbios_callback_read( void *buffer, int offset, int size, void (*callback)(), int block_size );
void cdbios_callback_read_fast( void *buffer, int offset, int size, void (*callback)(), int block_size );
void cdbios_read( void *buffer, int offset, int size );
void cdbios_stop( void );
void cdbios_preseek( int sector );
int cdbios_get_time( sceCdCLOCK *clock );
int cdbios_get_filepos( char *path );

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
