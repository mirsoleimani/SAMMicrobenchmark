# 1 "regfile.cu"
struct __C1; struct __C2; struct __C3; struct __type_info; struct __C5; struct __C6; union __C7; struct __C8;
# 1006 "/usr/local/cuda4.1/cuda/include/driver_types.h"
struct CUstream_st;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
# 203 "/usr/include/math.h" 3
enum _ZUt_ {
FP_NAN,

FP_INFINITE,

FP_ZERO,

FP_SUBNORMAL,

FP_NORMAL};
# 296 "/usr/include/math.h" 3
enum _LIB_VERSION_TYPE {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_};
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_voidIvEUt_E { _ZNSt9__is_voidIvE7__valueE = 1};
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIbEUt_E { _ZNSt12__is_integerIbE7__valueE = 1};
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIcEUt_E { _ZNSt12__is_integerIcE7__valueE = 1};
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIaEUt_E { _ZNSt12__is_integerIaE7__valueE = 1};
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIhEUt_E { _ZNSt12__is_integerIhE7__valueE = 1};
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIwEUt_E { _ZNSt12__is_integerIwE7__valueE = 1};
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIsEUt_E { _ZNSt12__is_integerIsE7__valueE = 1};
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerItEUt_E { _ZNSt12__is_integerItE7__valueE = 1};
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIiEUt_E { _ZNSt12__is_integerIiE7__valueE = 1};
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIjEUt_E { _ZNSt12__is_integerIjE7__valueE = 1};
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIlEUt_E { _ZNSt12__is_integerIlE7__valueE = 1};
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerImEUt_E { _ZNSt12__is_integerImE7__valueE = 1};
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIxEUt_E { _ZNSt12__is_integerIxE7__valueE = 1};
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIyEUt_E { _ZNSt12__is_integerIyE7__valueE = 1};
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIfEUt_E { _ZNSt13__is_floatingIfE7__valueE = 1};
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIdEUt_E { _ZNSt13__is_floatingIdE7__valueE = 1};
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIeEUt_E { _ZNSt13__is_floatingIeE7__valueE = 1};
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIcEUt_E { _ZNSt9__is_charIcE7__valueE = 1};
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIwEUt_E { _ZNSt9__is_charIwE7__valueE = 1};
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIcEUt_E { _ZNSt9__is_byteIcE7__valueE = 1};
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIaEUt_E { _ZNSt9__is_byteIaE7__valueE = 1};
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIhEUt_E { _ZNSt9__is_byteIhE7__valueE = 1};
# 64 "/usr/include/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
struct __C3 { struct __C2 *regions; void **obj_table; struct __C1 *array_table; unsigned short saved_region_number;char __nv_no_debug_dummy[6];}; struct __C5 { const struct __type_info *tinfo; unsigned char flags; unsigned char *ptr_flags;}; struct __C6 { long setjmp_buffer[25]; struct __C5 *catch_entries; void *rtinfo; unsigned short region_number;char __nv_no_debug_dummy[6];}; union __C7 { struct __C6 try_block; struct __C3 function; struct __C5 *throw_spec;}; struct __C8 { struct __C8 *next; unsigned char kind; union __C7 variant;};
# 64 "/usr/include/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 887 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(void);
# 1715 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 1933 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void **, size_t);
# 2067 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void *);
# 88 "/usr/include/bits/stdio2.h" 3
extern int __printf_chk(int, const char *__restrict__, ...);
# 103 "/usr/include/bits/stdio2.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: printf */ __inline__ __attribute__((__artificial__)) __attribute__((__always_inline__)) int printf(const char *__restrict__, ...);
# 38 "/usr/include/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl(long double);
# 53 "regfile.cu"
extern void _Z15measure_regfilev(void);
extern int setjmp();
extern void __exception_caught();
extern void __destroy_exception_object(void);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___15_regfile_cpp1_ii_3ebfa81c(void) __attribute__((__constructor__));
extern struct __C8 *__curr_eh_stack_entry;
extern unsigned short __eh_curr_region;
extern int __catch_clause_number;
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default")));
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default")));
 __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default"))) = "St9exception";
 __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default"))) = "St9bad_alloc";
