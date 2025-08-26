#include "mts.h"

#include <eekernel.h>

void delay_callback(int id, u_short time, void *arg)
{
    int *thread_id;

    thread_id = arg;
    iWakeupThread(*thread_id);
    ExitHandler();
}

void MTS_DelayThread(int time)
{
    int thread_id;
    int unit;

    thread_id = GetThreadId();

    if (time > 0)
    {
        do
        {
            unit = (time > 0xFFFF) ? 0xFFFF : time;

            if (SetAlarm(unit, delay_callback, &thread_id) < 0)
            {
                scePrintf("Alarm set err\n");
                break;
            }

            time -= unit;
            SleepThread();
        } while (time > 0);
    }
}
