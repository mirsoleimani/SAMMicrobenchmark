# 1 "pipeline.cudafe1.gpu"
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 145 "/usr/include/bits/types.h" 3
typedef long __clock_t;
# 60 "/usr/include/time.h" 3
typedef __clock_t clock_t;
# 2 "instructions.h"
typedef unsigned UINT;
# 3 "instructions.h"
typedef int INT;
# 4 "instructions.h"
typedef float FLOAT;
# 5 "instructions.h"
typedef double DOUBLE;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 340 "instructions.h"
extern int __float2uint_rz();
# 343 "instructions.h"
extern int fdividef();
# 345 "instructions.h"
extern int fabsf();
# 350 "instructions.h"
extern int __double2uint_rz();
# 353 "instructions.h"
extern int fdivide();
# 355 "instructions.h"
extern int fabs();
# 396 "instructions.h"
extern int sqrtf();

#include "pipeline.cudafe2.stub.c"
