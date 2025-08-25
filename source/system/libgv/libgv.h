#ifndef __MGS2_LIBGV_H__
#define __MGS2_LIBGV_H__

#include <libpad.h>     // for SCE_PAD*

#ifdef __cplusplus
extern "C" {
#endif

/*---------------------------------------------------------------------------*/

#define PAD_U           SCE_PADLup      // 0x1000 ↑
#define PAD_D           SCE_PADLdown    // 0x4000 ↓
#define PAD_L           SCE_PADLleft    // 0x8000 ←
#define PAD_R           SCE_PADLright   // 0x2000 →
#define PAD_A           SCE_PADRright   // 0x0020 ○
#define PAD_B           SCE_PADRdown    // 0x0040 ×
#define PAD_X           SCE_PADRup      // 0x0010 △
#define PAD_Y           SCE_PADRleft    // 0x0080 □
#define PAD_L1          SCE_PADL1       // 0x0004 L1
#define PAD_R1          SCE_PADR1       // 0x0008 R1
#define PAD_L2          SCE_PADL2       // 0x0001 L2
#define PAD_R2          SCE_PADR2       // 0x0002 R2
#define PAD_STA         SCE_PADstart    // 0x0800 STA
#define PAD_SEL         SCE_PADselect   // 0x0100 SEL
#define PAD_AL          SCE_PADi        // 0x0200 L3
#define PAD_AR          SCE_PADj        // 0x0400 R3

/* button masks */
#define PAD_UDLR        (PAD_U  | PAD_D  | PAD_L  | PAD_R)
#define PAD_ABXY        (PAD_A  | PAD_B  | PAD_X  | PAD_Y)
#define PAD_LR          (PAD_L1 | PAD_L2 | PAD_R1 | PAD_R2)

/* button aliases */
#define PAD_UP          PAD_U           // ↑
#define PAD_DOWN        PAD_D           // ↓
#define PAD_LEFT        PAD_L           // ←
#define PAD_RIGHT       PAD_R           // →
#define PAD_CIRCLE      PAD_A           // ○
#define PAD_CROSS       PAD_B           // ×
#define PAD_TRIANGLE    PAD_X           // △
#define PAD_SQUARE      PAD_Y           // □
#define PAD_START       PAD_STA         // START
#define PAD_SELECT      PAD_SEL         // SELECT
#define PAD_L3          PAD_AL          // L3
#define PAD_R3          PAD_AR          // R3

#define GV_PACKET_MEMORY0       0
#define GV_PACKET_MEMORY1       1
#define GV_NORMAL_MEMORY        2
#define GV_MEMORY_MAX           3

#define GV_NORMAL_MEMORY_TOP    ((void *)0x00C00000)
#define GV_NORMAL_MEMORY_SIZE   0xf00000 /* 15MiB */

#define GV_PACKET_MEMORY0_TOP   ((void *)0x01b00000)
#define GV_PACKET_MEMORY1_TOP   ((void *)0x01d00000)
#define GV_PACKET_MEMORY_SIZE   0x200000 /* 2MiB */

/*---------------------------------------------------------------------------*/

typedef struct _GV_ACT {
    /* +0x00 */ struct _GV_ACT *next;
    /* +0x04 */ void (*act)(struct _GV_ACT *);
    /* +0x08 */ int     flag;
    /* +0x0C */ int     strcode;
    /* +0x10 */ struct _GV_ACT *prev;
    /* +0x14 */ void (*die)(struct _GV_ACT *);
    /* +0x18 */ void (*free)(void *);
    /* +0x1C */ short   priority;
    /* +0x1E */ short   field_1E;
    /* +0x20 */ int     runtime;
    /* +0x24 */ int     count;
    /* +0x28 */ const char *filename;
    /* +0x2C */ int     res1;
} GV_ACT; /* sizeof:0x30 */

typedef struct _GV_HOOK {
    /* +0x00 */ GV_ACT *actor;
    /* +0x04 */ GV_ACT *prev;
    /* +0x08 */ GV_ACT *next;
    /* +0x0C */ int (*func)(GV_ACT *, int, int);
} GV_HOOK; /* sizeof:0x10 */

typedef struct _GV_MEMALLOC {
    /* +0x00 */ int size;
    /* +0x04 */ int id;
    /* +0x08 */ int res1;
    /* +0x0C */ int res2;
} GV_MEMALLOC /* sizeof:0x10 */;

typedef struct _GV_MEMTAG {
    /* +0x00 */ void *next;
    /* +0x04 */ int size;
    /* +0x08 */ int res1;
    /* +0x0C */ int res2;
} GV_MEMTAG; /* sizeof:0x10 */

typedef struct _GV_MEMLIST {
    /* +0x00 */ char *name;
    /* +0x04 */ void *top;
    /* +0x08 */ void *bottom;
    /* +0x0C */ void *now_bottom;
    /* +0x10 */ int align;
    /* +0x14 */ GV_MEMTAG empty;
} GV_MEMLIST; /* sizeof 0x24 */

typedef int (*GV_LOADFUNC)(void *, int);

enum {
    GV_REGION_RESIDENT = 3,
};

/* gvd.c */
void GV_StartDaemon( void );

/* strcode.c */
int GV_StrCode( const char *string );

/* cache.c */
void GV_LoadInit(void *ptr, int name, int region);

/* resident.c */
void GV_InitResidentMemory(void);
void GV_SetSystemResident(void);
void GV_ResetResidentMemory(void);
void *GV_AllocResidentMemory(int size, int id);
void *GV_AllocResidentMemoryAligned(int size, int id, int align);
void GV_LoadResidentMemory(void);
int GV_GetResidentDataSize(void *ptr);

/* memlist.c */
void GV_MlBufferInit(GV_MEMLIST *list, char *name, void *top, void *bottom, int align);
void *GV_MlMalloc(GV_MEMLIST *list, int size);
void GV_MlFree(GV_MEMLIST *list, void *ptr, int size);

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
