#include "mts.h"
#include "mts_private.h"

#include <eekernel.h>

static inline int CheckEvent(int mode, int mask, int value)
{
    if (mode & 0x1)
    {
        if ((value & mask) == mask)
        {
            return 1;
        }
    }
    else if (mode & 0x2)
    {
        if ((value & mask) != 0)
        {
            return 1;
        }
    }

    return 0;
}

void *MTS_DestroyEvent(MTS_EVENTFLAG *ef)
{
    ef->wait_threadid = 0;
    ef->mode = 0;
    return ef;
}

void event_callback(int id, u_short time, void *arg)
{
    MTS_EVENTFLAG *ef;

    ef = arg;
    ef->value = -1;

    iWakeupThread(ef->wait_threadid);
    ExitHandler();
}

int MTS_CreateEvent(MTS_EVENTFLAG *ef, int mask, int mode, int time)
{
    int alarm_id;
    int value;

    DIntr();

    ef->mode = mode;
    ef->mask = mask;
    ef->wait_threadid = GetThreadId();

    if (CheckEvent(ef->mode, ef->mask, ef->value))
    {
        if (mode & 0x4)
        {
            ef->mode = 0;
            ef->value = 0;
        }

        EIntr();
        return -1;
    }

    EIntr();

    alarm_id = SetAlarm(time, event_callback, ef);
    if (alarm_id < 0)
    {
        return -3;
    }

    SleepThread();
    CancelWakeupThread(ef->wait_threadid);

    value = ef->value;

    if (mode & 0x4)
    {
        DIntr();

        ef->wait_threadid = 0;
        ef->mode = 0;
        ef->value = 0;

        EIntr();
    }

    ReleaseAlarm(alarm_id);

    if (value < 0)
    {
        return -2;
    }

    return value;
}

int MTS_IntrSetEvent(MTS_EVENTFLAG *ef, int value)
{
    DIntr();

    if ((ef->value & value) == 0)
    {
        ef->value = ef->value | value;

        if (CheckEvent(ef->mode, ef->mask, ef->value))
        {
            EIntr();
            WakeupThread(ef->wait_threadid);
        }
    }

    EIntr();
    return 0;
}

int MTS_SetEvent(MTS_EVENTFLAG *ef, int value)
{
    if ((ef->value & value) == 0)
    {
        ef->value |= value;

        if (ef->wait_threadid == 0)
        {
            return 0;
        }

        if (CheckEvent(ef->mode, ef->mask, ef->value))
        {
            iWakeupThread(ef->wait_threadid);
        }
    }

    return 0;
}

int MTS_ClearEvent(MTS_EVENTFLAG *ef)
{
    ef->value = -1;

    if (ef->wait_threadid == 0)
    {
        return 0;
    }

    iWakeupThread(ef->wait_threadid);
    return 0;
}
