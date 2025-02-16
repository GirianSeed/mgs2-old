#ifndef __MGS2_CHARA_H__
#define __MGS2_CHARA_H__

#include "strcode.h"

typedef void *(*NEWCHARA)();

typedef struct {
	unsigned int class_id;
	NEWCHARA func;
} CHARA;

#endif // {{{ END OF FILE }}}
