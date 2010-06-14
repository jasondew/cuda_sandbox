#if defined(__cplusplus)
extern "C" {
#endif
#include "14.fatbin.c"
#include "crt/host_runtime.h"
struct __T20 {int *__par0;int __dummy_field;};
static void __sti____cudaRegisterAll_10_14_cpp1_ii_84db3c43(void) __attribute__((__constructor__));
void __device_stub__Z6kernelPi(int *__par0){auto struct __T20 *__T21;
__cudaInitArgBlock(__T21);__cudaSetupArg(__par0, __T21);__cudaLaunch(((char *)__device_stub_name(__device_stub__Z6kernelPi,((void ( *)(int *))kernel__entry))));}
#if defined(__cplusplus)
}
void kernel__entry( int * __cuda_0)
{__device_stub__Z6kernelPi(  __cuda_0);}
extern "C"{
#endif
#if defined(__device_emulation)
static void __device_wrapper__Z6kernelPi(char *__T24){_Z6kernelPi((((*((struct __T20 *)__T24)).__par0)));}
#endif
static void __sti____cudaRegisterAll_10_14_cpp1_ii_84db3c43(void){__cudaRegisterBinary();__cudaRegisterEntry(__device_stub_name(__device_stub__Z6kernelPi,((void ( *)(int *))kernel__entry)), _Z6kernelPi, (-1));}
#if defined(__cplusplus)
}
#endif
