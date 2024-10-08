extern void init_register(int irq,int ior,int pbor);
extern int check_done(int try);
extern int check_emp_fifo(void);
extern int check_full_fifo(void);
extern int check_lam(void);
extern void read_lam(int *data);
extern void control(int cnaf);
extern void read16(int cnaf,short *data);
extern void read24(int cnaf,short *data);
extern void write16(int cnaf,short *data);
extern void write24(int cnaf,int *data);
extern int block_read16(int mode,int cnaf,short *data,int count);
extern int block_read24(int mode,int cnaf,unsigned int *data,int count);
extern int dma_block_read16(int mode,int cnaf,int count);
extern int dma_block_read24(int mode,int cnaf,int count);
extern void crate_reset(void);
extern void rfs_enable_interrupt(void);
extern void rfs_disable_interrupt(void);
extern void pci_enable_interrupt(void);
extern void pci_clear_interrupt(void);
extern void crate_enable_lam(int lammask);
extern void crate_disable_lam(void);
extern void crate_define_lam(int n);
extern void crate_z(int c);
extern void crate_c(int c);
extern void crate_seti(int c);
extern void crate_deli(int c);
extern void get_csrdata(int *ret);
extern void get_bmcsdata(int *ret);
#ifdef CAMACINT
extern int get_irq(void);
#endif

#include "nbbqdrv.h"
