#include "mts.h"

void MTS_SetPrintFunc(void (*func)(char *))
{
    /* do nothing */
}

int cprintf(const char *format, ...)
{
    return 0;
}

int printf(const char *format, ...)
{
    return 0;
}

void excep_printf(const char *format, ...)
{
    /* do nothing */
}
