#include "crt/host_runtime.h"
#include "ksync_uint_dep128.fatbin.c"
extern void __device_stub__Z18K_SYNC_UINT_DEP128PjS_jji(unsigned *, unsigned *, unsigned, unsigned, int);
static void __sti____cudaRegisterAll_25_ksync_uint_dep128_cpp1_ii_e7edc8b5(void) __attribute__((__constructor__));
void __device_stub__Z18K_SYNC_UINT_DEP128PjS_jji(unsigned *__par0, unsigned *__par1, unsigned __par2, unsigned __par3, int __par4){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 20UL);__cudaSetupArgSimple(__par4, 24UL);__cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, unsigned, unsigned, int))K_SYNC_UINT_DEP128)));}
# 2 "ksync_uint_dep128.cu"
void K_SYNC_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,unsigned __cuda_2,unsigned __cuda_3,int __cuda_4)
# 3 "ksync_uint_dep128.cu"
{__device_stub__Z18K_SYNC_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
}
# 1 "ksync_uint_dep128.cudafe1.stub.c"
static void __sti____cudaRegisterAll_25_ksync_uint_dep128_cpp1_ii_e7edc8b5(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, unsigned, unsigned, int))K_SYNC_UINT_DEP128), K_SYNC_UINT_DEP128, (-1));  }
