#ifndef __MGS2_DATACNF_TAG_H__
#define __MGS2_DATACNF_TAG_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int id;
    int size;
} DATACNF_TAG;

typedef struct {
    int tagnum;
    DATACNF_TAG tags[0];
} DATACNF;

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
