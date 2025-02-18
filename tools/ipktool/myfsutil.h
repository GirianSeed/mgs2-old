#ifndef __MYFSUTIL_H__
#define __MYFSUTIL_H__

#include <stdio.h>      // for FILE
#include <stddef.h>     // for size_t
#include <time.h>       // for time_t

#ifdef __cplusplus
extern "C" {
#endif

size_t get_stat_size(const char *filename);
time_t get_stat_atime(const char *filename);
time_t get_stat_mtime(const char *filename);
time_t get_stat_ctime(const char *filename);

size_t get_fstat_size(FILE *fstream);
time_t get_fstat_atime(FILE *fstream);
time_t get_fstat_mtime(FILE *fstream);
time_t get_fstat_ctime(FILE *fstream);

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
