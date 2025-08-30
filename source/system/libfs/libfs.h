#ifndef __MGS2_LIBFS_H__
#define __MGS2_LIBFS_H__

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char *name;             // filename
    u_int pos;              // start sector
    unsigned char media;    // media type
    unsigned char layer;    // layer number (0 or 1)
    unsigned char alt;      // alternate file
    unsigned char pad;
} FS_FILE_INFO;

#define FS_MEDIA_CDROM  0   // cdrom0:
#define FS_MEDIA_PFS    1   // pfs0:
#define FS_MEDIA_HOST   2   // host0:

extern FS_FILE_INFO fs_file_info[]; /* in file.cnf */

extern int FS_CurrentLayer;

#define FS_FILEID_STAGE         (0)     // stage.dat
#define FS_FILEID_CODEC         (1)     // codec.dat
#define FS_FILEID_FACE          (2)     // face.dat
#define FS_FILEID_MOVIE         (3)     // movie.dat
#define FS_FILEID_VOX           (4)     // vox.dat
#define FS_FILEID_DEMO          (5)     // demo.dat
#define FS_FILEID_MOVIE2        (6)     // movie2.dat
#define FS_FILEID_MOVIEVR       (6)     // movievr.dat
#define FS_FILEID_STAGE2        (7)     // stage2.dat
#define FS_FILEID_VOX2          (8)     // vox2.dat
#define FS_FILEID_DEMO2         (9)     // demo2.dat
#define FS_MAX_FILEID           (10)

/* select.c */
void FS_StartDaemon( void );

/* stageld.c */
void FS_LoadStageDirectory(int layer);

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
