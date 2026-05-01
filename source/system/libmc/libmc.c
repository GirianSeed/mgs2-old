#include <libmc.h>

#include "system/libmc/libmc.h"

extern u_short D_001D087C;
extern u_short D_001D087E;

#define MC_SETFUNC(card, fn)    do { (card)->func = (fn); } while (0)
#define MC_RESET(card)          do { (card)->step = 0; } while (0)

void MC_NextSlot(MC_CARD *card)
{
    if (++card->slot >= card->max_slots[card->port]) {
        card->slot = 0;

        if (++card->port > 1) {
            card->port = 0;
        }
    }
}

int MC_Retry(MC_CARD *card) {
    if (++card->retries > 4) {
        return 1;
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/source/system/libmc/libmc", MC_GetCardType);
void MC_GetCardType(MC_CARD *card);

int MC_DoSync(MC_CARD *card)
{
    int cmd;
    int result;

    switch (sceMcSync(1, &cmd, &result)) {
    case sceMcExecRun:
        break;
    case sceMcExecFinish:
        if (result == sceMcResSucceed) {
            return 1;
        }

        if (result < -10 || result == sceMcResDeniedPermit) {
            if (card->unk8[card->port][card->slot] == card->type) {
                return 1;
            }
        }

        card->unk8[card->port][card->slot] = -0x200;
        return -1;
    case sceMcExecIdle:
        card->unk8[card->port][card->slot] = -0x200;
        return -1;
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/source/system/libmc/libmc", MC_Poll);
int MC_Poll(MC_CARD *card);

int func_00102FF0(MC_CARD *card)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    return MC_Poll(card);
}

INCLUDE_ASM("asm/nonmatchings/source/system/libmc/libmc", func_00103020);

int MC_SetOpen(MC_CARD *card, int port, int slot, char *name, char *info, unsigned valid)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_OPEN);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->port = port;
    card->slot = slot;
    card->name = name;
    card->info = info;
    card->valid = valid;
    return 1;
}

int MC_DoOpen(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcOpen(card->port, card->slot, card->name, (int)card->info)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch(result) {
            case sceMcResNoFormat:
                return -2;
            case sceMcResFullDevice:
            case sceMcResNoEntry:
            case sceMcResDeniedPermit:
            case sceMcResUpLimitHandle:
                return -1;
            }

            if (result >= 0) {
                card->fd = *(int *)card->valid = result;
                return 1;
            }

            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetClose(MC_CARD *card, char *name)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_CLOSE);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->name = name;
    return 1;
}

int MC_DoClose(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcClose((int)card->name)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch(result) {
            case sceMcResNoFormat:
                card->fd = -1;
                return -2;
            case sceMcResNoEntry:
                card->fd = -1;
                return -1;
            }

            if (result >= 0) {
                card->fd = -1;
                return 1;
            }

            card->fd = -1;
            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetSeek(MC_CARD *card, char *name, char *info, unsigned valid, int arg5)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_SEEK);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->name = name;
    card->info = info;
    card->valid = valid;
    card->unkBC = arg5;
    return 1;
}

int MC_DoSeek(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcSeek((int)card->name, (int)card->info, card->valid)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch (result) {
            case sceMcResNoFormat:
                card->fd = -1;
                return -2;
            case sceMcResNoEntry:
                card->fd = -1;
                return -1;
            }

            if (result >= 0) {
                if (card->unkBC) {
                    *(int *)card->unkBC = result;
                }

                return 1;
            }

            card->fd = -1;
            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetRead(MC_CARD *card, char *name, char *info, unsigned valid, int arg5)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_READ);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->name = name;
    card->info = info;
    card->valid = valid;
    card->unkBC = arg5;
    return 1;
}

int MC_DoRead(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcRead((int)card->name, card->info, card->valid)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch (result) {
            case sceMcResNoFormat:
                card->fd = -1;
                return -2;
            case sceMcResNoEntry:
                card->fd = -1;
                /* fallthrough */
            case sceMcResFullDevice:
            case sceMcResDeniedPermit:
                return -1;
            }

            if (result >= 0) {
                if (card->unkBC) {
                    *(int *)card->unkBC = result;
                }

                return 1;
            }

            card->fd = 0;
            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetWrite(MC_CARD *card, char *name, char *info, unsigned valid, int arg5)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_WRITE);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->name = name;
    card->info = info;
    card->valid = valid;
    card->unkBC = arg5;
    return 1;
}

