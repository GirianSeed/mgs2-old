#include <stddef.h>
#include <stdlib.h>

// Xbox Title Libraries
#include <xtl.h>

#include "../system/libgv/libgv.h"
#include "../system/libfs/libfs.h"
#include "../system/libdg/libdg.h"
#include "../system/libhzx/libhzx.h"
#include "../system/libgcl/libgcl.h"
#include "../system/libmt/libmt.h"
#include "../game/game.h"

// from module/mts/mts.c
extern void MTS_BootThread( char *name, void (*func)(), int pri,
                void *stack_top, int stack_size, void *arg );

// from module/sound/sd_ee.c
extern void sd_init( void );

// temporary externs
extern void sub_4F6160( void );
extern void GV_ExecActorSystem( void );

void Main()
{
    GV_StartDaemon();
    FS_StartDaemon();
    DG_StartDaemon();
    HZX_StartDaemon();
    GCL_StartDaemon();
    MT_StartDaemon();
    sd_init();
    GM_StartDaemon();
    sub_4F6160(); // EU addr.

    while (1) {
        GV_ExecActorSystem();
    }
}

int main()
{
    MTS_BootThread( "MAIN", Main, 0, NULL, 0x4000, NULL );
    return 0;
}
