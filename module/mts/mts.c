#include "mts.h"
#include "mts_private.h"

#include <eekernel.h>

typedef struct {
    int res1;
    int res2;
    int res3;
    int res4;
    int id;
    int priority;
    void (*entry)(int, void *);
    void *arg;
} MTS_THREAD;

extern MTS_THREAD threadlist[8];

extern char *__gp_reg; // TODO

void MTS_ExitThread(void)
{
    int thread_id;
    int i;

    thread_id = GetThreadId();
    DIntr();

    for (i = 0; i < 8; i++)
    {
        if (threadlist[i].id == thread_id)
        {
            threadlist[i].id = -1;
            break;
        }
    }

    EIntr();
    ExitDeleteThread();
}

void exit_thread(int thread_id)
{
    int i;

    DIntr();

    for (i = 0; i < 8; i++)
    {
        if (threadlist[i].id == thread_id)
        {
            threadlist[i].id = -1;
            break;
        }
    }

    EIntr();

    if (i != 8)
    {
        TerminateThread(thread_id);
        DeleteThread(thread_id);
    }
}

MTS_THREAD *new_thread(void)
{
    int i;

    DIntr();

    for (i = 0; i < 8; i++)
    {
        if (threadlist[i].id < 0)
        {
            threadlist[i].id = 0;
            EIntr();
            return &threadlist[i];
        }
    }

    EIntr();
    return NULL;
}

void NewThread(void *arg)
{
    MTS_THREAD *thread;

    thread = arg;
    thread->entry(thread->id, thread->arg);
    MTS_ExitThread();
}

int MTS_NewThread(char *name, void (*entry)(), int pri, void *stack_top, int stack_size, void *arg)
{
    struct ThreadParam param;
    MTS_THREAD *thread;

    thread = new_thread();

    param.entry = NewThread;
    param.stack = stack_top;
    param.stackSize = stack_size;
    param.gpReg = &__gp_reg;
    param.initPriority = pri;
    param.option = 0;

    thread->id = CreateThread(&param);
    thread->priority = pri;
    thread->arg = arg;
    thread->entry = entry;

    StartThread(thread->id, thread);
    return thread->id;
}

void init_threads(void)
{
    int i;

    for (i = 0; i < 8; i++)
    {
        threadlist[i].id = -1;
    }
}

void MTS_BootThread(char *name, void (*entry)(), int pri, void *stack_top, int stack_size, void *arg)
{
    InitThread();
    cprintf("MTS\n");
    init_threads();

    MTS_NewThread(name, entry, pri, stack_top, stack_size, arg);
    SleepThread();
}

void MTS_Exit(void)
{
    int thread_id;
    int i;

    thread_id = GetThreadId();

    for (i = 0; i < 8; i++)
    {
        if (threadlist[i].id >= 0 && threadlist[i].id != thread_id)
        {
            exit_thread(threadlist[i].id);
        }
    }
}

void MTS_Panic(void)
{
#if 0
    MTS_HANGUP();
#endif
}
