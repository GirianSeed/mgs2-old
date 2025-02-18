#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include <sys/types.h>
#include <sys/stat.h>
#include "myfsutil.h"

/******************************************************************************
 * Get file metadata by filename
 */

size_t get_stat_size(const char *filename)
{
    struct stat st;

    int ret = stat(filename, &st);
    if (ret == 0)
        return st.st_size;
    else
        return 0;
}

time_t get_stat_atime(const char *filename)
{
    struct stat st;

    int ret = stat(filename, &st);
    if (ret == 0)
        return st.st_atime;
    else
        return 0;
}

time_t get_stat_mtime(const char *filename)
{
    struct stat st;

    int ret = stat(filename, &st);
    if (ret == 0)
        return st.st_mtime;
    else
        return 0;
}

time_t get_stat_ctime(const char *filename)
{
    struct stat st;

    int ret = stat(filename, &st);
    if (ret == 0)
        return st.st_ctime;
    else
        return 0;
}

/******************************************************************************
 * Get file metadata from stream
 */

size_t get_fstat_size(FILE *fstream)
{
    struct stat st;

    int fd = fileno(fstream);
    int ret = fstat(fd, &st);
    if (ret == 0)
        return st.st_size;
    else
        return 0;
}

time_t get_fstat_atime(FILE *fstream)
{
    struct stat st;

    int fd = fileno(fstream);
    int ret = fstat(fd, &st);
    if (ret == 0)
        return st.st_atime;
    else
        return 0;
}

time_t get_fstat_mtime(FILE *fstream)
{
    struct stat st;

    int fd = fileno(fstream);
    int ret = fstat(fd, &st);
    if (ret == 0)
        return st.st_mtime;
    else
        return 0;
}

time_t get_fstat_ctime(FILE *fstream)
{
    struct stat st;

    int fd = fileno(fstream);
    int ret = fstat(fd, &st);
    if (ret == 0)
        return st.st_ctime;
    else
        return 0;
}
