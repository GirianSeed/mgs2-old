#ifndef __MGS2_LIBMC_H__
#define __MGS2_LIBMC_H__

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

enum {
    MC_OP_IDLE = 0,
    MC_OP_SYNC = 1,
    MC_OP_POLL = 2,
    /* MC_OP_UNKN = 3, */
    MC_OP_OPEN = 4,
    MC_OP_CLOSE = 5,
    MC_OP_SEEK = 6,
    MC_OP_READ = 7,
    MC_OP_WRITE = 8,
    MC_OP_MKDIR = 9,
    MC_OP_CHDIR = 10,
    MC_OP_GETDIR = 11,
    MC_OP_GETDIR2 = 12,
    MC_OP_RENAME = 13,
    MC_OP_DELETE = 14,
    MC_OP_INFO = 15,
    MC_OP_FORMAT = 16,
    MC_OP_UNFORMAT = 17,
};

typedef struct _MC_CARD {
    /* +0x00 */ int      func;
    /* +0x04 */ int      step;
    /* +0x08 */ int      unk8[2][4];
    /* +0x28 */ int      unk28[2][4];
    /* +0x48 */ int      unk48[2][4];
    /* +0x68 */ int      unk68[2][4];
    /* +0x88 */ int      type;
    /* +0x8C */ int      max_slots[2];
    /* +0x94 */ int      port;
    /* +0x98 */ int      slot;
    /* +0x9C */ int      retries;
    /* +0xA0 */ int      unkA0;
    /* +0xA4 */ int      unkA4;
    /* +0xA8 */ int      unkA8;
    /* +0xAC */ int      fd;
    /* +0xB0 */ char    *name;
    /* +0xB4 */ char    *info;
    /* +0xB8 */ unsigned valid;
    /* +0xBC */ int      unkBC;
} MC_CARD; /* sizeof:0xC0 */

void MC_Init(MC_CARD *card, int reset);
void MC_Close(MC_CARD *card);

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
