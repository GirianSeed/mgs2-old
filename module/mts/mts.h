#ifndef __KCEJ_MTS_H__
#define __KCEJ_MTS_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int value;
    int mask;
    int mode;
    int wait_threadid;
} MTS_EVENTFLAG;

/* mts.c */
void MTS_ExitThread( void );
int MTS_NewThread( char *name, void *entry, int priority, void *stackp, int stack_size, void *arg );
void MTS_BootThread( char *name, void *entry, int priority, void *stackp, int stack_size, void *arg );
void MTS_Exit( void );
void MTS_Panic( void );

/* exception.c */
void MTS_SetPrintFunc( void (*func)(char *) );
int cprintf( const char *format, ... );
int printf( const char *format, ... );
void excep_printf( const char *format, ... );

/* event.c */
void *MTS_DestroyEvent( MTS_EVENTFLAG *ef );
int MTS_CreateEvent( MTS_EVENTFLAG *ef, int mask, int mode, int time );
int MTS_IntrSetEvent( MTS_EVENTFLAG *ef, int value );
int MTS_SetEvent( MTS_EVENTFLAG *ef, int value );
int MTS_ClearEvent( MTS_EVENTFLAG *ef );
void MTS_SleepThread( int time );

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
