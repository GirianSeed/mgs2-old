#include <stddef.h>
#include <stdlib.h>
#include <xtl.h>

// from module/mts/mts.c
extern void MTS_BootThread( char *name, void (*func)(), int pri,
                void *stack_top, int stack_size, void *arg );

// todo: decompile
extern void Main();

int main()
{
    MTS_BootThread( "MAIN", Main, 0, NULL, 0x4000, NULL );
    return 0;
}
