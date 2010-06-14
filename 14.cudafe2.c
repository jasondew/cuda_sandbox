#ifdef _WIN32
#pragma warning(disable:4164 4003)
#endif 
# 1 "14.cudafe1.gpu"
# 214 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 115 "/usr/include/i386/_types.h" 3
typedef unsigned long __darwin_clock_t;
# 77 "/usr/include/time.h" 3
typedef __darwin_clock_t clock_t;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
#include "14.cudafe2.stub.h"

#include "14.cudafe2.stub.c"
