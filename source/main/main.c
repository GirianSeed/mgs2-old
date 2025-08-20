#include <stddef.h>
#include <stdlib.h>

#include <eekernel.h>
#include <sifrpc.h>
#include <libdev.h>
#include <libdma.h>
#include <libgraph.h>

// from module/mts/mts.c
extern void MTS_BootThread( char *name, void (*func)(), int pri,
                void *stack_top, int stack_size, void *arg );

extern int main_argc;
extern char **main_argv;
extern int main_thid;

extern char main_stack[0x4000];
extern void Main();

int main( int argc, char *argv[] )
{
    main_argv = argv;
    main_argc = argc;
    main_thid = GetThreadId();

    MTS_BootThread( "MGS2MAIN", Main, 18, main_stack, 0x4000, NULL );
    while (1) {
        SleepThread();
    }
}
