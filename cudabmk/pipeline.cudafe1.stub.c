#include "crt/host_runtime.h"
#include "pipeline.fatbin.c"
extern void __device_stub__Z17K_ALL_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_ANY_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_ADD_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_SUB_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_MUL_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_DIV_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_REM_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_MAD_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_MIN_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_MAX_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z16K_ADD_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z16K_SUB_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z16K_MUL_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z16K_DIV_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z16K_REM_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z16K_MAD_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z16K_ABS_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z16K_NEG_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z16K_MIN_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z16K_MAX_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z18K_ADD_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z18K_SUB_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z18K_MUL_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z18K_DIV_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z18K_MAD_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z18K_ABS_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z18K_MIN_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z18K_MAX_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z19K_ADD_DOUBLE_DEP128PjS_ddi(unsigned *, unsigned *, DOUBLE, DOUBLE, int);
extern void __device_stub__Z19K_SUB_DOUBLE_DEP128PjS_ddi(unsigned *, unsigned *, DOUBLE, DOUBLE, int);
extern void __device_stub__Z19K_MUL_DOUBLE_DEP128PjS_ddi(unsigned *, unsigned *, DOUBLE, DOUBLE, int);
extern void __device_stub__Z19K_DIV_DOUBLE_DEP128PjS_ddi(unsigned *, unsigned *, DOUBLE, DOUBLE, int);
extern void __device_stub__Z19K_MAD_DOUBLE_DEP128PjS_ddi(unsigned *, unsigned *, DOUBLE, DOUBLE, int);
extern void __device_stub__Z19K_ABS_DOUBLE_DEP128PjS_ddi(unsigned *, unsigned *, DOUBLE, DOUBLE, int);
extern void __device_stub__Z19K_MIN_DOUBLE_DEP128PjS_ddi(unsigned *, unsigned *, DOUBLE, DOUBLE, int);
extern void __device_stub__Z19K_MAX_DOUBLE_DEP128PjS_ddi(unsigned *, unsigned *, DOUBLE, DOUBLE, int);
extern void __device_stub__Z17K_AND_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z16K_OR_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_XOR_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_SHL_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_SHR_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_NOT_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_NOT2_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z18K_CNOT_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z20K_ANDNOT_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z19K_ORNOT_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z20K_XORNOT_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z20K_ADDNOT_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z23K_ANDNOTNOT_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z20K_UMUL24_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z18K_MUL24_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z20K_UMULHI_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z18K_MULHI_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z18K_USAD_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z16K_SAD_INT_DEP128PjS_iii(unsigned *, unsigned *, INT, INT, int);
extern void __device_stub__Z22K_FADD_RN_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z22K_FADD_RZ_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z22K_FMUL_RN_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z22K_FMUL_RZ_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z23K_FDIVIDEF_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z23K_DADD_RN_DOUBLE_DEP128PjS_ddi(unsigned *, unsigned *, DOUBLE, DOUBLE, int);
extern void __device_stub__Z18K_RCP_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z19K_SQRT_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z20K_RSQRT_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z19K_SINF_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z19K_COSF_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z19K_TANF_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z19K_EXPF_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z20K_EXP2F_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z21K_EXP10F_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z19K_LOGF_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z20K_LOG2F_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z21K_LOG10F_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z19K_POWF_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z24K_INTASFLOAT_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z25K_FLOATASINT_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z18K_POPC_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_CLZ_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z19K_CLZLL_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z17K_FFS_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z19K_FFSLL_UINT_DEP128PjS_jji(unsigned *, unsigned *, UINT, UINT, int);
extern void __device_stub__Z23K_SATURATE_FLOAT_DEP128PjS_ffi(unsigned *, unsigned *, FLOAT, FLOAT, int);
extern void __device_stub__Z8KMAD_MULPjS_ffi(unsigned *, unsigned *, float, float, int);
# 40 "pipeline.cu"
extern void __device_stub__Z18K_SYNC_UINT_DEP128PjS_jji(unsigned *, unsigned *, unsigned, unsigned, int);
static void __sti____cudaRegisterAll_16_pipeline_cpp1_ii_00c5b4ce(void) __attribute__((__constructor__));
void __device_stub__Z17K_ALL_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ALL_UINT_DEP128))); }
# 308 "instructions.h"
void K_ALL_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 308 "instructions.h"
{__device_stub__Z17K_ALL_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_ANY_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ANY_UINT_DEP128))); }
# 309 "instructions.h"
void K_ANY_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 309 "instructions.h"
{__device_stub__Z17K_ANY_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_ADD_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ADD_UINT_DEP128))); }
# 318 "instructions.h"
void K_ADD_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 318 "instructions.h"
{__device_stub__Z17K_ADD_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_SUB_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_SUB_UINT_DEP128))); }
# 319 "instructions.h"
void K_SUB_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 319 "instructions.h"
{__device_stub__Z17K_SUB_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_MUL_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_MUL_UINT_DEP128))); }
# 320 "instructions.h"
void K_MUL_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 320 "instructions.h"
{__device_stub__Z17K_MUL_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_DIV_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_DIV_UINT_DEP128))); }
# 321 "instructions.h"
void K_DIV_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 321 "instructions.h"
{__device_stub__Z17K_DIV_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_REM_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_REM_UINT_DEP128))); }
# 322 "instructions.h"
void K_REM_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 322 "instructions.h"
{__device_stub__Z17K_REM_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_MAD_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_MAD_UINT_DEP128))); }
# 323 "instructions.h"
void K_MAD_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 323 "instructions.h"
{__device_stub__Z17K_MAD_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_MIN_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_MIN_UINT_DEP128))); }
# 324 "instructions.h"
void K_MIN_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 324 "instructions.h"
{__device_stub__Z17K_MIN_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_MAX_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_MAX_UINT_DEP128))); }
# 325 "instructions.h"
void K_MAX_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 325 "instructions.h"
{__device_stub__Z17K_MAX_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_ADD_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_ADD_INT_DEP128))); }
# 328 "instructions.h"
void K_ADD_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 328 "instructions.h"
{__device_stub__Z16K_ADD_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_SUB_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_SUB_INT_DEP128))); }
# 329 "instructions.h"
void K_SUB_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 329 "instructions.h"
{__device_stub__Z16K_SUB_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_MUL_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MUL_INT_DEP128))); }
# 330 "instructions.h"
void K_MUL_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 330 "instructions.h"
{__device_stub__Z16K_MUL_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_DIV_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_DIV_INT_DEP128))); }
# 331 "instructions.h"
void K_DIV_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 331 "instructions.h"
{__device_stub__Z16K_DIV_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_REM_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_REM_INT_DEP128))); }
# 332 "instructions.h"
void K_REM_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 332 "instructions.h"
{__device_stub__Z16K_REM_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_MAD_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MAD_INT_DEP128))); }
# 333 "instructions.h"
void K_MAD_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 333 "instructions.h"
{__device_stub__Z16K_MAD_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_ABS_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_ABS_INT_DEP128))); }
# 334 "instructions.h"
void K_ABS_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 334 "instructions.h"
{__device_stub__Z16K_ABS_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_NEG_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_NEG_INT_DEP128))); }
# 335 "instructions.h"
void K_NEG_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 335 "instructions.h"
{__device_stub__Z16K_NEG_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_MIN_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MIN_INT_DEP128))); }
# 336 "instructions.h"
void K_MIN_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 336 "instructions.h"
{__device_stub__Z16K_MIN_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_MAX_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MAX_INT_DEP128))); }
# 337 "instructions.h"
void K_MAX_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 337 "instructions.h"
{__device_stub__Z16K_MAX_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_ADD_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_ADD_FLOAT_DEP128))); }
# 340 "instructions.h"
void K_ADD_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 340 "instructions.h"
{__device_stub__Z18K_ADD_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_SUB_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_SUB_FLOAT_DEP128))); }
# 341 "instructions.h"
void K_SUB_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 341 "instructions.h"
{__device_stub__Z18K_SUB_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_MUL_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_MUL_FLOAT_DEP128))); }
# 342 "instructions.h"
void K_MUL_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 342 "instructions.h"
{__device_stub__Z18K_MUL_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_DIV_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_DIV_FLOAT_DEP128))); }
# 343 "instructions.h"
void K_DIV_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 343 "instructions.h"
{__device_stub__Z18K_DIV_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_MAD_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_MAD_FLOAT_DEP128))); }
# 344 "instructions.h"
void K_MAD_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 344 "instructions.h"
{__device_stub__Z18K_MAD_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_ABS_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_ABS_FLOAT_DEP128))); }
# 345 "instructions.h"
void K_ABS_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 345 "instructions.h"
{__device_stub__Z18K_ABS_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_MIN_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_MIN_FLOAT_DEP128))); }
# 346 "instructions.h"
void K_MIN_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 346 "instructions.h"
{__device_stub__Z18K_MIN_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_MAX_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_MAX_FLOAT_DEP128))); }
# 347 "instructions.h"
void K_MAX_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 347 "instructions.h"
{__device_stub__Z18K_MAX_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_ADD_DOUBLE_DEP128PjS_ddi( unsigned *__par0,  unsigned *__par1,  DOUBLE __par2,  DOUBLE __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_ADD_DOUBLE_DEP128))); }
# 350 "instructions.h"
void K_ADD_DOUBLE_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,DOUBLE __cuda_2,DOUBLE __cuda_3,int __cuda_4)
# 350 "instructions.h"
{__device_stub__Z19K_ADD_DOUBLE_DEP128PjS_ddi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_SUB_DOUBLE_DEP128PjS_ddi( unsigned *__par0,  unsigned *__par1,  DOUBLE __par2,  DOUBLE __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_SUB_DOUBLE_DEP128))); }
# 351 "instructions.h"
void K_SUB_DOUBLE_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,DOUBLE __cuda_2,DOUBLE __cuda_3,int __cuda_4)
# 351 "instructions.h"
{__device_stub__Z19K_SUB_DOUBLE_DEP128PjS_ddi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_MUL_DOUBLE_DEP128PjS_ddi( unsigned *__par0,  unsigned *__par1,  DOUBLE __par2,  DOUBLE __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_MUL_DOUBLE_DEP128))); }
# 352 "instructions.h"
void K_MUL_DOUBLE_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,DOUBLE __cuda_2,DOUBLE __cuda_3,int __cuda_4)
# 352 "instructions.h"
{__device_stub__Z19K_MUL_DOUBLE_DEP128PjS_ddi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_DIV_DOUBLE_DEP128PjS_ddi( unsigned *__par0,  unsigned *__par1,  DOUBLE __par2,  DOUBLE __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_DIV_DOUBLE_DEP128))); }
# 353 "instructions.h"
void K_DIV_DOUBLE_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,DOUBLE __cuda_2,DOUBLE __cuda_3,int __cuda_4)
# 353 "instructions.h"
{__device_stub__Z19K_DIV_DOUBLE_DEP128PjS_ddi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_MAD_DOUBLE_DEP128PjS_ddi( unsigned *__par0,  unsigned *__par1,  DOUBLE __par2,  DOUBLE __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_MAD_DOUBLE_DEP128))); }
# 354 "instructions.h"
void K_MAD_DOUBLE_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,DOUBLE __cuda_2,DOUBLE __cuda_3,int __cuda_4)
# 354 "instructions.h"
{__device_stub__Z19K_MAD_DOUBLE_DEP128PjS_ddi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_ABS_DOUBLE_DEP128PjS_ddi( unsigned *__par0,  unsigned *__par1,  DOUBLE __par2,  DOUBLE __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_ABS_DOUBLE_DEP128))); }
# 355 "instructions.h"
void K_ABS_DOUBLE_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,DOUBLE __cuda_2,DOUBLE __cuda_3,int __cuda_4)
# 355 "instructions.h"
{__device_stub__Z19K_ABS_DOUBLE_DEP128PjS_ddi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_MIN_DOUBLE_DEP128PjS_ddi( unsigned *__par0,  unsigned *__par1,  DOUBLE __par2,  DOUBLE __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_MIN_DOUBLE_DEP128))); }
# 356 "instructions.h"
void K_MIN_DOUBLE_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,DOUBLE __cuda_2,DOUBLE __cuda_3,int __cuda_4)
# 356 "instructions.h"
{__device_stub__Z19K_MIN_DOUBLE_DEP128PjS_ddi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_MAX_DOUBLE_DEP128PjS_ddi( unsigned *__par0,  unsigned *__par1,  DOUBLE __par2,  DOUBLE __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_MAX_DOUBLE_DEP128))); }
# 357 "instructions.h"
void K_MAX_DOUBLE_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,DOUBLE __cuda_2,DOUBLE __cuda_3,int __cuda_4)
# 357 "instructions.h"
{__device_stub__Z19K_MAX_DOUBLE_DEP128PjS_ddi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_AND_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_AND_UINT_DEP128))); }
# 360 "instructions.h"
void K_AND_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 360 "instructions.h"
{__device_stub__Z17K_AND_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_OR_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_OR_UINT_DEP128))); }
# 361 "instructions.h"
void K_OR_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 361 "instructions.h"
{__device_stub__Z16K_OR_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_XOR_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_XOR_UINT_DEP128))); }
# 362 "instructions.h"
void K_XOR_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 362 "instructions.h"
{__device_stub__Z17K_XOR_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_SHL_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_SHL_UINT_DEP128))); }
# 363 "instructions.h"
void K_SHL_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 363 "instructions.h"
{__device_stub__Z17K_SHL_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_SHR_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_SHR_UINT_DEP128))); }
# 364 "instructions.h"
void K_SHR_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 364 "instructions.h"
{__device_stub__Z17K_SHR_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_NOT_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_NOT_UINT_DEP128))); }
# 366 "instructions.h"
void K_NOT_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 366 "instructions.h"
{__device_stub__Z17K_NOT_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_NOT2_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_NOT2_INT_DEP128))); }
# 367 "instructions.h"
void K_NOT2_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 367 "instructions.h"
{__device_stub__Z17K_NOT2_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_CNOT_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_CNOT_UINT_DEP128))); }
# 368 "instructions.h"
void K_CNOT_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 368 "instructions.h"
{__device_stub__Z18K_CNOT_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z20K_ANDNOT_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ANDNOT_UINT_DEP128))); }
# 370 "instructions.h"
void K_ANDNOT_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 370 "instructions.h"
{__device_stub__Z20K_ANDNOT_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_ORNOT_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ORNOT_UINT_DEP128))); }
# 371 "instructions.h"
void K_ORNOT_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 371 "instructions.h"
{__device_stub__Z19K_ORNOT_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z20K_XORNOT_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_XORNOT_UINT_DEP128))); }
# 372 "instructions.h"
void K_XORNOT_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 372 "instructions.h"
{__device_stub__Z20K_XORNOT_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z20K_ADDNOT_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ADDNOT_UINT_DEP128))); }
# 373 "instructions.h"
void K_ADDNOT_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 373 "instructions.h"
{__device_stub__Z20K_ADDNOT_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z23K_ANDNOTNOT_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ANDNOTNOT_UINT_DEP128))); }
# 374 "instructions.h"
void K_ANDNOTNOT_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 374 "instructions.h"
{__device_stub__Z23K_ANDNOTNOT_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z20K_UMUL24_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_UMUL24_UINT_DEP128))); }
# 377 "instructions.h"
void K_UMUL24_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 377 "instructions.h"
{__device_stub__Z20K_UMUL24_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_MUL24_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MUL24_INT_DEP128))); }
# 378 "instructions.h"
void K_MUL24_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 378 "instructions.h"
{__device_stub__Z18K_MUL24_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z20K_UMULHI_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_UMULHI_UINT_DEP128))); }
# 379 "instructions.h"
void K_UMULHI_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 379 "instructions.h"
{__device_stub__Z20K_UMULHI_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_MULHI_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MULHI_INT_DEP128))); }
# 380 "instructions.h"
void K_MULHI_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 380 "instructions.h"
{__device_stub__Z18K_MULHI_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_USAD_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_USAD_UINT_DEP128))); }
# 381 "instructions.h"
void K_USAD_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 381 "instructions.h"
{__device_stub__Z18K_USAD_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z16K_SAD_INT_DEP128PjS_iii( unsigned *__par0,  unsigned *__par1,  INT __par2,  INT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, INT, INT, int))K_SAD_INT_DEP128))); }
# 382 "instructions.h"
void K_SAD_INT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,INT __cuda_2,INT __cuda_3,int __cuda_4)
# 382 "instructions.h"
{__device_stub__Z16K_SAD_INT_DEP128PjS_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z22K_FADD_RN_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FADD_RN_FLOAT_DEP128))); }
# 385 "instructions.h"
void K_FADD_RN_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 385 "instructions.h"
{__device_stub__Z22K_FADD_RN_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z22K_FADD_RZ_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FADD_RZ_FLOAT_DEP128))); }
# 386 "instructions.h"
void K_FADD_RZ_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 386 "instructions.h"
{__device_stub__Z22K_FADD_RZ_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z22K_FMUL_RN_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FMUL_RN_FLOAT_DEP128))); }
# 387 "instructions.h"
void K_FMUL_RN_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 387 "instructions.h"
{__device_stub__Z22K_FMUL_RN_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z22K_FMUL_RZ_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FMUL_RZ_FLOAT_DEP128))); }
# 388 "instructions.h"
void K_FMUL_RZ_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 388 "instructions.h"
{__device_stub__Z22K_FMUL_RZ_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z23K_FDIVIDEF_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FDIVIDEF_FLOAT_DEP128))); }
# 389 "instructions.h"
void K_FDIVIDEF_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 389 "instructions.h"
{__device_stub__Z23K_FDIVIDEF_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z23K_DADD_RN_DOUBLE_DEP128PjS_ddi( unsigned *__par0,  unsigned *__par1,  DOUBLE __par2,  DOUBLE __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_DADD_RN_DOUBLE_DEP128))); }
# 392 "instructions.h"
void K_DADD_RN_DOUBLE_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,DOUBLE __cuda_2,DOUBLE __cuda_3,int __cuda_4)
# 392 "instructions.h"
{__device_stub__Z23K_DADD_RN_DOUBLE_DEP128PjS_ddi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_RCP_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_RCP_FLOAT_DEP128))); }
# 395 "instructions.h"
void K_RCP_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 395 "instructions.h"
{__device_stub__Z18K_RCP_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_SQRT_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_SQRT_FLOAT_DEP128))); }
# 396 "instructions.h"
void K_SQRT_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 396 "instructions.h"
{__device_stub__Z19K_SQRT_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z20K_RSQRT_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_RSQRT_FLOAT_DEP128))); }
# 397 "instructions.h"
void K_RSQRT_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 397 "instructions.h"
{__device_stub__Z20K_RSQRT_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_SINF_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_SINF_FLOAT_DEP128))); }
# 411 "instructions.h"
void K_SINF_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 411 "instructions.h"
{__device_stub__Z19K_SINF_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_COSF_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_COSF_FLOAT_DEP128))); }
# 412 "instructions.h"
void K_COSF_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 412 "instructions.h"
{__device_stub__Z19K_COSF_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_TANF_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_TANF_FLOAT_DEP128))); }
# 413 "instructions.h"
void K_TANF_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 413 "instructions.h"
{__device_stub__Z19K_TANF_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_EXPF_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_EXPF_FLOAT_DEP128))); }
# 414 "instructions.h"
void K_EXPF_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 414 "instructions.h"
{__device_stub__Z19K_EXPF_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z20K_EXP2F_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_EXP2F_FLOAT_DEP128))); }
# 415 "instructions.h"
void K_EXP2F_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 415 "instructions.h"
{__device_stub__Z20K_EXP2F_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z21K_EXP10F_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_EXP10F_FLOAT_DEP128))); }
# 416 "instructions.h"
void K_EXP10F_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 416 "instructions.h"
{__device_stub__Z21K_EXP10F_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_LOGF_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_LOGF_FLOAT_DEP128))); }
# 417 "instructions.h"
void K_LOGF_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 417 "instructions.h"
{__device_stub__Z19K_LOGF_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z20K_LOG2F_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_LOG2F_FLOAT_DEP128))); }
# 418 "instructions.h"
void K_LOG2F_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 418 "instructions.h"
{__device_stub__Z20K_LOG2F_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z21K_LOG10F_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_LOG10F_FLOAT_DEP128))); }
# 419 "instructions.h"
void K_LOG10F_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 419 "instructions.h"
{__device_stub__Z21K_LOG10F_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_POWF_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_POWF_FLOAT_DEP128))); }
# 420 "instructions.h"
void K_POWF_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 420 "instructions.h"
{__device_stub__Z19K_POWF_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z24K_INTASFLOAT_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_INTASFLOAT_UINT_DEP128))); }
# 423 "instructions.h"
void K_INTASFLOAT_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 423 "instructions.h"
{__device_stub__Z24K_INTASFLOAT_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z25K_FLOATASINT_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FLOATASINT_FLOAT_DEP128))); }
# 424 "instructions.h"
void K_FLOATASINT_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 424 "instructions.h"
{__device_stub__Z25K_FLOATASINT_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z18K_POPC_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_POPC_UINT_DEP128))); }
# 427 "instructions.h"
void K_POPC_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 427 "instructions.h"
{__device_stub__Z18K_POPC_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_CLZ_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_CLZ_UINT_DEP128))); }
# 428 "instructions.h"
void K_CLZ_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 428 "instructions.h"
{__device_stub__Z17K_CLZ_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_CLZLL_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_CLZLL_UINT_DEP128))); }
# 429 "instructions.h"
void K_CLZLL_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 429 "instructions.h"
{__device_stub__Z19K_CLZLL_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z17K_FFS_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_FFS_UINT_DEP128))); }
# 430 "instructions.h"
void K_FFS_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 430 "instructions.h"
{__device_stub__Z17K_FFS_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z19K_FFSLL_UINT_DEP128PjS_jji( unsigned *__par0,  unsigned *__par1,  UINT __par2,  UINT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_FFSLL_UINT_DEP128))); }
# 431 "instructions.h"
void K_FFSLL_UINT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,UINT __cuda_2,UINT __cuda_3,int __cuda_4)
# 431 "instructions.h"
{__device_stub__Z19K_FFSLL_UINT_DEP128PjS_jji( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z23K_SATURATE_FLOAT_DEP128PjS_ffi( unsigned *__par0,  unsigned *__par1,  FLOAT __par2,  FLOAT __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_SATURATE_FLOAT_DEP128))); }
# 432 "instructions.h"
void K_SATURATE_FLOAT_DEP128( unsigned *__cuda_0,unsigned *__cuda_1,FLOAT __cuda_2,FLOAT __cuda_3,int __cuda_4)
# 432 "instructions.h"
{__device_stub__Z23K_SATURATE_FLOAT_DEP128PjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4); }
# 1 "pipeline.cudafe1.stub.c"
void __device_stub__Z8KMAD_MULPjS_ffi( unsigned *__par0,  unsigned *__par1,  float __par2,  float __par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 20UL); __cudaSetupArgSimple(__par4, 24UL); __cudaLaunch(((char *)((void ( *)(unsigned *, unsigned *, float, float, int))KMAD_MUL))); }
# 15 "pipeline.cu"
void KMAD_MUL( unsigned *__cuda_0,unsigned *__cuda_1,float __cuda_2,float __cuda_3,int __cuda_4)
# 16 "pipeline.cu"
{__device_stub__Z8KMAD_MULPjS_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 34 "pipeline.cu"
}
# 1 "pipeline.cudafe1.stub.c"
static void __sti____cudaRegisterAll_16_pipeline_cpp1_ii_00c5b4ce(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, float, float, int))KMAD_MUL), _Z8KMAD_MULPjS_ffi, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_SATURATE_FLOAT_DEP128), K_SATURATE_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_FFSLL_UINT_DEP128), K_FFSLL_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_FFS_UINT_DEP128), K_FFS_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_CLZLL_UINT_DEP128), K_CLZLL_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_CLZ_UINT_DEP128), K_CLZ_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_POPC_UINT_DEP128), K_POPC_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FLOATASINT_FLOAT_DEP128), K_FLOATASINT_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_INTASFLOAT_UINT_DEP128), K_INTASFLOAT_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_POWF_FLOAT_DEP128), K_POWF_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_LOG10F_FLOAT_DEP128), K_LOG10F_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_LOG2F_FLOAT_DEP128), K_LOG2F_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_LOGF_FLOAT_DEP128), K_LOGF_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_EXP10F_FLOAT_DEP128), K_EXP10F_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_EXP2F_FLOAT_DEP128), K_EXP2F_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_EXPF_FLOAT_DEP128), K_EXPF_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_TANF_FLOAT_DEP128), K_TANF_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_COSF_FLOAT_DEP128), K_COSF_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_SINF_FLOAT_DEP128), K_SINF_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_RSQRT_FLOAT_DEP128), K_RSQRT_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_SQRT_FLOAT_DEP128), K_SQRT_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_RCP_FLOAT_DEP128), K_RCP_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_DADD_RN_DOUBLE_DEP128), K_DADD_RN_DOUBLE_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FDIVIDEF_FLOAT_DEP128), K_FDIVIDEF_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FMUL_RZ_FLOAT_DEP128), K_FMUL_RZ_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FMUL_RN_FLOAT_DEP128), K_FMUL_RN_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FADD_RZ_FLOAT_DEP128), K_FADD_RZ_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_FADD_RN_FLOAT_DEP128), K_FADD_RN_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_SAD_INT_DEP128), K_SAD_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_USAD_UINT_DEP128), K_USAD_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MULHI_INT_DEP128), K_MULHI_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_UMULHI_UINT_DEP128), K_UMULHI_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MUL24_INT_DEP128), K_MUL24_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_UMUL24_UINT_DEP128), K_UMUL24_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ANDNOTNOT_UINT_DEP128), K_ANDNOTNOT_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ADDNOT_UINT_DEP128), K_ADDNOT_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_XORNOT_UINT_DEP128), K_XORNOT_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ORNOT_UINT_DEP128), K_ORNOT_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ANDNOT_UINT_DEP128), K_ANDNOT_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_CNOT_UINT_DEP128), K_CNOT_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_NOT2_INT_DEP128), K_NOT2_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_NOT_UINT_DEP128), K_NOT_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_SHR_UINT_DEP128), K_SHR_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_SHL_UINT_DEP128), K_SHL_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_XOR_UINT_DEP128), K_XOR_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_OR_UINT_DEP128), K_OR_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_AND_UINT_DEP128), K_AND_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_MAX_DOUBLE_DEP128), K_MAX_DOUBLE_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_MIN_DOUBLE_DEP128), K_MIN_DOUBLE_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_ABS_DOUBLE_DEP128), K_ABS_DOUBLE_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_MAD_DOUBLE_DEP128), K_MAD_DOUBLE_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_DIV_DOUBLE_DEP128), K_DIV_DOUBLE_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_MUL_DOUBLE_DEP128), K_MUL_DOUBLE_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_SUB_DOUBLE_DEP128), K_SUB_DOUBLE_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, DOUBLE, DOUBLE, int))K_ADD_DOUBLE_DEP128), K_ADD_DOUBLE_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_MAX_FLOAT_DEP128), K_MAX_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_MIN_FLOAT_DEP128), K_MIN_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_ABS_FLOAT_DEP128), K_ABS_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_MAD_FLOAT_DEP128), K_MAD_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_DIV_FLOAT_DEP128), K_DIV_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_MUL_FLOAT_DEP128), K_MUL_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_SUB_FLOAT_DEP128), K_SUB_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, FLOAT, FLOAT, int))K_ADD_FLOAT_DEP128), K_ADD_FLOAT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MAX_INT_DEP128), K_MAX_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MIN_INT_DEP128), K_MIN_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_NEG_INT_DEP128), K_NEG_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_ABS_INT_DEP128), K_ABS_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MAD_INT_DEP128), K_MAD_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_REM_INT_DEP128), K_REM_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_DIV_INT_DEP128), K_DIV_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_MUL_INT_DEP128), K_MUL_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_SUB_INT_DEP128), K_SUB_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, INT, INT, int))K_ADD_INT_DEP128), K_ADD_INT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_MAX_UINT_DEP128), K_MAX_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_MIN_UINT_DEP128), K_MIN_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_MAD_UINT_DEP128), K_MAD_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_REM_UINT_DEP128), K_REM_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_DIV_UINT_DEP128), K_DIV_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_MUL_UINT_DEP128), K_MUL_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_SUB_UINT_DEP128), K_SUB_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ADD_UINT_DEP128), K_ADD_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ANY_UINT_DEP128), K_ANY_UINT_DEP128, (-1)); __cudaRegisterEntry(((void ( *)(unsigned *, unsigned *, UINT, UINT, int))K_ALL_UINT_DEP128), K_ALL_UINT_DEP128, (-1));  }
