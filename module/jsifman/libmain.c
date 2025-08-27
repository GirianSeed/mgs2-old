#include "jsifman.h"

#include <eekernel.h>
#include <sif.h>
#include <sifcmd.h>
#include <sifrpc.h>
#include <stdio.h>

#define CMDBUF_SIZE 3
#define PACKET_SIZE 76

typedef struct {
    sceSifCmdHdr chdr;
    char data[PACKET_SIZE];
} JSIF_PACKET;

extern int callback_set_flag;
extern int init_flag;

extern sceSifCmdData sifcmd_buffer[CMDBUF_SIZE];

int sif_set_callback_func(u_int pos, sceSifCmdHandler func, void *data)
{
    sceSifCmdSRData srd;
    u_int id;

    DIntr();
    sceSifAddCmdHandler(pos, func, data);
    callback_set_flag |= 1 << pos;
    EIntr();

    srd.rno = 8;
    srd.value = callback_set_flag;
    id = sceSifSendCmd(SIF_CMDC_SET_SREG, &srd, sizeof(srd), NULL, NULL, 0);
    while (sceSifDmaStat(id) >= 0);

    return 0;
}

u_int sif_send_packet_and_data(u_int pos, u_int type, void *cp, int ps, void *dst, void *src, int size)
{
    JSIF_PACKET packet;
    JSIF_PACKET *pkt;
    u_int *cdst;
    u_int *csrc;
    int i;
    u_int id;

    pkt = &packet;
    pkt->chdr.opt = type;

    if (ps < 0 || ps > PACKET_SIZE)
    {
        printf("jsifman:PACKET SIZE OVER %d\n", ps);
    }

    if (ps > 0)
    {
        cdst = (u_int *)pkt->data;
        csrc = cp;

        for (i = ps / 4; i > 0; i--)
        {
            *cdst++ = *csrc++;
        }
    }

    ps += sizeof(sceSifCmdHdr);

    do
    {
        id = sceSifSendCmd(pos, pkt, ps, src, dst, size);
    }
    while (id == 0);

    return id;
}

u_int i_sif_send_packet_and_data(u_int pos, u_int type, void *cp, int ps, void *dst, void *src, int size)
{
    JSIF_PACKET packet;
    JSIF_PACKET *pkt;
    u_int *cdst;
    u_int *csrc;
    int i;
    u_int id;

    pkt = &packet;
    pkt->chdr.opt = type;

    if (ps < 0 || ps > PACKET_SIZE)
    {
        scePrintf("jsifman:PACKET SIZE OVER %d\n", ps);
    }

    if (ps > 0)
    {
        cdst = (u_int *)pkt->data;
        csrc = cp;

        for (i = ps / 4; i > 0; i--)
        {
            *cdst++ = *csrc++;
        }
    }

    ps += sizeof(sceSifCmdHdr);

    do
    {
        id = isceSifSendCmd(pos, pkt, ps, src, dst, size);
    }
    while (id == 0);

    return id;
}

void sif_send_direct(u_int pos, u_int type, void *cp, int ps, void *dst, void *src, int size)
{
    sceSifCmdHdr *cmd;

    cmd = cp;
    cmd->opt = type;
    sceSifSendCmd(pos, cmd, ps, src, dst, size);
}

void i_sif_send_direct(u_int pos, u_int type, void *cp, int ps, void *dst, void *src, int size)
{
    sceSifCmdHdr *cmd;

    cmd = cp;
    cmd->opt = type;
    isceSifSendCmd(pos, cmd, ps, src, dst, size);
}

u_int i_sif_send_mem(void *addr, void *data, u_int size)
{
    sceSifDmaData sd;
    u_int id;

    sd.data = (u_int)data;
    sd.addr = (u_int)addr;
    sd.size = size;
    sd.mode = 0;

    do
    {
        id = isceSifSetDma(&sd, 1);
    } while (id == 0);

    return id;
}

u_int sif_send_mem(void *addr, void *data, int size)
{
    sceSifDmaData sd;
    u_int id;

    sd.data = (u_int)data;
    sd.addr = (u_int)addr;
    sd.size = size;
    sd.mode = 0;

    do
    {
        id = sceSifSetDma(&sd, 1);
    } while (id == 0);

    return id;
}

int sif_check_status(u_int id)
{
    return sceSifDmaStat(id);
}

int sif_init(void)
{
    if (init_flag != 0)
    {
        return 0;
    }

    init_flag = 1;
    sceSifInitRpc(0);

    DIntr();
    sceSifSetCmdBuffer(sifcmd_buffer, sizeof(sifcmd_buffer));
    callback_set_flag = 0;
    EIntr();

    return 0;
}
