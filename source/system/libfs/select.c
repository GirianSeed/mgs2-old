#include "libfs.h"

#include <ctype.h>
#include <stdio.h>

#include "cdbios.h"

/* somewhere in libfs */
void FS_001006F8(void);
void FS_00101F88(void);

void to_upper(char *s)
{
    while (*s)
    {
        *s++ = toupper(*s);
    }
}

void init_file_info(FS_FILE_INFO *info)
{
    char name[64];

    while (info->name)
    {
        if (info->layer == FS_CurrentLayer)
        {
            switch (info->media)
            {
            case FS_MEDIA_CDROM:
                sprintf(name, "cdrom0:\\MGS2\\%s;1", info->name);
                to_upper(name + 7);
                name[5] = '0' + info->layer;
                break;
            case FS_MEDIA_PFS:
                sprintf(name, "pfs0:/mgs2/%s", info->name);
                break;
            case FS_MEDIA_HOST:
                sprintf(name, "host0:./%s", info->name);
                break;
            }

            info->pos = cdbios_get_filepos(name);
        }

        info++;
    }
}

void FS_StartDaemon(void)
{
    cdbios_init();

    FS_CurrentLayer = 0;
    init_file_info(fs_file_info);

    FS_001006F8();
    while (cdbios_get_status() != 0);

    FS_CurrentLayer = 1;
    init_file_info(fs_file_info);

    FS_LoadStageDir(0);
    FS_LoadStageDir(1);

    FS_CurrentLayer = 0;
    FS_00101F88();
}
