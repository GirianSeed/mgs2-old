#include <stddef.h>
#include <stdlib.h>

#include "mydefs.h"
#include "xmalloc.h"

/******************************************************************************
 * abort-on-failure memory wrappers
 */

void *xmalloc(size_t size)
{
    void *ptr = malloc(size);

    if (ptr == NULL) {
        eprintf("xmalloc: memory exhausted\n");
        abort();
    }
    return ptr;
}
void *xcalloc(size_t num, size_t size)
{
    void *ptr = calloc(num, size);

    if (ptr == NULL) {
        eprintf("xcalloc: memory exhausted\n");
        abort();
    }
    return ptr;
}
void *xrealloc(void *ptr, size_t new_size)
{
    void *rptr = realloc(ptr, new_size);

    if (!rptr && (!ptr || new_size)) {
        eprintf("xrealloc: memory exhausted\n");
        abort();
    }
    return rptr;
}

