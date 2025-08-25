#include "common.h"
#include "libgv.h"

void GV_MlBufferInit(GV_MEMLIST *list, char *name, void *top, void *bottom, int align)
{
    GV_MEMTAG *tag;

    list->now_bottom = bottom;
    list->empty.next = NULL;
    list->empty.size = 0;

    list->name = name;
    list->align = align;
    list->top = top;
    list->bottom = bottom;

    tag = top;
    tag->size = bottom - top;
    tag->next = NULL;

    list->now_bottom = top;
    list->empty.next = top;
    list->empty.size = 0;
}

void *GV_MlMalloc(GV_MEMLIST *list, int size)
{
    int asize;
    int align;
    GV_MEMTAG *prev;
    GV_MEMTAG *iter;
    GV_MEMTAG *next;

    asize = ((size + list->align - 1) / list->align) * list->align;
    align = (list->align < 16) ? 16 : list->align;

    for (prev = iter = &list->empty; iter != NULL; prev = iter, iter = iter->next)
    {
        size = iter->size;

        if (size == asize || size - asize < (u_int)align)
        {
            prev->next = iter->next;
            iter->next = (void *)size;
            return iter;
        }

        if (asize < size - align)
        {
            iter->size = size - asize;
            next = (GV_MEMTAG *)((char *)iter + size - asize);
            next->next = (void *)asize;
            return next;
        }
    }

    return NULL;
}

void GV_MlFree(GV_MEMLIST *list, void *ptr, int size)
{
    GV_MEMTAG *tag;
    GV_MEMTAG *found;
    GV_MEMTAG *prev;
    GV_MEMTAG *iter;

    tag = ptr;
    found = &list->empty;
    for (prev = iter = &list->empty; iter != NULL; prev = iter, iter = iter->next)
    {
        if (((char *)tag + size) == (char *)iter)
        {
            tag->next = iter->next;
            tag->size = iter->size + size;
            prev->next = tag;

            if (tag->next != NULL)
            {
                if (((char *)tag->next + tag->next->size) == (char *)tag)
                {
                    tag->next->size += tag->size;
                    prev->next = tag->next;
                }
            }

            return;
        }

        if (((char *)iter + iter->size) == (char *)tag)
        {
            iter->size += size;
            return;
        }

        found = (tag < iter) ? prev : found;
    }

    for (iter = &list->empty; iter != NULL; iter = iter->next)
    {
        if (tag > iter->next)
        {
            found = iter;
            break;
        }
    }

    tag->size = size;
    tag->next = found->next;
    found->next = tag;
}
