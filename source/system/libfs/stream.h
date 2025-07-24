#ifndef __MGS2_STREAM_H__
#define __MGS2_STREAM_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef void FS_STREAM;

#define STREAM_TYPE_AUDIO       0x01
#define STREAM_TYPE_DEMO        0x02
#define STREAM_TYPE_JIMAKU      0x04
#define STREAM_TYPE_UNKNOWN_05  0x05
#define STREAM_TYPE_UNKNOWN_06  0x06
#define STREAM_TYPE_MOVIE_0C    0x0C    // XBOX-ONLY
#define STREAM_TYPE_MOVIE_0D    0x0D    // XBOX-ONLY
#define STREAM_TYPE_MOVIE       0x0E    // MPEG2
#define STREAM_TYPE_IPU         0x0F    // IPUM

#define STREAM_TYPE_DESCRIPT    0x10
#define STREAM_TYPE_DUMMY       0xF0

#define STREAM_AUDIO_TYPE_00    0x00
#define STREAM_AUDIO_TYPE_01    0x01    // INT/5.1?
#define STREAM_AUDIO_TYPE_02    0x02    // INT/5.1?

#define STREAM_LANG_ENGLISH     0x01
#define STREAM_LANG_FRENCH      0x02
#define STREAM_LANG_GERMAN      0x03
#define STREAM_LANG_ITALIAN     0x04
#define STREAM_LANG_SPANISH     0x05
#define STREAM_LANG_KOREAN      0x06
#define STREAM_LANG_JAPANESE    0x07

typedef struct {
    int type;   /* +0x00 */
    int size;   /* +0x04 */
    int time;   /* +0x08 */
    int option; /* +0x0c */
} STREAM_TAG;

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
