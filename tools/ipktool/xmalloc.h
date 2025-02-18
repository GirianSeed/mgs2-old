#ifndef __XMALLOC_H__
#define __XMALLOC_H__

#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

void *xmalloc(size_t size);
void *xcalloc(size_t num, size_t size);
void *xrealloc(void *ptr, size_t new_size);

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
