#include "iopload.h"

#include <stdio.h>

#include <eekernel.h>
#include <libcdvd.h>
#include <sifdev.h>
#include <sifrpc.h>

void ResetIOP(void)
{
    sceCdInit(SCECdINIT);
    sceCdMmode(SCECdDVD);

    while (!sceSifRebootIop("cdrom0:\\MODULES\\IOPRP255.IMG;1"));
    while (!sceSifSyncIop());

    sceSifInitRpc(0);
    sceCdInit(SCECdINIT);
    sceFsReset();
    sceCdMmode(SCECdDVD);
}

static void load_file(const char *name, void *buf)
{
    int fd;
    int size;

    while ((fd = sceOpen(name, SCE_RDONLY)) < 0);

    size = sceLseek(fd, 0, SCE_SEEK_END);
    sceLseek(fd, 0, SCE_SEEK_SET);

    sceRead(fd, buf, size);
    sceClose(fd);

    FlushCache(WRITEBACK_DCACHE);
}

void LoadModules(void *buf)
{
    char args[16];
    int result;

    sprintf(args, "%08x", (u_int)buf);
    load_file("cdrom0:\\MODULES\\MODULE.IPK;1", buf);

    while (sceSifLoadStartModule("cdrom0:\\MODULES\\PLD.IRX;1", 9, args, &result) < 0);
}
