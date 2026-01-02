#include <stddef.h>
#include <stdlib.h>

#include <eekernel.h>
#include <sifrpc.h>
#include <libdev.h>
#include <libdma.h>
#include <libgraph.h>

#include "iopload.h"
#include "mts.h"

#include "../system/libgv/libgv.h"
#include "../system/libfs/libfs.h"
#include "../system/libdg/libdg.h"
#include "../system/libhzx/libhzx.h"
#include "../system/libgcl/libgcl.h"
#include "../system/libmt/libmt.h"
#include "../system/libmc/libmc.h"
#include "../game/game.h"

// from module/sound/sd_ee.c
extern void sd_init( void );

// local to main/main.c
extern int main_argc;
extern char **main_argv;
extern int main_thid;

extern char main_stack[0x4000];

// temporary externs
extern void DG_InitGraph( void );
extern void GV_ActorSystemExec( void );

void Main()
{
    int i;

    sceDevVif0Reset();
    sceDevVif1Reset();
    sceDevVu0Reset();
    sceDevVu1Reset();
    sceGsResetPath();
    CacheOn();
    sceDmaReset(1);
    sceSifInitRpc(0);

    for (i = 0; i < main_argc; i++) {
        /* do nothing */
    }

    ResetIOP();
    LoadModules( GV_NORMAL_MEMORY_TOP );
    DG_InitGraph();
    GV_StartDaemon();
    FS_StartDaemon();
    DG_StartDaemon();
    HZX_StartDaemon();
    GCL_StartDaemon();
    MT_StartDaemon();
    GM_StartDaemon();
    GV_SetSystemResident();
    MC_Init(NULL, 1);
    sd_init();

    rand();

    while (1) {
        GV_ActorSystemExec();
    }
}

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
