#include "common.h"
#include "libgv.h"

extern void *GV_ResidentMemoryTop;
extern void *GV_UserResidentTop;

void GV_InitResidentMemory(void)
{
    GV_ResidentMemoryTop = GV_NORMAL_MEMORY_TOP;
}

void GV_SetSystemResident(void)
{
    GV_UserResidentTop = GV_ResidentMemoryTop;
}

void GV_ResetResidentMemory(void)
{
    GV_ResidentMemoryTop = GV_UserResidentTop;
}

void *GV_AllocResidentMemory(int size, int id)
{
    GV_MEMALLOC *alloc;

    size = (size + sizeof(*alloc) + 15) & ~15;

    alloc = GV_ResidentMemoryTop - size;
    GV_ResidentMemoryTop = alloc;

    alloc->size = size;
    alloc->id = id;

    return alloc + 1;
}

void *GV_AllocResidentMemoryAligned(int size, int id, int align)
{
    u_int base;
    GV_MEMALLOC *alloc;
    int aligned;

    base = (u_int)GV_ResidentMemoryTop - size;

    aligned = base - (base % align);
    size = (u_int)GV_ResidentMemoryTop - aligned + sizeof(*alloc);

    alloc = GV_ResidentMemoryTop - size;
    GV_ResidentMemoryTop = alloc;

    alloc->size = size;
    alloc->id = id;

    return alloc + 1;
}

void GV_LoadResidentMemory(void)
{
    char *ptr;
    GV_MEMALLOC *alloc;

    ptr = GV_ResidentMemoryTop;
    while (ptr < GV_NORMAL_MEMORY_TOP)
    {
        alloc = (GV_MEMALLOC *)ptr;

        if (alloc->id != 0)
        {
            GV_LoadInit(alloc + 1, alloc->id, GV_REGION_RESIDENT);
        }

        ptr += alloc->size;
    }
}

int GV_GetResidentDataSize(void *ptr)
{
    GV_MEMALLOC *alloc;

    alloc = (GV_MEMALLOC *)ptr - 1;
    return alloc->size;
}