# 103 "/usr/include/bits/stdio2.h" 3
 __attribute__((__weak__)) /* COMDAT group: printf */ __inline__ __attribute__((__artificial__)) __attribute__((__always_inline__)) int printf( const char *__restrict__ __fmt, ...)
{
return __printf_chk(1, __fmt, (__builtin_va_arg_pack()));
}
# 38 "/usr/include/bits/mathinline.h" 3
 __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf( float __x)
{




 int __cuda_local_var_7238_7_non_const___m;
__asm("pmovmskb %1, %0" : "=r" (__cuda_local_var_7238_7_non_const___m) : "x" (__x));
return __cuda_local_var_7238_7_non_const___m & 8;

}

 __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit( double __x)
{




 int __cuda_local_var_7250_7_non_const___m;
__asm("pmovmskb %1, %0" : "=r" (__cuda_local_var_7250_7_non_const___m) : "x" (__x));
return __cuda_local_var_7250_7_non_const___m & 128;

}

 __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl( long double __x)
{
 union _ZZ10__signbitlEUt_ __cuda_local_var_7258_56_non_const___u;
# 64 "/usr/include/bits/mathinline.h" 3
(__cuda_local_var_7258_56_non_const___u.__l) = __x;
return (int)(((((__cuda_local_var_7258_56_non_const___u.__i))[2]) & 32768) != 0);
}
# 53 "regfile.cu"
void _Z15measure_regfilev(void)
{ static struct __C5 __T20[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T21[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T22[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T23[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T24[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T25[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T26[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T27[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T28[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T29[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T210[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T211[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T212[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T213[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T214[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T215[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T216[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T217[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T218[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T219[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T220[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T221[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T222[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T223[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T224[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T225[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T226[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T227[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T228[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T229[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T230[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
static struct __C5 __T231[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
 struct __C8 __T232;
 struct __C8 __T233;
 struct __C8 __T234;
 struct __C8 __T235;
 struct __C8 __T236;
 struct __C8 __T237;
 struct __C8 __T238;
 struct __C8 __T239;
 struct __C8 __T240;
 struct __C8 __T241;
 struct __C8 __T242;
 struct __C8 __T243;
 struct __C8 __T244;
 struct __C8 __T245;
 struct __C8 __T246;
 struct __C8 __T247;
 struct __C8 __T248;
 struct __C8 __T249;
 struct __C8 __T250;
 struct __C8 __T251;
 struct __C8 __T252;
 struct __C8 __T253;
 struct __C8 __T254;
 struct __C8 __T255;
 struct __C8 __T256;
 struct __C8 __T257;
 struct __C8 __T258;
 struct __C8 __T259;
 struct __C8 __T260;
 struct __C8 __T261;
 struct __C8 __T262;
 struct __C8 __T263;
# 55 "regfile.cu"
 unsigned *__cuda_local_var_16906_16_non_const_d_out;

 dim3 __cuda_local_var_16908_10_non_const_Db;
 dim3 __cuda_local_var_16909_10_non_const_Dg;
# 71 "regfile.cu"
 int __cuda_local_var_16922_6_non_const_max_success;
# 57 "regfile.cu"
{ (__cuda_local_var_16908_10_non_const_Db.x) = 1U; (__cuda_local_var_16908_10_non_const_Db.y) = 1U; (__cuda_local_var_16908_10_non_const_Db.z) = 1U; }
{ (__cuda_local_var_16909_10_non_const_Dg.x) = 1U; (__cuda_local_var_16909_10_non_const_Dg.y) = 1U; (__cuda_local_var_16909_10_non_const_Dg.z) = 1U; }

if (0 != ((int)(cudaMalloc(((void **)(&__cuda_local_var_16906_16_non_const_d_out)), 4UL))))
{
printf(((const char *)"cudaMalloc failed %s:%d\n"), ((const char *)("regfile.cu")), 62);
return;
}

printf(((const char *)"\n"));
printf(((const char *)"Running register file capacity test...\n"));
cudaGetLastError();

printf(((const char *)"  [Max threads x regs/thread = registers used] before kernel spawn failure.\n"));

for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T232.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T232); (__T232.kind) = ((unsigned char)5U); (((__T232.variant).try_block).catch_entries) = (__T20); (((__T232.variant).try_block).rtinfo) = ((void *)0LL); (((__T232.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T232.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z8kempty_4Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T232.next); goto __T264; } } __curr_eh_stack_entry = (__T232.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T264:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 4, (__cuda_local_var_16922_6_non_const_max_success * 4)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T233.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T233); (__T233.kind) = ((unsigned char)5U); (((__T233.variant).try_block).catch_entries) = (__T21); (((__T233.variant).try_block).rtinfo) = ((void *)0LL); (((__T233.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T233.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z8kempty_8Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T233.next); goto __T265; } } __curr_eh_stack_entry = (__T233.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T265:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 8, (__cuda_local_var_16922_6_non_const_max_success * 8)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T234.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T234); (__T234.kind) = ((unsigned char)5U); (((__T234.variant).try_block).catch_entries) = (__T22); (((__T234.variant).try_block).rtinfo) = ((void *)0LL); (((__T234.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T234.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_12Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T234.next); goto __T266; } } __curr_eh_stack_entry = (__T234.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T266:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 12, (__cuda_local_var_16922_6_non_const_max_success * 12)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T235.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T235); (__T235.kind) = ((unsigned char)5U); (((__T235.variant).try_block).catch_entries) = (__T23); (((__T235.variant).try_block).rtinfo) = ((void *)0LL); (((__T235.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T235.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_16Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T235.next); goto __T267; } } __curr_eh_stack_entry = (__T235.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T267:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 16, (__cuda_local_var_16922_6_non_const_max_success * 16)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T236.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T236); (__T236.kind) = ((unsigned char)5U); (((__T236.variant).try_block).catch_entries) = (__T24); (((__T236.variant).try_block).rtinfo) = ((void *)0LL); (((__T236.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T236.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_20Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T236.next); goto __T268; } } __curr_eh_stack_entry = (__T236.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T268:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 20, (__cuda_local_var_16922_6_non_const_max_success * 20)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T237.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T237); (__T237.kind) = ((unsigned char)5U); (((__T237.variant).try_block).catch_entries) = (__T25); (((__T237.variant).try_block).rtinfo) = ((void *)0LL); (((__T237.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T237.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_24Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T237.next); goto __T269; } } __curr_eh_stack_entry = (__T237.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T269:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 24, (__cuda_local_var_16922_6_non_const_max_success * 24)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T238.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T238); (__T238.kind) = ((unsigned char)5U); (((__T238.variant).try_block).catch_entries) = (__T26); (((__T238.variant).try_block).rtinfo) = ((void *)0LL); (((__T238.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T238.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_28Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T238.next); goto __T270; } } __curr_eh_stack_entry = (__T238.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T270:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 28, (__cuda_local_var_16922_6_non_const_max_success * 28)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T239.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T239); (__T239.kind) = ((unsigned char)5U); (((__T239.variant).try_block).catch_entries) = (__T27); (((__T239.variant).try_block).rtinfo) = ((void *)0LL); (((__T239.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T239.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_32Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T239.next); goto __T271; } } __curr_eh_stack_entry = (__T239.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T271:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 32, (__cuda_local_var_16922_6_non_const_max_success * 32)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T240.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T240); (__T240.kind) = ((unsigned char)5U); (((__T240.variant).try_block).catch_entries) = (__T28); (((__T240.variant).try_block).rtinfo) = ((void *)0LL); (((__T240.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T240.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_36Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T240.next); goto __T272; } } __curr_eh_stack_entry = (__T240.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T272:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 36, (__cuda_local_var_16922_6_non_const_max_success * 36)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T241.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T241); (__T241.kind) = ((unsigned char)5U); (((__T241.variant).try_block).catch_entries) = (__T29); (((__T241.variant).try_block).rtinfo) = ((void *)0LL); (((__T241.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T241.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_40Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T241.next); goto __T273; } } __curr_eh_stack_entry = (__T241.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T273:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 40, (__cuda_local_var_16922_6_non_const_max_success * 40)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T242.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T242); (__T242.kind) = ((unsigned char)5U); (((__T242.variant).try_block).catch_entries) = (__T210); (((__T242.variant).try_block).rtinfo) = ((void *)0LL); (((__T242.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T242.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_44Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T242.next); goto __T274; } } __curr_eh_stack_entry = (__T242.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T274:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 44, (__cuda_local_var_16922_6_non_const_max_success * 44)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T243.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T243); (__T243.kind) = ((unsigned char)5U); (((__T243.variant).try_block).catch_entries) = (__T211); (((__T243.variant).try_block).rtinfo) = ((void *)0LL); (((__T243.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T243.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_48Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T243.next); goto __T275; } } __curr_eh_stack_entry = (__T243.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T275:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 48, (__cuda_local_var_16922_6_non_const_max_success * 48)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T244.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T244); (__T244.kind) = ((unsigned char)5U); (((__T244.variant).try_block).catch_entries) = (__T212); (((__T244.variant).try_block).rtinfo) = ((void *)0LL); (((__T244.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T244.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_52Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T244.next); goto __T276; } } __curr_eh_stack_entry = (__T244.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T276:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 52, (__cuda_local_var_16922_6_non_const_max_success * 52)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T245.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T245); (__T245.kind) = ((unsigned char)5U); (((__T245.variant).try_block).catch_entries) = (__T213); (((__T245.variant).try_block).rtinfo) = ((void *)0LL); (((__T245.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T245.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_56Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T245.next); goto __T277; } } __curr_eh_stack_entry = (__T245.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T277:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 56, (__cuda_local_var_16922_6_non_const_max_success * 56)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T246.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T246); (__T246.kind) = ((unsigned char)5U); (((__T246.variant).try_block).catch_entries) = (__T214); (((__T246.variant).try_block).rtinfo) = ((void *)0LL); (((__T246.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T246.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_60Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T246.next); goto __T278; } } __curr_eh_stack_entry = (__T246.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T278:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 60, (__cuda_local_var_16922_6_non_const_max_success * 60)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T247.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T247); (__T247.kind) = ((unsigned char)5U); (((__T247.variant).try_block).catch_entries) = (__T215); (((__T247.variant).try_block).rtinfo) = ((void *)0LL); (((__T247.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T247.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_64Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T247.next); goto __T279; } } __curr_eh_stack_entry = (__T247.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T279:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 64, (__cuda_local_var_16922_6_non_const_max_success * 64)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T248.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T248); (__T248.kind) = ((unsigned char)5U); (((__T248.variant).try_block).catch_entries) = (__T216); (((__T248.variant).try_block).rtinfo) = ((void *)0LL); (((__T248.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T248.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_68Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T248.next); goto __T280; } } __curr_eh_stack_entry = (__T248.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T280:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 68, (__cuda_local_var_16922_6_non_const_max_success * 68)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T249.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T249); (__T249.kind) = ((unsigned char)5U); (((__T249.variant).try_block).catch_entries) = (__T217); (((__T249.variant).try_block).rtinfo) = ((void *)0LL); (((__T249.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T249.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_72Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T249.next); goto __T281; } } __curr_eh_stack_entry = (__T249.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T281:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 72, (__cuda_local_var_16922_6_non_const_max_success * 72)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T250.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T250); (__T250.kind) = ((unsigned char)5U); (((__T250.variant).try_block).catch_entries) = (__T218); (((__T250.variant).try_block).rtinfo) = ((void *)0LL); (((__T250.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T250.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_76Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T250.next); goto __T282; } } __curr_eh_stack_entry = (__T250.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T282:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 76, (__cuda_local_var_16922_6_non_const_max_success * 76)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T251.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T251); (__T251.kind) = ((unsigned char)5U); (((__T251.variant).try_block).catch_entries) = (__T219); (((__T251.variant).try_block).rtinfo) = ((void *)0LL); (((__T251.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T251.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_80Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T251.next); goto __T283; } } __curr_eh_stack_entry = (__T251.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T283:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 80, (__cuda_local_var_16922_6_non_const_max_success * 80)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T252.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T252); (__T252.kind) = ((unsigned char)5U); (((__T252.variant).try_block).catch_entries) = (__T220); (((__T252.variant).try_block).rtinfo) = ((void *)0LL); (((__T252.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T252.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_84Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T252.next); goto __T284; } } __curr_eh_stack_entry = (__T252.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T284:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 84, (__cuda_local_var_16922_6_non_const_max_success * 84)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T253.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T253); (__T253.kind) = ((unsigned char)5U); (((__T253.variant).try_block).catch_entries) = (__T221); (((__T253.variant).try_block).rtinfo) = ((void *)0LL); (((__T253.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T253.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_88Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T253.next); goto __T285; } } __curr_eh_stack_entry = (__T253.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T285:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 88, (__cuda_local_var_16922_6_non_const_max_success * 88)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T254.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T254); (__T254.kind) = ((unsigned char)5U); (((__T254.variant).try_block).catch_entries) = (__T222); (((__T254.variant).try_block).rtinfo) = ((void *)0LL); (((__T254.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T254.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_92Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T254.next); goto __T286; } } __curr_eh_stack_entry = (__T254.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T286:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 92, (__cuda_local_var_16922_6_non_const_max_success * 92)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T255.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T255); (__T255.kind) = ((unsigned char)5U); (((__T255.variant).try_block).catch_entries) = (__T223); (((__T255.variant).try_block).rtinfo) = ((void *)0LL); (((__T255.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T255.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z9kempty_96Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T255.next); goto __T287; } } __curr_eh_stack_entry = (__T255.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T287:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 96, (__cuda_local_var_16922_6_non_const_max_success * 96)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T256.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T256); (__T256.kind) = ((unsigned char)5U); (((__T256.variant).try_block).catch_entries) = (__T224); (((__T256.variant).try_block).rtinfo) = ((void *)0LL); (((__T256.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T256.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10kempty_100Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T256.next); goto __T288; } } __curr_eh_stack_entry = (__T256.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T288:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 100, (__cuda_local_var_16922_6_non_const_max_success * 100)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T257.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T257); (__T257.kind) = ((unsigned char)5U); (((__T257.variant).try_block).catch_entries) = (__T225); (((__T257.variant).try_block).rtinfo) = ((void *)0LL); (((__T257.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T257.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10kempty_104Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T257.next); goto __T289; } } __curr_eh_stack_entry = (__T257.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T289:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 104, (__cuda_local_var_16922_6_non_const_max_success * 104)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T258.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T258); (__T258.kind) = ((unsigned char)5U); (((__T258.variant).try_block).catch_entries) = (__T226); (((__T258.variant).try_block).rtinfo) = ((void *)0LL); (((__T258.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T258.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10kempty_108Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T258.next); goto __T290; } } __curr_eh_stack_entry = (__T258.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T290:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 108, (__cuda_local_var_16922_6_non_const_max_success * 108)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T259.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T259); (__T259.kind) = ((unsigned char)5U); (((__T259.variant).try_block).catch_entries) = (__T227); (((__T259.variant).try_block).rtinfo) = ((void *)0LL); (((__T259.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T259.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10kempty_112Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T259.next); goto __T291; } } __curr_eh_stack_entry = (__T259.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T291:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 112, (__cuda_local_var_16922_6_non_const_max_success * 112)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T260.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T260); (__T260.kind) = ((unsigned char)5U); (((__T260.variant).try_block).catch_entries) = (__T228); (((__T260.variant).try_block).rtinfo) = ((void *)0LL); (((__T260.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T260.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10kempty_116Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T260.next); goto __T292; } } __curr_eh_stack_entry = (__T260.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T292:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 116, (__cuda_local_var_16922_6_non_const_max_success * 116)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T261.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T261); (__T261.kind) = ((unsigned char)5U); (((__T261.variant).try_block).catch_entries) = (__T229); (((__T261.variant).try_block).rtinfo) = ((void *)0LL); (((__T261.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T261.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10kempty_120Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T261.next); goto __T293; } } __curr_eh_stack_entry = (__T261.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T293:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 120, (__cuda_local_var_16922_6_non_const_max_success * 120)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T262.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T262); (__T262.kind) = ((unsigned char)5U); (((__T262.variant).try_block).catch_entries) = (__T230); (((__T262.variant).try_block).rtinfo) = ((void *)0LL); (((__T262.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T262.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10kempty_124Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T262.next); goto __T294; } } __curr_eh_stack_entry = (__T262.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T294:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 124, (__cuda_local_var_16922_6_non_const_max_success * 124)); ;
for (((__cuda_local_var_16908_10_non_const_Db.x) = 0U) , (void)(__cuda_local_var_16922_6_non_const_max_success = (-1)); ((__cuda_local_var_16908_10_non_const_Db.x) <= 516U); (__cuda_local_var_16908_10_non_const_Db.x) += 1U) { { (__T263.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T263); (__T263.kind) = ((unsigned char)5U); (((__T263.variant).try_block).catch_entries) = (__T231); (((__T263.variant).try_block).rtinfo) = ((void *)0LL); (((__T263.variant).try_block).region_number) = __eh_curr_region; if ((setjmp(((((__T263.variant).try_block).setjmp_buffer)))) == 0) {; (cudaConfigureCall(__cuda_local_var_16909_10_non_const_Dg, __cuda_local_var_16908_10_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10kempty_128Pj(__cuda_local_var_16906_16_non_const_d_out)); } else  if (__catch_clause_number == 1) { __exception_caught(); { __destroy_exception_object(); __curr_eh_stack_entry = (__T263.next); goto __T295; } } __curr_eh_stack_entry = (__T263.next); } if (((int)(cudaGetLastError())) == 0) { __cuda_local_var_16922_6_non_const_max_success = ((int)(__cuda_local_var_16908_10_non_const_Db.x)); } __T295:; } printf(((const char *)"  [%3d x %3d = %5d]\n"), __cuda_local_var_16922_6_non_const_max_success, 128, (__cuda_local_var_16922_6_non_const_max_success * 128)); ;

printf(((const char *)"\n"));

cudaFree(((void *)__cuda_local_var_16906_16_non_const_d_out)); 
}
static void __sti___15_regfile_cpp1_ii_3ebfa81c(void) {   }

#include "regfile.cudafe1.stub.c"
