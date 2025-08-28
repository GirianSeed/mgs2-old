#ifndef __KCEJ_JSIFMAN_H__
#define __KCEJ_JSIFMAN_H__

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

/* libmain.c */
int sif_set_callback_func(u_int pos, void (*func)(void *, void *), void *data);
u_int sif_send_packet_and_data(u_int pos, u_int type, void *cp, int ps, void *dst, void *src, int size);
u_int i_sif_send_packet_and_data(u_int pos, u_int type, void *cp, int ps, void *dst, void *src, int size);
void sif_send_direct(u_int pos, u_int type, void *cp, int ps, void *dst, void *src, int size);
void i_sif_send_direct(u_int pos, u_int type, void *cp, int ps, void *dst, void *src, int size);
u_int i_sif_send_mem(void *addr, void *data, u_int size);
u_int sif_send_mem(void *addr, void *data, int size);
int sif_check_status(u_int id);
int sif_init(void);

/* rvman.c */
int sif_init_rv_man(void);
void *sif_rv_get_queue(void);
void sif_rv_call_func(u_int pos, u_int type, void *packet);
u_int sif_rv_return_value(void *packet);
u_int i_sif_rv_return_value(void *packet);
void sif_rv_release_queue(void *packet);
void *sif_get_mem(void *dst, void *src, u_int size);

#ifdef __cplusplus
}
#endif
#endif // {{{ END OF FILE }}}
