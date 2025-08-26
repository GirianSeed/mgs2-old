#ifndef __KCEJ_MTS_PRIVATE_H__
#define __KCEJ_MTS_PRIVATE_H__

#define MTS_HANGUP()    (*(int *)1 = 0)

#if defined(__GNUC__)
#define MTS_ASSERT(cond, format, ...)                           \
    if (!(cond)) {                                              \
        printf(format, ##__VA_ARGS__);                          \
        MTS_HANGUP();                                           \
    }
#else
#define MTS_ASSERT(cond, format, ...)                           \
    if (!(cond)) {                                              \
        printf(format __VA_OPT__(,) __VA_ARGS__);               \
        MTS_HANGUP();                                           \
    }
#endif

#endif // {{{ END OF FILE }}}
