#include "jsifman.h"

#include <eekernel.h>
#include <sifcmd.h>

#define NUM_QUEUES 8

#define SIF_POS 0

#define CMD_RETVAL 0
#define CMD_GETMEM 1

typedef struct {
    u_int index;
    void *dst;
    void *src;
    u_int size;
} RV_PACKET;

typedef struct {
    sceSifCmdHdr chdr;
    RV_PACKET packet;
} RV_CMD;

extern int init_flag;

extern int SIF_RV_Queue_id;
extern RV_PACKET SIF_RV_Queue[NUM_QUEUES];

static inline void rv_cmd_return_value(RV_PACKET *packet, RV_PACKET *queue)
{
    int index;
    int i;

    index = packet->index & 0x7FFFFFFF;
    for (i = NUM_QUEUES; i > 0; i--, queue++)
    {
        if ((index) == queue->index)
        {
            *queue = *packet;
            break;
        }
    }
}

static inline void rv_cmd_get_mem(RV_PACKET *packet)
{
    packet->index |= 0x80000000;
    i_sif_send_packet_and_data(SIF_POS, CMD_RETVAL, packet, sizeof(*packet), packet->dst, packet->src, packet->size);
}

void rv_man_callback(void *cp, void *data)
{
    RV_CMD *cmd;
    RV_PACKET *queue;

    cmd = cp;
    queue = data;

    switch (cmd->chdr.opt)
    {
    case CMD_RETVAL:
        rv_cmd_return_value(&cmd->packet, queue);
        break;

    case CMD_GETMEM:
        rv_cmd_get_mem(&cmd->packet);
        break;
    }

    ExitHandler();
}

int sif_init_rv_man(void)
{
    int i;

    if (init_flag != 0)
    {
        return 0;
    }

    init_flag = 1;

    for (i = 0; i < NUM_QUEUES; i++)
    {
        SIF_RV_Queue[i].index = 0;
    }

    SIF_RV_Queue_id = 1;

    sif_set_callback_func(SIF_POS, rv_man_callback, SIF_RV_Queue);
    return 0;
}

void *sif_rv_get_queue(void)
{
    RV_PACKET *queue;
    int i;

    queue = SIF_RV_Queue;
    for (i = NUM_QUEUES; i > 0; i--, queue++)
    {
        if (queue->index == 0)
        {
            queue->index = SIF_RV_Queue_id;

            SIF_RV_Queue_id = (SIF_RV_Queue_id + 1) & 0x7FFFFFFF;
            if (SIF_RV_Queue_id == 0)
            {
                SIF_RV_Queue_id = 1;
            }

            return queue;
        }
    }

    return NULL;
}

void sif_rv_call_func(u_int pos, u_int type, void *packet)
{
    RV_PACKET *pkt;

    pkt = packet;
    sif_send_packet_and_data(pos, type, pkt, sizeof(*pkt), NULL, NULL, 0);
}

u_int sif_rv_return_value(void *packet)
{
    RV_PACKET *pkt;

    pkt = packet;
    pkt->index |= 0x80000000;
    return sif_send_packet_and_data(SIF_POS, CMD_RETVAL, pkt, sizeof(*pkt), NULL, NULL, 0);
}

u_int i_sif_rv_return_value(void *packet)
{
    RV_PACKET *pkt;

    pkt = packet;
    pkt->index |= 0x80000000;
    return i_sif_send_packet_and_data(SIF_POS, CMD_RETVAL, pkt, sizeof(*pkt), NULL, NULL, 0);
}

void sif_rv_release_queue(void *packet)
{
    RV_PACKET *pkt;

    pkt = packet;
    pkt->index = 0;
}

void *sif_get_mem(void *dst, void *src, u_int size)
{
    RV_PACKET *queue;

    queue = sif_rv_get_queue();
    if (queue != NULL)
    {
        queue->dst = dst;
        queue->src = src;
        queue->size = size;
        sif_rv_call_func(SIF_POS, CMD_GETMEM, queue);
    }

    return queue;
}
