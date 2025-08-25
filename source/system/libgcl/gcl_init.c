#include "libgcl.h"

#include "common.h"
#include "../libgv/libgv.h"

static int scenerio_code;

/**
 * @brief   GCX bytecode initialization handler.
 *
 * If @p id is the same as @c scenerio_code the script will be loaded
 * and set for execution, otherwise it will be skipped.
 *
 * @param   top     pointer to cached GCX script
 * @param   id      strcode of the script's basename
 *
 * @retval  1       on success
 * @retval  <= 0    on failure (but this can't happen)
 */
static int GCL_InitFunc( void *top, int id )
{
    if ((id & 0x00ffffff) == scenerio_code) {
        //printf("LOAD SCRIPT %d\n", scenerio_code);
        GCL_LoadScript( (char *)top );
    }
    return 1;
}

/**
 * @brief   Sets which GCX script to load.
 *
 * Any additional GCX scripts loaded from the stage will be ignored.
 * The default script filename is "scenerio.gcx" (\c 0x00180720).
 *
 * @remark  Yes I know the function name is spelled wrong.
 *
 * @param   code    strcode of the script's basename
 */
void GCL_ChangeSenerioCode( int code )
{
    scenerio_code = code;
}

/**
 * @brief   Initializes the GCL interpreter library.
 *
 * Initializes the library's internal state, registers the
 * GCX bytecode loader callback, and sets "scenerio.gcx" as
 * the default stage script to execute.
 */
void GCL_StartDaemon( void )
{
    GCL_ParseInit();
    GCL_InitVar();
    GCL_ResetCommList();
    GCL_InitBasicCommands();

    GV_SetLoader( 'g', (GV_LOADFUNC)GCL_InitFunc );
    GCL_ChangeSenerioCode( 0x00180720 ); // GV_StrCode("scenerio")
}

void GCL_ResetSystem( void )
{
    GCL_ResetLocalVar();
}