int MC_DoWrite(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcWrite((int)card->name, card->info, card->valid)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch (result) {
            case sceMcResNoFormat:
                card->fd = -1;
                return -2;
            case sceMcResNoEntry:
                card->fd = -1;
                /* fallthrough */
            case sceMcResFullDevice:
            case sceMcResDeniedPermit:
            case sceMcResFailReplace:
                return -1;
            }

            if (result >= 0) {
                if (card->unkBC) {
                    *(int *)card->unkBC = result;
                }

                return 1;
            }

            card->fd = -1;
            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetMkdir(MC_CARD *card, int port, int slot, char *name)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_MKDIR);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->port = port;
    card->slot = slot;
    card->name = name;
    return 1;
}

int MC_DoMkdir(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcMkdir(card->port, card->slot, card->name)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch (result) {
            case sceMcResNoFormat:
                return -2;
            case sceMcResFullDevice:
            case sceMcResNoEntry:
                return -1;
            }

            if (result >= 0) {
                return 1;
            }

            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetChdir(MC_CARD *card, int port, int slot, char *name, char *info)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_CHDIR);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->port = port;
    card->slot = slot;
    card->name = name;
    card->info = info;
    return 1;
}

int MC_DoChdir(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcChdir(card->port, card->slot, card->name, card->info)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch (result) {
            case sceMcResNoFormat:
                return -2;
            case sceMcResFullDevice:
            case sceMcResNoEntry:
                return -1;
            }

            if (result >= 0) {
                return 1;
            }

            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetGetDirInternal(MC_CARD *card, int port, int slot, char *name, unsigned valid, char *info, int arg7)
{
    card->retries = 0;
    card->unkA0 = 0;
    card->port = port;
    card->slot = slot;
    card->name = name;
    card->valid = valid;
    card->info = info;
    card->unkBC = arg7;
    return 1;
}

int MC_SetGetdir(MC_CARD *card, int port, int slot, char *name, unsigned valid, char *info, int arg7)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_GETDIR);
    MC_RESET(card);

    return MC_SetGetDirInternal(card, port, slot, name, valid, info, arg7);
}

int MC_SetGetdir2(MC_CARD *card, int port, int slot, char *name, unsigned valid, char *info, int arg7)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_GETDIR2);
    MC_RESET(card);

    return MC_SetGetDirInternal(card, port, slot, name, valid, info, arg7);
}

int MC_DoGetDir(MC_CARD *card, unsigned mode)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcGetDir(card->port, card->slot, card->name, mode, (int)card->info, (sceMcTblGetDir *)card->valid)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch(result) {
            case sceMcResNoFormat:
                return -2;
            case sceMcResNoEntry:
                return -1;
            }

            if (result >= 0) {
                *(int *)card->unkBC = result;
                return 1;
            }

            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetDelete(MC_CARD *card, int port, int slot, char *name)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_DELETE);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->port = port;
    card->slot = slot;
    card->name = name;
    return 1;
}

int MC_DoDelete(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcDelete(card->port, card->slot, card->name)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch(result) {
            case sceMcResNoFormat:
                return -2;
            case sceMcResNoEntry:
            case sceMcResDeniedPermit:
            case sceMcResNotEmpty:
                return -1;
            }

            if (result >= 0) {
                return 1;
            }

            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetRename(MC_CARD *card, int port, int slot, char *name, char *info)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_RENAME);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->port = port;
    card->slot = slot;
    card->name = name;
    card->info = info;

    return 1;
}

int MC_DoRename(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcRename(card->port, card->slot, card->name, card->info)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch(result) {
            case sceMcResNoFormat:
                return -2;
            case sceMcResNoEntry:
                return -1;
            }

            if (result >= 0) {
                return 1;
            }

            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetFileInfo(MC_CARD *card, int port, int slot, char *name, char *info, unsigned valid)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_INFO);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->port = port;
    card->slot = slot;
    card->name = name;
    card->info = info;
    card->valid = valid;
    return 1;
}

