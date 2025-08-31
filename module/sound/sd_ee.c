#include <stddef.h>
#include <eekernel.h>
#include <libgraph.h>
#include <sif.h>
#include <sifcmd.h>
#include <sifrpc.h>

#include "sd_ee.h"
#include "jsifman.h"

#define CACHED(p)       ((void *)((unsigned int)(p) & 0x1fffffff))
#define UNCACHED(p)     ((void *)((unsigned int)(p) | 0x20000000))

static u_char status[64] __attribute__((aligned(64)));

int sd_init( void )
{
    // todo: decompile
}

void sd_set_cli( int sound_code )
{
    // todo: decompile
}

void *sd_status( void )
{
    return UNCACHED(&status);
}