int MC_DoFileInfo(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcSetFileInfo(card->port, card->slot, card->name, card->info, card->valid)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            switch(result) {
            case sceMcResNoFormat:
                return -2;
            case sceMcResNoEntry:
                return -1;
            }

            if (result >= 0) {
                return 1;
            }

            return -2;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetFormat(MC_CARD *card, int port, int slot)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_FORMAT);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->port = port;
    card->slot = slot;
    return 1;
}

int MC_DoFormat(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcFormat(card->port, card->slot)) {
            card->step++;
            break;
        }

        if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            if (result == sceMcResSucceed) {
                return 1;
            }

            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int MC_SetUnformat(MC_CARD *card, int port, int slot)
{
    if (card->func) {
        return 0;
    }

    MC_SETFUNC(card, MC_OP_UNFORMAT);
    MC_RESET(card);

    card->retries = 0;
    card->unkA0 = 0;
    card->port = port;
    card->slot = slot;
    return 1;
}

int MC_DoUnformat(MC_CARD *card)
{
    int cmd;
    int result;

    switch (card->step) {
    case 0:
        if (!sceMcUnformat(card->port, card->slot)) {
            card->step++;
        } else if (MC_Retry(card)) {
            return -1;
        }
        break;
    case 1:
        switch (sceMcSync(1, &cmd, &result)) {
        case sceMcExecRun:
            break;
        case sceMcExecFinish:
            if (result == sceMcResSucceed) {
                return 1;
            }

            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        case sceMcExecIdle:
            if (MC_Retry(card)) {
                return -1;
            }

            card->step--;
            break;
        }
        break;
    }

    return 0;
}

int func_00104690(MC_CARD *card)
{
    return card->func != MC_OP_IDLE && card->func != MC_OP_SYNC;
}

int func_001046A0(MC_CARD *card)
{
    if (card->func != MC_OP_IDLE) {
        return 0;
    }

    return card->unkA0;
}

int func_001046B8(MC_CARD *card, int port, int slot)
{
    return card->unk8[port][slot];
}

int func_001046D0(MC_CARD *card, int port, int slot)
{
    return card->unk8[port][slot] != card->unk68[port][slot];
}

int func_00104700(MC_CARD *card, int port, int slot)
{
    return card->unk28[port][slot] * 1024;
}

int func_00104720(MC_CARD *card, int port, int slot)
{
    return card->unk48[port][slot];
}

int func_00104738(MC_CARD *card, int port)
{
    return card->max_slots[port];
}

void func_00104748(MC_CARD *card, int arg1)
{
    if (arg1 != 0) {
        if (card->unkA4 == 0) {
            card->unkA4 = 5;
        }
    } else {
        card->unkA4 = 0;
    }
}

int func_00104770(MC_CARD *card)
{
    if (card->unkA8 == 2) {
        card->unkA8 = 0;
        return 1;
    }

    return 0;
}

int func_00104798(MC_CARD *card)
{
    return card->unkA8 == 1;
}

void MC_Init(MC_CARD *card, int reset)
{
    int i, j;

    if (reset) {
        while (sceMcInit() != sceMcIniSucceed);
        D_001D087C = D_001D087E = -0x8000;
    }

    if (card) {
        card->step = 0;
        card->func = MC_OP_IDLE;
        card->fd = -1;
        card->slot = 0;
        card->port = 0;
        card->unkA4 = 0;
        card->unkA8 = 0;

        for (i = 0; i < 2; i++) {
            for (j = 0; j < 4; j++) {
                card->unk8[i][j] = card->unk68[i][j] = 0;
            }
        }
    }
}

void MC_Close(MC_CARD *card)
{
    sceMcSync(0, NULL, NULL);

    if (card->fd >= 0) {
        while (sceMcClose(card->fd) == sceMcResSucceed);
        sceMcSync(0, NULL, NULL);
    }
}

INCLUDE_ASM("asm/nonmatchings/source/system/libmc/libmc", func_001048D8);

void func_00104B00(MC_CARD *card)
{
    if (card->func == MC_OP_IDLE) {
        if (card->unkA4 != 0 && --card->unkA4 == 0) {
            MC_GetCardType(card);
        }
    }
}
