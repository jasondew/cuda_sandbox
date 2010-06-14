# 1 "14.cu"
# 46 "/usr/local/cuda/bin/../include/device_types.h"
#if 0
# 46
enum cudaRoundMode { 

cudaRoundNearest, 
cudaRoundZero, 
cudaRoundPosInf, 
cudaRoundMinInf
}; 
#endif
# 152 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3
typedef int ptrdiff_t; 
# 214 "/usr/lib/gcc/i686-apple-darwin9/4.0.1/include/stddef.h" 3
typedef unsigned long size_t; 
#include "crt/host_runtime.h"
# 90 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 90
enum cudaError { 

cudaSuccess, 
cudaErrorMissingConfiguration, 
cudaErrorMemoryAllocation, 
cudaErrorInitializationError, 
cudaErrorLaunchFailure, 
cudaErrorPriorLaunchFailure, 
cudaErrorLaunchTimeout, 
cudaErrorLaunchOutOfResources, 
cudaErrorInvalidDeviceFunction, 
cudaErrorInvalidConfiguration, 
cudaErrorInvalidDevice, 
cudaErrorInvalidValue, 
cudaErrorInvalidPitchValue, 
cudaErrorInvalidSymbol, 
cudaErrorMapBufferObjectFailed, 
cudaErrorUnmapBufferObjectFailed, 
cudaErrorInvalidHostPointer, 
cudaErrorInvalidDevicePointer, 
cudaErrorInvalidTexture, 
cudaErrorInvalidTextureBinding, 
cudaErrorInvalidChannelDescriptor, 
cudaErrorInvalidMemcpyDirection, 
cudaErrorAddressOfConstant, 
cudaErrorTextureFetchFailed, 
cudaErrorTextureNotBound, 
cudaErrorSynchronizationError, 
cudaErrorInvalidFilterSetting, 
cudaErrorInvalidNormSetting, 
cudaErrorMixedDeviceExecution, 
cudaErrorCudartUnloading, 
cudaErrorUnknown, 
cudaErrorNotYetImplemented, 
cudaErrorMemoryValueTooLarge, 
cudaErrorInvalidResourceHandle, 
cudaErrorNotReady, 
cudaErrorInsufficientDriver, 
cudaErrorSetOnActiveProcess, 
cudaErrorNoDevice = 38, 
cudaErrorStartupFailure = 127, 
cudaErrorApiFailureBase = 10000
}; 
#endif
# 138 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 138
enum cudaChannelFormatKind { 

cudaChannelFormatKindSigned, 
cudaChannelFormatKindUnsigned, 
cudaChannelFormatKindFloat, 
cudaChannelFormatKindNone
}; 
#endif
# 150 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 150
struct cudaChannelFormatDesc { 

int x; 
int y; 
int z; 
int w; 
cudaChannelFormatKind f; 
}; 
#endif
# 163 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
struct cudaArray; 
#endif
# 169 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 169
enum cudaMemcpyKind { 

cudaMemcpyHostToHost, 
cudaMemcpyHostToDevice, 
cudaMemcpyDeviceToHost, 
cudaMemcpyDeviceToDevice
}; 
#endif
# 181 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 181
struct cudaPitchedPtr { 

void *ptr; 
size_t pitch; 
size_t xsize; 
size_t ysize; 
}; 
#endif
# 193 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 193
struct cudaExtent { 

size_t width; 
size_t height; 
size_t depth; 
}; 
#endif
# 204 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 204
struct cudaPos { 

size_t x; 
size_t y; 
size_t z; 
}; 
#endif
# 215 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 215
struct cudaMemcpy3DParms { 

cudaArray *srcArray; 
cudaPos srcPos; 
cudaPitchedPtr srcPtr; 

cudaArray *dstArray; 
cudaPos dstPos; 
cudaPitchedPtr dstPtr; 

cudaExtent extent; 
cudaMemcpyKind kind; 
}; 
#endif
# 233 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 233
struct cudaFuncAttributes { 

size_t sharedSizeBytes; 
size_t constSizeBytes; 
size_t localSizeBytes; 
int maxThreadsPerBlock; 
int numRegs; 
int __cudaReserved[8]; 
}; 
#endif
# 247 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 247
enum cudaComputeMode { 

cudaComputeModeDefault, 
cudaComputeModeExclusive, 
cudaComputeModeProhibited
}; 
#endif
# 259 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 259
struct cudaDeviceProp { 

char name[256]; 
size_t totalGlobalMem; 
size_t sharedMemPerBlock; 
int regsPerBlock; 
int warpSize; 
size_t memPitch; 
int maxThreadsPerBlock; 
int maxThreadsDim[3]; 
int maxGridSize[3]; 
int clockRate; 
size_t totalConstMem; 
int major; 
int minor; 
size_t textureAlignment; 
int deviceOverlap; 
int multiProcessorCount; 
int kernelExecTimeoutEnabled; 
int integrated; 
int canMapHostMemory; 
int computeMode; 
int __cudaReserved[36]; 
}; 
#endif
# 318 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
typedef cudaError 
# 318
cudaError_t; 
#endif
# 324 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
typedef int 
# 324
cudaStream_t; 
#endif
# 330 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
typedef int 
# 330
cudaEvent_t; 
#endif
# 54 "/usr/local/cuda/bin/../include/texture_types.h"
#if 0
# 54
enum cudaTextureAddressMode { 

cudaAddressModeWrap, 
cudaAddressModeClamp
}; 
#endif
# 61 "/usr/local/cuda/bin/../include/texture_types.h"
#if 0
# 61
enum cudaTextureFilterMode { 

cudaFilterModePoint, 
cudaFilterModeLinear
}; 
#endif
# 68 "/usr/local/cuda/bin/../include/texture_types.h"
#if 0
# 68
enum cudaTextureReadMode { 

cudaReadModeElementType, 
cudaReadModeNormalizedFloat
}; 
#endif
# 75 "/usr/local/cuda/bin/../include/texture_types.h"
#if 0
# 75
struct textureReference { 

int normalized; 
cudaTextureFilterMode filterMode; 
cudaTextureAddressMode addressMode[3]; 
cudaChannelFormatDesc channelDesc; 
int __cudaReserved[16]; 
}; 
#endif
# 54 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 54
struct char1 { 

signed char x; 
}; 
#endif
# 60 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 60
struct uchar1 { 

unsigned char x; 
}; 
#endif
# 66 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 66
struct __attribute__((__aligned__(2))) char2 { 

signed char x; signed char y; 
}; 
#endif
# 72 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 72
struct __attribute__((__aligned__(2))) uchar2 { 

unsigned char x; unsigned char y; 
}; 
#endif
# 78 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 78
struct char3 { 

signed char x; signed char y; signed char z; 
}; 
#endif
# 84 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 84
struct uchar3 { 

unsigned char x; unsigned char y; unsigned char z; 
}; 
#endif
# 90 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 90
struct __attribute__((__aligned__(4))) char4 { 

signed char x; signed char y; signed char z; signed char w; 
}; 
#endif
# 96 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 96
struct __attribute__((__aligned__(4))) uchar4 { 

unsigned char x; unsigned char y; unsigned char z; unsigned char w; 
}; 
#endif
# 102 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 102
struct short1 { 

short x; 
}; 
#endif
# 108 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 108
struct ushort1 { 

unsigned short x; 
}; 
#endif
# 114 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 114
struct __attribute__((__aligned__(4))) short2 { 

short x; short y; 
}; 
#endif
# 120 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 120
struct __attribute__((__aligned__(4))) ushort2 { 

unsigned short x; unsigned short y; 
}; 
#endif
# 126 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 126
struct short3 { 

short x; short y; short z; 
}; 
#endif
# 132 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 132
struct ushort3 { 

unsigned short x; unsigned short y; unsigned short z; 
}; 
#endif
# 138 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 138
struct __attribute__((__aligned__(8))) short4 { 

short x; short y; short z; short w; 
}; 
#endif
# 144 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 144
struct __attribute__((__aligned__(8))) ushort4 { 

unsigned short x; unsigned short y; unsigned short z; unsigned short w; 
}; 
#endif
# 150 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 150
struct int1 { 

int x; 
}; 
#endif
# 156 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 156
struct uint1 { 

unsigned x; 
}; 
#endif
# 162 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 162
struct __attribute__((__aligned__(8))) int2 { 

int x; int y; 
}; 
#endif
# 168 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 168
struct __attribute__((__aligned__(8))) uint2 { 

unsigned x; unsigned y; 
}; 
#endif
# 174 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 174
struct int3 { 

int x; int y; int z; 
}; 
#endif
# 180 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 180
struct uint3 { 

unsigned x; unsigned y; unsigned z; 
}; 
#endif
# 186 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 186
struct __attribute__((__aligned__(16))) int4 { 

int x; int y; int z; int w; 
}; 
#endif
# 192 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 192
struct __attribute__((__aligned__(16))) uint4 { 

unsigned x; unsigned y; unsigned z; unsigned w; 
}; 
#endif
# 198 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 198
struct long1 { 

long x; 
}; 
#endif
# 204 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 204
struct ulong1 { 

unsigned long x; 
}; 
#endif
# 216 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 216
struct __attribute__((__aligned__(8))) long2 { 

long x; long y; 
}; 
#endif
# 228 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 228
struct __attribute__((__aligned__(8))) ulong2 { 

unsigned long x; unsigned long y; 
}; 
#endif
# 236 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 236
struct long3 { 

long x; long y; long z; 
}; 
#endif
# 242 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 242
struct ulong3 { 

unsigned long x; unsigned long y; unsigned long z; 
}; 
#endif
# 248 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 248
struct __attribute__((__aligned__(16))) long4 { 

long x; long y; long z; long w; 
}; 
#endif
# 254 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 254
struct __attribute__((__aligned__(16))) ulong4 { 

unsigned long x; unsigned long y; unsigned long z; unsigned long w; 
}; 
#endif
# 262 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 262
struct float1 { 

float x; 
}; 
#endif
# 268 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 268
struct __attribute__((__aligned__(8))) float2 { 

float x; float y; 
}; 
#endif
# 274 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 274
struct float3 { 

float x; float y; float z; 
}; 
#endif
# 280 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 280
struct __attribute__((__aligned__(16))) float4 { 

float x; float y; float z; float w; 
}; 
#endif
# 286 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 286
struct longlong1 { 

long long x; 
}; 
#endif
# 292 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 292
struct ulonglong1 { 

unsigned long long x; 
}; 
#endif
# 298 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 298
struct __attribute__((__aligned__(16))) longlong2 { 

long long x; long long y; 
}; 
#endif
# 304 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 304
struct __attribute__((__aligned__(16))) ulonglong2 { 

unsigned long long x; unsigned long long y; 
}; 
#endif
# 310 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 310
struct double1 { 

double x; 
}; 
#endif
# 316 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 316
struct __attribute__((__aligned__(16))) double2 { 

double x; double y; 
}; 
#endif
# 328 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef char1 
# 328
char1; 
#endif
# 330 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uchar1 
# 330
uchar1; 
#endif
# 332 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef char2 
# 332
char2; 
#endif
# 334 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uchar2 
# 334
uchar2; 
#endif
# 336 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef char3 
# 336
char3; 
#endif
# 338 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uchar3 
# 338
uchar3; 
#endif
# 340 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef char4 
# 340
char4; 
#endif
# 342 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uchar4 
# 342
uchar4; 
#endif
# 344 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef short1 
# 344
short1; 
#endif
# 346 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ushort1 
# 346
ushort1; 
#endif
# 348 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef short2 
# 348
short2; 
#endif
# 350 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ushort2 
# 350
ushort2; 
#endif
# 352 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef short3 
# 352
short3; 
#endif
# 354 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ushort3 
# 354
ushort3; 
#endif
# 356 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef short4 
# 356
short4; 
#endif
# 358 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ushort4 
# 358
ushort4; 
#endif
# 360 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef int1 
# 360
int1; 
#endif
# 362 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uint1 
# 362
uint1; 
#endif
# 364 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef int2 
# 364
int2; 
#endif
# 366 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uint2 
# 366
uint2; 
#endif
# 368 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef int3 
# 368
int3; 
#endif
# 370 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uint3 
# 370
uint3; 
#endif
# 372 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef int4 
# 372
int4; 
#endif
# 374 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uint4 
# 374
uint4; 
#endif
# 376 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef long1 
# 376
long1; 
#endif
# 378 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulong1 
# 378
ulong1; 
#endif
# 380 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef long2 
# 380
long2; 
#endif
# 382 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulong2 
# 382
ulong2; 
#endif
# 384 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef long3 
# 384
long3; 
#endif
# 386 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulong3 
# 386
ulong3; 
#endif
# 388 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef long4 
# 388
long4; 
#endif
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulong4 
# 390
ulong4; 
#endif
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef float1 
# 392
float1; 
#endif
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef float2 
# 394
float2; 
#endif
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef float3 
# 396
float3; 
#endif
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef float4 
# 398
float4; 
#endif
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef longlong1 
# 400
longlong1; 
#endif
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulonglong1 
# 402
ulonglong1; 
#endif
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef longlong2 
# 404
longlong2; 
#endif
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulonglong2 
# 406
ulonglong2; 
#endif
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef double1 
# 408
double1; 
#endif
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef double2 
# 410
double2; 
#endif
# 419 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef struct dim3 
# 419
dim3; 
#endif
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 422
struct dim3 { 

unsigned x; unsigned y; unsigned z; 
# 430
}; 
#endif
# 89 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent); 
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent); 
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent); 
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *); 
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t); 
# 102
extern "C" cudaError_t cudaMalloc(void **, size_t); 
extern "C" cudaError_t cudaMallocHost(void **, size_t); 
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t); 
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (1)); 
extern "C" cudaError_t cudaFree(void *); 
extern "C" cudaError_t cudaFreeHost(void *); 
extern "C" cudaError_t cudaFreeArray(cudaArray *); 

extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned); 
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned); 
# 120
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind); 
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind); 
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind); 
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); 
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); 
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); 
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind); 
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); 
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice); 
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost); 
# 137
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t); 
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t); 
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t); 
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t); 
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t); 
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t); 
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t); 
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t); 
# 152
extern "C" cudaError_t cudaMemset(void *, int, size_t); 
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t); 
# 161
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *); 
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *); 
# 170
extern "C" cudaError_t cudaGetDeviceCount(int *); 
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int); 
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *); 
extern "C" cudaError_t cudaSetDevice(int); 
extern "C" cudaError_t cudaGetDevice(int *); 
extern "C" cudaError_t cudaSetValidDevices(int *, int); 
extern "C" cudaError_t cudaSetDeviceFlags(int); 
# 184
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U)); 
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t); 
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *); 
extern "C" cudaError_t cudaUnbindTexture(const textureReference *); 
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *); 
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *); 
# 197
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *); 
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind); 
# 206
extern "C" cudaError_t cudaGetLastError(); 
extern "C" const char *cudaGetErrorString(cudaError_t); 
# 215
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = (0)); 
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t); 
extern "C" cudaError_t cudaLaunch(const char *); 
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *); 
# 226
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *); 
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t); 
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t); 
extern "C" cudaError_t cudaStreamQuery(cudaStream_t); 
# 237
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *); 
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, int); 
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t); 
extern "C" cudaError_t cudaEventQuery(cudaEvent_t); 
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t); 
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t); 
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t); 
# 251
extern "C" cudaError_t cudaSetDoubleForDevice(double *); 
extern "C" cudaError_t cudaSetDoubleForHost(double *); 
# 260
extern "C" cudaError_t cudaThreadExit(); 
extern "C" cudaError_t cudaThreadSynchronize(); 
# 269
extern "C" cudaError_t cudaDriverGetVersion(int *); 
extern "C" cudaError_t cudaRuntimeGetVersion(int *); 
# 93 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
{ 
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
{ 
auto int e = (((int)sizeof(char)) * 8); 




return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 

} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
{ 
auto int e = (((int)sizeof(signed char)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
{ 
auto int e = (((int)sizeof(unsigned char)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
{ 
auto int e = (((int)sizeof(signed char)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
{ 
auto int e = (((int)sizeof(unsigned char)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
{ 
auto int e = (((int)sizeof(signed char)) * 8); 

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
{ 
auto int e = (((int)sizeof(unsigned char)) * 8); 

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
{ 
auto int e = (((int)sizeof(signed char)) * 8); 

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
{ 
auto int e = (((int)sizeof(unsigned char)) * 8); 

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
{ 
auto int e = (((int)sizeof(short)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
{ 
auto int e = (((int)sizeof(unsigned short)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
{ 
auto int e = (((int)sizeof(short)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
{ 
auto int e = (((int)sizeof(unsigned short)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
{ 
auto int e = (((int)sizeof(short)) * 8); 

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
{ 
auto int e = (((int)sizeof(unsigned short)) * 8); 

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
{ 
auto int e = (((int)sizeof(short)) * 8); 

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
{ 
auto int e = (((int)sizeof(unsigned short)) * 8); 

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
{ 
auto int e = (((int)sizeof(int)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
{ 
auto int e = (((int)sizeof(unsigned)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
{ 
auto int e = (((int)sizeof(int)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
{ 
auto int e = (((int)sizeof(unsigned)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
{ 
auto int e = (((int)sizeof(int)) * 8); 

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
{ 
auto int e = (((int)sizeof(unsigned)) * 8); 

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
{ 
auto int e = (((int)sizeof(int)) * 8); 

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
{ 
auto int e = (((int)sizeof(unsigned)) * 8); 

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
} 



template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long> () 
{ 
auto int e = (((int)sizeof(long)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> () 
{ 
auto int e = (((int)sizeof(unsigned long)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> () 
{ 
auto int e = (((int)sizeof(long)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> () 
{ 
auto int e = (((int)sizeof(unsigned long)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> () 
{ 
auto int e = (((int)sizeof(long)) * 8); 

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> () 
{ 
auto int e = (((int)sizeof(unsigned long)) * 8); 

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> () 
{ 
auto int e = (((int)sizeof(long)) * 8); 

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> () 
{ 
auto int e = (((int)sizeof(unsigned long)) * 8); 

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
} 



template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
{ 
auto int e = (((int)sizeof(float)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
{ 
auto int e = (((int)sizeof(float)) * 8); 

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
{ 
auto int e = (((int)sizeof(float)) * 8); 

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
} 

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
{ 
auto int e = (((int)sizeof(float)) * 8); 

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
} 
# 54 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
{ 
auto cudaPitchedPtr s; 

(s.ptr) = d; 
(s.pitch) = p; 
(s.xsize) = xsz; 
(s.ysize) = ysz; 

return s; 
} 

static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
{ 
auto cudaPos p; 

(p.x) = x; 
(p.y) = y; 
(p.z) = z; 

return p; 
} 

static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
{ 
auto cudaExtent e; 

(e.width) = w; 
(e.height) = h; 
(e.depth) = d; 

return e; 
} 
# 54 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x) 
{ 
auto char1 t; (t.x) = x; return t; 
} 

static inline uchar1 make_uchar1(unsigned char x) 
{ 
auto uchar1 t; (t.x) = x; return t; 
} 

static inline char2 make_char2(signed char x, signed char y) 
{ 
auto char2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
{ 
auto uchar2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline char3 make_char3(signed char x, signed char y, signed char z) 
{ 
auto char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
} 

static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
{ 
auto uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
} 

static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
{ 
auto char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
} 

static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
{ 
auto uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
} 

static inline short1 make_short1(short x) 
{ 
auto short1 t; (t.x) = x; return t; 
} 

static inline ushort1 make_ushort1(unsigned short x) 
{ 
auto ushort1 t; (t.x) = x; return t; 
} 

static inline short2 make_short2(short x, short y) 
{ 
auto short2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
{ 
auto ushort2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline short3 make_short3(short x, short y, short z) 
{ 
auto short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
} 

static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
{ 
auto ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
} 

static inline short4 make_short4(short x, short y, short z, short w) 
{ 
auto short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
} 

static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
{ 
auto ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
} 

static inline int1 make_int1(int x) 
{ 
auto int1 t; (t.x) = x; return t; 
} 

static inline uint1 make_uint1(unsigned x) 
{ 
auto uint1 t; (t.x) = x; return t; 
} 

static inline int2 make_int2(int x, int y) 
{ 
auto int2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline uint2 make_uint2(unsigned x, unsigned y) 
{ 
auto uint2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline int3 make_int3(int x, int y, int z) 
{ 
auto int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
} 

static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
{ 
auto uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
} 

static inline int4 make_int4(int x, int y, int z, int w) 
{ 
auto int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
} 

static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
{ 
auto uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
} 

static inline long1 make_long1(long x) 
{ 
auto long1 t; (t.x) = x; return t; 
} 

static inline ulong1 make_ulong1(unsigned long x) 
{ 
auto ulong1 t; (t.x) = x; return t; 
} 

static inline long2 make_long2(long x, long y) 
{ 
auto long2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
{ 
auto ulong2 t; (t.x) = x; (t.y) = y; return t; 
} 



static inline long3 make_long3(long x, long y, long z) 
{ 
auto long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
} 

static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
{ 
auto ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
} 

static inline long4 make_long4(long x, long y, long z, long w) 
{ 
auto long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
} 

static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
{ 
auto ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
} 



static inline float1 make_float1(float x) 
{ 
auto float1 t; (t.x) = x; return t; 
} 

static inline float2 make_float2(float x, float y) 
{ 
auto float2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline float3 make_float3(float x, float y, float z) 
{ 
auto float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
} 

static inline float4 make_float4(float x, float y, float z, float w) 
{ 
auto float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
} 

static inline longlong1 make_longlong1(long long x) 
{ 
auto longlong1 t; (t.x) = x; return t; 
} 

static inline ulonglong1 make_ulonglong1(unsigned long long x) 
{ 
auto ulonglong1 t; (t.x) = x; return t; 
} 

static inline longlong2 make_longlong2(long long x, long long y) 
{ 
auto longlong2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
{ 
auto ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
} 

static inline double1 make_double1(double x) 
{ 
auto double1 t; (t.x) = x; return t; 
} 

static inline double2 make_double2(double x, double y) 
{ 
auto double2 t; (t.x) = x; (t.y) = y; return t; 
} 
# 37 "/usr/include/i386/_types.h" 3
typedef signed char __int8_t; 



typedef unsigned char __uint8_t; 
typedef short __int16_t; 
typedef unsigned short __uint16_t; 
typedef int __int32_t; 
typedef unsigned __uint32_t; 
typedef long long __int64_t; 
typedef unsigned long long __uint64_t; 

typedef long __darwin_intptr_t; 
typedef unsigned __darwin_natural_t; 
# 70
typedef int __darwin_ct_rune_t; 
# 79
typedef 
# 76
union __mbstate_t { 
char __mbstate8[128]; 
long long _mbstateL; 
} __mbstate_t; 

typedef __mbstate_t __darwin_mbstate_t; 


typedef int __darwin_ptrdiff_t; 
# 90
typedef unsigned long __darwin_size_t; 
# 96
typedef __builtin_va_list __darwin_va_list; 
# 102
typedef int __darwin_wchar_t; 




typedef __darwin_wchar_t __darwin_rune_t; 


typedef int __darwin_wint_t; 




typedef unsigned long __darwin_clock_t; 
typedef __uint32_t __darwin_socklen_t; 
typedef long __darwin_ssize_t; 
typedef long __darwin_time_t; 
# 58 "/usr/include/sys/_types.h" 3
struct __darwin_pthread_handler_rec { 

void (*__routine)(void *); 
void *__arg; 
__darwin_pthread_handler_rec *__next; 
}; 
struct _opaque_pthread_attr_t { long __sig; char __opaque[36]; }; 
struct _opaque_pthread_cond_t { long __sig; char __opaque[24]; }; 
struct _opaque_pthread_condattr_t { long __sig; char __opaque[4]; }; 
struct _opaque_pthread_mutex_t { long __sig; char __opaque[40]; }; 
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; }; 
struct _opaque_pthread_once_t { long __sig; char __opaque[4]; }; 
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[124]; }; 
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[12]; }; 
struct _opaque_pthread_t { long __sig; __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[596]; }; 
# 94 "/usr/include/sys/_types.h" 3
typedef __int64_t __darwin_blkcnt_t; 
typedef __int32_t __darwin_blksize_t; 
typedef __int32_t __darwin_dev_t; 
typedef unsigned __darwin_fsblkcnt_t; 
typedef unsigned __darwin_fsfilcnt_t; 
typedef __uint32_t __darwin_gid_t; 
typedef __uint32_t __darwin_id_t; 
typedef __uint64_t __darwin_ino64_t; 



typedef __uint32_t __darwin_ino_t; 

typedef __darwin_natural_t __darwin_mach_port_name_t; 
typedef __darwin_mach_port_name_t __darwin_mach_port_t; 
typedef __uint16_t __darwin_mode_t; 
typedef __int64_t __darwin_off_t; 
typedef __int32_t __darwin_pid_t; 

typedef _opaque_pthread_attr_t __darwin_pthread_attr_t; 

typedef _opaque_pthread_cond_t __darwin_pthread_cond_t; 

typedef _opaque_pthread_condattr_t __darwin_pthread_condattr_t; 
typedef unsigned long __darwin_pthread_key_t; 

typedef _opaque_pthread_mutex_t __darwin_pthread_mutex_t; 

typedef _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t; 

typedef _opaque_pthread_once_t __darwin_pthread_once_t; 

typedef _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t; 

typedef _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t; 

typedef _opaque_pthread_t *__darwin_pthread_t; 
typedef __uint32_t __darwin_sigset_t; 
typedef __int32_t __darwin_suseconds_t; 
typedef __uint32_t __darwin_uid_t; 
typedef __uint32_t __darwin_useconds_t; 
typedef unsigned char __darwin_uuid_t[16]; 
# 29 "/usr/include/_types.h" 3
typedef int __darwin_nl_item; 
typedef int __darwin_wctrans_t; 



typedef unsigned long __darwin_wctype_t; 
# 88 "/usr/include/sys/_structs.h" 3
struct timespec { 

__darwin_time_t tv_sec; 
long tv_nsec; 
}; 
# 77 "/usr/include/time.h" 3
typedef __darwin_clock_t clock_t; 
# 87 "/usr/include/time.h" 3
typedef __darwin_time_t time_t; 


struct tm { 
int tm_sec; 
int tm_min; 
int tm_hour; 
int tm_mday; 
int tm_mon; 
int tm_year; 
int tm_wday; 
int tm_yday; 
int tm_isdst; 
long tm_gmtoff; 
char *tm_zone; 
}; 
# 113 "/usr/include/time.h" 3
extern char *tzname[]; 


extern int getdate_err; 

extern long timezone __asm__("_timezone$UNIX2003"); 

extern int daylight; 


extern "C" char *asctime(const tm *); 
extern "C"  __attribute__((__weak__)) clock_t clock() __asm__("_clock$UNIX2003"); 
extern "C" char *ctime(const time_t *); 
extern "C" double difftime(time_t, time_t); 
extern "C" tm *getdate(const char *); 
extern "C" tm *gmtime(const time_t *); 
extern "C" tm *localtime(const time_t *); 
extern "C" time_t mktime(tm *) __asm__("_mktime$UNIX2003"); 
extern "C" size_t strftime(char *, size_t, const char *, const tm *) __asm__("_strftime$UNIX2003"); 
extern "C" char *strptime(const char *, const char *, tm *) __asm__("_strptime$UNIX2003"); 
extern "C" time_t time(time_t *); 


extern "C" void tzset(); 



extern "C" char *asctime_r(const tm *, char *); 
extern "C" char *ctime_r(const time_t *, char *); 
extern "C" tm *gmtime_r(const time_t *, tm *); 
extern "C" tm *localtime_r(const time_t *, tm *); 


extern "C" time_t posix2time(time_t); 



extern "C" void tzsetwall(); 
extern "C" time_t time2posix(time_t); 
extern "C" time_t timelocal(tm *const); 
extern "C" time_t timegm(tm *const); 



extern "C" int nanosleep(const timespec *, timespec *) __asm__("_nanosleep$UNIX2003"); 
# 70 "/usr/include/string.h" 3
typedef __darwin_ssize_t ssize_t; 
# 81 "/usr/include/string.h" 3
extern "C" void *memchr(const void *, int, size_t); 
extern "C" int memcmp(const void *, const void *, size_t); 
extern "C"  __attribute__((__weak__)) void *memcpy(void *, const void *, size_t); 
extern "C" void *memmove(void *, const void *, size_t); 
extern "C"  __attribute__((__weak__)) void *memset(void *, int, size_t); 

extern "C" char *stpcpy(char *, const char *); 
extern "C" char *strcasestr(const char *, const char *); 

extern "C" char *strcat(char *, const char *); 
extern "C" char *strchr(const char *, int); 
extern "C" int strcmp(const char *, const char *); 
extern "C" int strcoll(const char *, const char *); 
extern "C" char *strcpy(char *, const char *); 
extern "C" size_t strcspn(const char *, const char *); 
extern "C" char *strerror(int) __asm__("_strerror$UNIX2003"); 
extern "C" int strerror_r(int, char *, size_t); 
extern "C" size_t strlen(const char *); 
extern "C" char *strncat(char *, const char *, size_t); 
extern "C" int strncmp(const char *, const char *, size_t); 
extern "C" char *strncpy(char *, const char *, size_t); 

extern "C" char *strnstr(const char *, const char *, size_t); 

extern "C" char *strpbrk(const char *, const char *); 
extern "C" char *strrchr(const char *, int); 
extern "C" size_t strspn(const char *, const char *); 
extern "C" char *strstr(const char *, const char *); 
extern "C" char *strtok(char *, const char *); 
extern "C" size_t strxfrm(char *, const char *, size_t); 



extern "C" void *memccpy(void *, const void *, int, size_t); 
extern "C" char *strtok_r(char *, const char *, char **); 
extern "C" char *strdup(const char *); 

extern "C" int bcmp(const void *, const void *, size_t); 
extern "C" void bcopy(const void *, void *, size_t); 
extern "C" void bzero(void *, size_t); 
extern "C" int ffs(int); 
extern "C" int ffsl(long); 
extern "C" int fls(int); 
extern "C" int flsl(long); 
extern "C" char *index(const char *, int); 
extern "C" void memset_pattern4(void *, const void *, size_t); 
extern "C" void memset_pattern8(void *, const void *, size_t); 
extern "C" void memset_pattern16(void *, const void *, size_t); 
extern "C" char *rindex(const char *, int); 
extern "C" int strcasecmp(const char *, const char *); 
extern "C" size_t strlcat(char *, const char *, size_t); 
extern "C" size_t strlcpy(char *, const char *, size_t); 
extern "C" void strmode(int, char *); 
extern "C" int strncasecmp(const char *, const char *, size_t); 
extern "C" char *strsep(char **, const char *); 
extern "C" char *strsignal(int); 
extern "C" void swab(const void *, void *, ssize_t); 
# 56 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C"  __attribute__((__weak__)) clock_t clock() __asm__("_clock$UNIX2003"); 


extern "C"  __attribute__((__weak__)) void *memset(void *, int, size_t); 


extern "C"  __attribute__((__weak__)) void *memcpy(void *, const void *, size_t); 
# 65 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C"  __attribute__((__weak__)) int abs(int) __attribute__((__const__)); 

extern "C"  __attribute__((__weak__)) long labs(long) __attribute__((__const__)); 

extern "C"  __attribute__((__weak__)) long long llabs(long long); 

extern "C"  __attribute__((__weak__)) double fabs(double); 

extern "C"  __attribute__((__weak__)) float fabsf(float); 


extern "C"  __attribute__((__weak__)) int min(int, int); 

extern "C"  __attribute__((__weak__)) unsigned umin(unsigned, unsigned); 

extern "C"  __attribute__((__weak__)) float fminf(float, float); 

extern "C"  __attribute__((__weak__)) double fmin(double, double); 


extern "C"  __attribute__((__weak__)) int max(int, int); 

extern "C"  __attribute__((__weak__)) unsigned umax(unsigned, unsigned); 

extern "C"  __attribute__((__weak__)) float fmaxf(float, float); 

extern "C"  __attribute__((__weak__)) double fmax(double, double); 


extern "C"  __attribute__((__weak__)) double sin(double); 

extern "C"  __attribute__((__weak__)) float sinf(float); 


extern "C"  __attribute__((__weak__)) double cos(double); 

extern "C"  __attribute__((__weak__)) float cosf(float); 


extern "C"  __attribute__((__weak__)) void sincos(double, double *, double *); 

extern "C"  __attribute__((__weak__)) void sincosf(float, float *, float *); 


extern "C"  __attribute__((__weak__)) double tan(double); 

extern "C"  __attribute__((__weak__)) float tanf(float); 


extern "C"  __attribute__((__weak__)) double sqrt(double); 

extern "C"  __attribute__((__weak__)) float sqrtf(float); 


extern "C"  __attribute__((__weak__)) double rsqrt(double); 

extern "C"  __attribute__((__weak__)) float rsqrtf(float); 


extern "C"  __attribute__((__weak__)) double exp2(double); 

extern "C"  __attribute__((__weak__)) float exp2f(float); 


extern "C"  __attribute__((__weak__)) double exp10(double); 

extern "C"  __attribute__((__weak__)) float exp10f(float); 


extern "C"  __attribute__((__weak__)) double expm1(double); 

extern "C"  __attribute__((__weak__)) float expm1f(float); 


extern "C"  __attribute__((__weak__)) double log2(double); 

extern "C"  __attribute__((__weak__)) float log2f(float); 


extern "C"  __attribute__((__weak__)) double log10(double); 

extern "C"  __attribute__((__weak__)) float log10f(float); 


extern "C"  __attribute__((__weak__)) double log(double); 

extern "C"  __attribute__((__weak__)) float logf(float); 


extern "C"  __attribute__((__weak__)) double log1p(double); 

extern "C"  __attribute__((__weak__)) float log1pf(float); 


extern "C"  __attribute__((__weak__)) double floor(double); 

extern "C"  __attribute__((__weak__)) float floorf(float); 


extern "C"  __attribute__((__weak__)) double exp(double); 

extern "C"  __attribute__((__weak__)) float expf(float); 


extern "C"  __attribute__((__weak__)) double cosh(double); 

extern "C"  __attribute__((__weak__)) float coshf(float); 


extern "C"  __attribute__((__weak__)) double sinh(double); 

extern "C"  __attribute__((__weak__)) float sinhf(float); 


extern "C"  __attribute__((__weak__)) double tanh(double); 

extern "C"  __attribute__((__weak__)) float tanhf(float); 


extern "C"  __attribute__((__weak__)) double acosh(double); 

extern "C"  __attribute__((__weak__)) float acoshf(float); 


extern "C"  __attribute__((__weak__)) double asinh(double); 

extern "C"  __attribute__((__weak__)) float asinhf(float); 


extern "C"  __attribute__((__weak__)) double atanh(double); 

extern "C"  __attribute__((__weak__)) float atanhf(float); 


extern "C"  __attribute__((__weak__)) double ldexp(double, int); 

extern "C"  __attribute__((__weak__)) float ldexpf(float, int); 


extern "C"  __attribute__((__weak__)) double logb(double); 

extern "C"  __attribute__((__weak__)) float logbf(float); 


extern "C"  __attribute__((__weak__)) int ilogb(double); 

extern "C"  __attribute__((__weak__)) int ilogbf(float); 


extern "C"  __attribute__((__weak__)) double scalbn(double, int); 

extern "C"  __attribute__((__weak__)) float scalbnf(float, int); 


extern "C"  __attribute__((__weak__)) double scalbln(double, long); 

extern "C"  __attribute__((__weak__)) float scalblnf(float, long); 


extern "C"  __attribute__((__weak__)) double frexp(double, int *); 

extern "C"  __attribute__((__weak__)) float frexpf(float, int *); 


extern "C"  __attribute__((__weak__)) double round(double); 

extern "C"  __attribute__((__weak__)) float roundf(float); 


extern "C"  __attribute__((__weak__)) long lround(double); 

extern "C"  __attribute__((__weak__)) long lroundf(float); 


extern "C"  __attribute__((__weak__)) long long llround(double); 

extern "C"  __attribute__((__weak__)) long long llroundf(float); 


extern "C"  __attribute__((__weak__)) double rint(double); 

extern "C"  __attribute__((__weak__)) float rintf(float); 


extern "C"  __attribute__((__weak__)) long lrint(double); 

extern "C"  __attribute__((__weak__)) long lrintf(float); 


extern "C"  __attribute__((__weak__)) long long llrint(double); 

extern "C"  __attribute__((__weak__)) long long llrintf(float); 


extern "C"  __attribute__((__weak__)) double nearbyint(double); 

extern "C"  __attribute__((__weak__)) float nearbyintf(float); 


extern "C"  __attribute__((__weak__)) double ceil(double); 

extern "C"  __attribute__((__weak__)) float ceilf(float); 


extern "C"  __attribute__((__weak__)) double trunc(double); 

extern "C"  __attribute__((__weak__)) float truncf(float); 


extern "C"  __attribute__((__weak__)) double fdim(double, double); 

extern "C"  __attribute__((__weak__)) float fdimf(float, float); 


extern "C"  __attribute__((__weak__)) double atan2(double, double); 

extern "C"  __attribute__((__weak__)) float atan2f(float, float); 


extern "C"  __attribute__((__weak__)) double atan(double); 

extern "C"  __attribute__((__weak__)) float atanf(float); 


extern "C"  __attribute__((__weak__)) double asin(double); 

extern "C"  __attribute__((__weak__)) float asinf(float); 


extern "C"  __attribute__((__weak__)) double acos(double); 

extern "C"  __attribute__((__weak__)) float acosf(float); 


extern "C"  __attribute__((__weak__)) double hypot(double, double); 

extern "C"  __attribute__((__weak__)) float hypotf(float, float); 


extern "C"  __attribute__((__weak__)) double cbrt(double); 

extern "C"  __attribute__((__weak__)) float cbrtf(float); 


extern "C"  __attribute__((__weak__)) double pow(double, double); 

extern "C"  __attribute__((__weak__)) float powf(float, float); 


extern "C"  __attribute__((__weak__)) double modf(double, double *); 

extern "C"  __attribute__((__weak__)) float modff(float, float *); 


extern "C"  __attribute__((__weak__)) double fmod(double, double); 

extern "C"  __attribute__((__weak__)) float fmodf(float, float); 


extern "C"  __attribute__((__weak__)) double remainder(double, double); 

extern "C"  __attribute__((__weak__)) float remainderf(float, float); 


extern "C"  __attribute__((__weak__)) double remquo(double, double, int *); 

extern "C"  __attribute__((__weak__)) float remquof(float, float, int *); 


extern "C"  __attribute__((__weak__)) double erf(double); 

extern "C"  __attribute__((__weak__)) float erff(float); 


extern "C"  __attribute__((__weak__)) double erfinv(double); 

extern "C"  __attribute__((__weak__)) float erfinvf(float); 


extern "C"  __attribute__((__weak__)) double erfc(double); 

extern "C"  __attribute__((__weak__)) float erfcf(float); 


extern "C"  __attribute__((__weak__)) double erfcinv(double); 

extern "C"  __attribute__((__weak__)) float erfcinvf(float); 


extern "C"  __attribute__((__weak__)) double lgamma(double); 

extern "C"  __attribute__((__weak__)) float lgammaf(float); 


extern "C"  __attribute__((__weak__)) double tgamma(double); 

extern "C"  __attribute__((__weak__)) float tgammaf(float); 


extern "C"  __attribute__((__weak__)) double copysign(double, double); 

extern "C"  __attribute__((__weak__)) float copysignf(float, float); 


extern "C"  __attribute__((__weak__)) double nextafter(double, double); 

extern "C"  __attribute__((__weak__)) float nextafterf(float, float); 


extern "C"  __attribute__((__weak__)) double nan(const char *); 

extern "C"  __attribute__((__weak__)) float nanf(const char *); 


extern "C"  __attribute__((__weak__)) int __isinf(double); 

extern "C"  __attribute__((__weak__)) int __isinff(float); 


extern "C"  __attribute__((__weak__)) int __isnan(double); 

extern "C"  __attribute__((__weak__)) int __isnanf(float); 




extern "C"  __attribute__((__weak__)) int __isfinited(double); 

extern "C"  __attribute__((__weak__)) int __isfinitef(float); 

extern "C"  __attribute__((__weak__)) int __signbitd(double); 
# 409 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C"  __attribute__((__weak__)) int __signbitf(float); 


extern "C"  __attribute__((__weak__)) double fma(double, double, double); 

extern "C"  __attribute__((__weak__)) float fmaf(float, float, float); 
# 49 "/usr/include/architecture/i386/math.h" 3
extern "C" { typedef float float_t; }
extern "C" { typedef double double_t; }
# 83 "/usr/include/architecture/i386/math.h" 3
enum __cuda__FP_NAN { 
_FP_NAN = 1, 
_FP_INFINITE, 
_FP_ZERO, 
_FP_NORMAL, 
_FP_SUBNORMAL, 
_FP_SUPERNORMAL
}; 
# 117 "/usr/include/architecture/i386/math.h" 3
extern "C" unsigned __math_errhandling(); 
# 137
extern "C" int __fpclassifyf(float); 
extern "C" int __fpclassifyd(double); 
extern "C" int __fpclassify(long double); 
# 172 "/usr/include/architecture/i386/math.h" 3
extern "C" { static inline int __inline_isfinitef(float) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isfinited(double) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isfinite(long double) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isinff(float) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isinfd(double) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isinf(long double) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isnanf(float) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isnand(double) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isnan(long double) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isnormalf(float) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isnormald(double) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_isnormal(long double) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_signbitf(float) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_signbitd(double) __attribute__((__always_inline__)); } 
extern "C" { static inline int __inline_signbit(long double) __attribute__((__always_inline__)); } 

extern "C" { static inline __attribute__((__always_inline__)) int __inline_isinff(float __x) { return __builtin_fabsf(__x) == __builtin_inff(); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isinfd(double __x) { return __builtin_fabs(__x) == __builtin_inf(); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isinf(long double __x) { return __builtin_fabsl(__x) == __builtin_infl(); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isfinitef(float __x) { return (__x == __x) && (__builtin_fabsf(__x) != __builtin_inff()); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isfinited(double __x) { return (__x == __x) && (__builtin_fabs(__x) != __builtin_inf()); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isfinite(long double __x) { return (__x == __x) && (__builtin_fabsl(__x) != __builtin_infl()); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnanf(float __x) { return __x != __x; } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnand(double __x) { return __x != __x; } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnan(long double __x) { return __x != __x; } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_signbitf(float __x) { auto union { float __f; unsigned __u; } __u; (__u.__f) = __x; return (int)((__u.__u) >> 31); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_signbitd(double __x) { auto union { double __f; unsigned __u[2]; } __u; (__u.__f) = __x; return (int)(((__u.__u)[1]) >> 31); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_signbit(long double __x) { auto union { long double __ld; struct { unsigned __m[2]; short __sexp; } __p; } __u; (__u.__ld) = __x; return (int)(((unsigned short)((__u.__p).__sexp)) >> 15); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnormalf(float __x) { auto float fabsf = __builtin_fabsf(__x); if (__x != __x) { return 0; }  return (fabsf < __builtin_inff()) && (fabsf >= (1.175494351e-38F)); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnormald(double __x) { auto double fabsf = __builtin_fabs(__x); if (__x != __x) { return 0; }  return (fabsf < __builtin_inf()) && (fabsf >= (2.225073858507201383e-308)); } } 
extern "C" { static inline __attribute__((__always_inline__)) int __inline_isnormal(long double __x) { auto long double fabsf = __builtin_fabsl(__x); if (__x != __x) { return 0; }  return (fabsf < __builtin_infl()) && (fabsf >= (0.0L)); } } 
# 262 "/usr/include/architecture/i386/math.h" 3
extern "C"  __attribute__((__weak__)) double acos(double); 
extern "C"  __attribute__((__weak__)) float acosf(float); 

extern "C"  __attribute__((__weak__)) double asin(double); 
extern "C"  __attribute__((__weak__)) float asinf(float); 

extern "C"  __attribute__((__weak__)) double atan(double); 
extern "C"  __attribute__((__weak__)) float atanf(float); 

extern "C"  __attribute__((__weak__)) double atan2(double, double); 
extern "C"  __attribute__((__weak__)) float atan2f(float, float); 

extern "C"  __attribute__((__weak__)) double cos(double); 
extern "C"  __attribute__((__weak__)) float cosf(float); 

extern "C"  __attribute__((__weak__)) double sin(double); 
extern "C"  __attribute__((__weak__)) float sinf(float); 

extern "C"  __attribute__((__weak__)) double tan(double); 
extern "C"  __attribute__((__weak__)) float tanf(float); 

extern "C"  __attribute__((__weak__)) double acosh(double); 
extern "C"  __attribute__((__weak__)) float acoshf(float); 

extern "C"  __attribute__((__weak__)) double asinh(double); 
extern "C"  __attribute__((__weak__)) float asinhf(float); 

extern "C"  __attribute__((__weak__)) double atanh(double); 
extern "C"  __attribute__((__weak__)) float atanhf(float); 

extern "C"  __attribute__((__weak__)) double cosh(double); 
extern "C"  __attribute__((__weak__)) float coshf(float); 

extern "C"  __attribute__((__weak__)) double sinh(double); 
extern "C"  __attribute__((__weak__)) float sinhf(float); 

extern "C"  __attribute__((__weak__)) double tanh(double); 
extern "C"  __attribute__((__weak__)) float tanhf(float); 

extern "C"  __attribute__((__weak__)) double exp(double); 
extern "C"  __attribute__((__weak__)) float expf(float); 

extern "C"  __attribute__((__weak__)) double exp2(double); 
extern "C"  __attribute__((__weak__)) float exp2f(float); 

extern "C"  __attribute__((__weak__)) double expm1(double); 
extern "C"  __attribute__((__weak__)) float expm1f(float); 

extern "C"  __attribute__((__weak__)) double log(double); 
extern "C"  __attribute__((__weak__)) float logf(float); 

extern "C"  __attribute__((__weak__)) double log10(double); 
extern "C"  __attribute__((__weak__)) float log10f(float); 

extern "C"  __attribute__((__weak__)) double log2(double); 
extern "C"  __attribute__((__weak__)) float log2f(float); 

extern "C"  __attribute__((__weak__)) double log1p(double); 
extern "C"  __attribute__((__weak__)) float log1pf(float); 

extern "C"  __attribute__((__weak__)) double logb(double); 
extern "C"  __attribute__((__weak__)) float logbf(float); 

extern "C"  __attribute__((__weak__)) double modf(double, double *); 
extern "C"  __attribute__((__weak__)) float modff(float, float *); 

extern "C"  __attribute__((__weak__)) double ldexp(double, int); 
extern "C"  __attribute__((__weak__)) float ldexpf(float, int); 

extern "C"  __attribute__((__weak__)) double frexp(double, int *); 
extern "C"  __attribute__((__weak__)) float frexpf(float, int *); 

extern "C"  __attribute__((__weak__)) int ilogb(double); 
extern "C"  __attribute__((__weak__)) int ilogbf(float); 

extern "C"  __attribute__((__weak__)) double scalbn(double, int); 
extern "C"  __attribute__((__weak__)) float scalbnf(float, int); 

extern "C"  __attribute__((__weak__)) double scalbln(double, long); 
extern "C"  __attribute__((__weak__)) float scalblnf(float, long); 

extern "C"  __attribute__((__weak__)) double fabs(double); 
extern "C"  __attribute__((__weak__)) float fabsf(float); 

extern "C"  __attribute__((__weak__)) double cbrt(double); 
extern "C"  __attribute__((__weak__)) float cbrtf(float); 

extern "C"  __attribute__((__weak__)) double hypot(double, double); 
extern "C"  __attribute__((__weak__)) float hypotf(float, float); 

extern "C"  __attribute__((__weak__)) double pow(double, double); 
extern "C"  __attribute__((__weak__)) float powf(float, float); 

extern "C"  __attribute__((__weak__)) double sqrt(double); 
extern "C"  __attribute__((__weak__)) float sqrtf(float); 

extern "C"  __attribute__((__weak__)) double erf(double); 
extern "C"  __attribute__((__weak__)) float erff(float); 

extern "C"  __attribute__((__weak__)) double erfc(double); 
extern "C"  __attribute__((__weak__)) float erfcf(float); 

extern "C"  __attribute__((__weak__)) double lgamma(double); 
extern "C"  __attribute__((__weak__)) float lgammaf(float); 

extern "C"  __attribute__((__weak__)) double tgamma(double); 
extern "C"  __attribute__((__weak__)) float tgammaf(float); 

extern "C"  __attribute__((__weak__)) double ceil(double); 
extern "C"  __attribute__((__weak__)) float ceilf(float); 

extern "C"  __attribute__((__weak__)) double floor(double); 
extern "C"  __attribute__((__weak__)) float floorf(float); 

extern "C"  __attribute__((__weak__)) double nearbyint(double); 
extern "C"  __attribute__((__weak__)) float nearbyintf(float); 

extern "C"  __attribute__((__weak__)) double rint(double); 
extern "C"  __attribute__((__weak__)) float rintf(float); 

extern "C"  __attribute__((__weak__)) long lrint(double); 
extern "C"  __attribute__((__weak__)) long lrintf(float); 

extern "C"  __attribute__((__weak__)) double round(double); 
extern "C"  __attribute__((__weak__)) float roundf(float); 

extern "C"  __attribute__((__weak__)) long lround(double); 
extern "C"  __attribute__((__weak__)) long lroundf(float); 




extern "C"  __attribute__((__weak__)) long long llrint(double); 
extern "C"  __attribute__((__weak__)) long long llrintf(float); 

extern "C"  __attribute__((__weak__)) long long llround(double); 
extern "C"  __attribute__((__weak__)) long long llroundf(float); 



extern "C"  __attribute__((__weak__)) double trunc(double); 
extern "C"  __attribute__((__weak__)) float truncf(float); 

extern "C"  __attribute__((__weak__)) double fmod(double, double); 
extern "C"  __attribute__((__weak__)) float fmodf(float, float); 

extern "C"  __attribute__((__weak__)) double remainder(double, double); 
extern "C"  __attribute__((__weak__)) float remainderf(float, float); 

extern "C"  __attribute__((__weak__)) double remquo(double, double, int *); 
extern "C"  __attribute__((__weak__)) float remquof(float, float, int *); 

extern "C"  __attribute__((__weak__)) double copysign(double, double); 
extern "C"  __attribute__((__weak__)) float copysignf(float, float); 

extern "C"  __attribute__((__weak__)) double nan(const char *); 
extern "C"  __attribute__((__weak__)) float nanf(const char *); 

extern "C"  __attribute__((__weak__)) double nextafter(double, double); 
extern "C"  __attribute__((__weak__)) float nextafterf(float, float); 

extern "C"  __attribute__((__weak__)) double fdim(double, double); 
extern "C"  __attribute__((__weak__)) float fdimf(float, float); 

extern "C"  __attribute__((__weak__)) double fmax(double, double); 
extern "C"  __attribute__((__weak__)) float fmaxf(float, float); 

extern "C"  __attribute__((__weak__)) double fmin(double, double); 
extern "C"  __attribute__((__weak__)) float fminf(float, float); 

extern "C"  __attribute__((__weak__)) double fma(double, double, double); 
extern "C"  __attribute__((__weak__)) float fmaf(float, float, float); 

extern "C" long double acosl(long double); 
extern "C" long double asinl(long double); 
extern "C" long double atanl(long double); 
extern "C" long double atan2l(long double, long double); 
extern "C" long double cosl(long double); 
extern "C" long double sinl(long double); 
extern "C" long double tanl(long double); 
extern "C" long double acoshl(long double); 
extern "C" long double asinhl(long double); 
extern "C" long double atanhl(long double); 
extern "C" long double coshl(long double); 
extern "C" long double sinhl(long double); 
extern "C" long double tanhl(long double); 
extern "C" long double expl(long double); 
extern "C" long double exp2l(long double); 
extern "C" long double expm1l(long double); 
extern "C" long double logl(long double); 
extern "C" long double log10l(long double); 
extern "C" long double log2l(long double); 
extern "C" long double log1pl(long double); 
extern "C" long double logbl(long double); 
extern "C" long double modfl(long double, long double *); 
extern "C" long double ldexpl(long double, int); 
extern "C" long double frexpl(long double, int *); 
extern "C" int ilogbl(long double); 
extern "C" long double scalbnl(long double, int); 
extern "C" long double scalblnl(long double, long); 
extern "C" long double fabsl(long double); 
extern "C" long double cbrtl(long double); 
extern "C" long double hypotl(long double, long double); 
extern "C" long double powl(long double, long double); 
extern "C" long double sqrtl(long double); 
extern "C" long double erfl(long double); 
extern "C" long double erfcl(long double); 
extern "C" long double lgammal(long double); 
extern "C" long double tgammal(long double); 
extern "C" long double ceill(long double); 
extern "C" long double floorl(long double); 
extern "C" long double nearbyintl(long double); 
extern "C" long double rintl(long double); 
extern "C" long lrintl(long double); 
extern "C" long double roundl(long double); 
extern "C" long lroundl(long double); 



extern "C" long long llrintl(long double); 
extern "C" long long llroundl(long double); 


extern "C" long double truncl(long double); 
extern "C" long double fmodl(long double, long double); 
extern "C" long double remainderl(long double, long double); 
extern "C" long double remquol(long double, long double, int *); 
extern "C" long double copysignl(long double, long double); 
extern "C" long double nanl(const char *); 
extern "C" long double nextafterl(long double, long double); 
extern "C" double nexttoward(double, long double); 
extern "C" float nexttowardf(float, long double); 
extern "C" long double nexttowardl(long double, long double); 
extern "C" long double fdiml(long double, long double); 
extern "C" long double fmaxl(long double, long double); 
extern "C" long double fminl(long double, long double); 
extern "C" long double fmal(long double, long double, long double); 
# 507 "/usr/include/architecture/i386/math.h" 3
extern "C" double __inf(); 
extern "C" float __inff(); 
extern "C" long double __infl(); 
extern "C" float __nan(); 


extern "C" double j0(double); 

extern "C" double j1(double); 

extern "C" double jn(int, double); 

extern "C" double y0(double); 

extern "C" double y1(double); 

extern "C" double yn(int, double); 

extern "C" double scalb(double, double); 
# 543 "/usr/include/architecture/i386/math.h" 3
extern "C" { extern int signgam; } 
# 557 "/usr/include/architecture/i386/math.h" 3
extern "C" long rinttol(double); 

extern "C" long roundtol(double); 
# 597 "/usr/include/architecture/i386/math.h" 3
extern "C" int finite(double); 

extern "C" double gamma(double); 
# 610
extern "C" double significand(double); 




extern "C" double drem(double, double); 
# 83 "/usr/include/sys/wait.h" 3
typedef 
# 79
enum { 
P_ALL, 
P_PID, 
P_PGID
} idtype_t; 
# 90
typedef __darwin_pid_t pid_t; 




typedef __darwin_id_t id_t; 
# 39 "/usr/include/i386/signal.h" 3
typedef int sig_atomic_t; 
# 43 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_i386_thread_state { 

unsigned __eax; 
unsigned __ebx; 
unsigned __ecx; 
unsigned __edx; 
unsigned __edi; 
unsigned __esi; 
unsigned __ebp; 
unsigned __esp; 
unsigned __ss; 
unsigned __eflags; 
unsigned __eip; 
unsigned __cs; 
unsigned __ds; 
unsigned __es; 
unsigned __fs; 
unsigned __gs; 
}; 
# 89 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_fp_control { 

unsigned short __invalid:1; 
unsigned short __denorm:1; 
unsigned short __zdiv:1; 
unsigned short __ovrfl:1; 
unsigned short __undfl:1; 
unsigned short __precis:1; 
unsigned short:2; 
unsigned short __pc:2; 
# 104
unsigned short __rc:2; 
# 111
unsigned short:1; 
unsigned short:3; 
}; 
typedef __darwin_fp_control __darwin_fp_control_t; 
# 147 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_fp_status { 

unsigned short __invalid:1; 
unsigned short __denorm:1; 
unsigned short __zdiv:1; 
unsigned short __ovrfl:1; 
unsigned short __undfl:1; 
unsigned short __precis:1; 
unsigned short __stkflt:1; 
unsigned short __errsumm:1; 
unsigned short __c0:1; 
unsigned short __c1:1; 
unsigned short __c2:1; 
unsigned short __tos:3; 
unsigned short __c3:1; 
unsigned short __busy:1; 
}; 
typedef __darwin_fp_status __darwin_fp_status_t; 
# 191 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_mmst_reg { 

char __mmst_reg[10]; 
char __mmst_rsrv[6]; 
}; 
# 210 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_xmm_reg { 

char __xmm_reg[16]; 
}; 
# 232 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_i386_float_state { 

int __fpu_reserved[2]; 
__darwin_fp_control __fpu_fcw; 
__darwin_fp_status __fpu_fsw; 
__uint8_t __fpu_ftw; 
__uint8_t __fpu_rsrv1; 
__uint16_t __fpu_fop; 
__uint32_t __fpu_ip; 
__uint16_t __fpu_cs; 
__uint16_t __fpu_rsrv2; 
__uint32_t __fpu_dp; 
__uint16_t __fpu_ds; 
__uint16_t __fpu_rsrv3; 
__uint32_t __fpu_mxcsr; 
__uint32_t __fpu_mxcsrmask; 
__darwin_mmst_reg __fpu_stmm0; 
__darwin_mmst_reg __fpu_stmm1; 
__darwin_mmst_reg __fpu_stmm2; 
__darwin_mmst_reg __fpu_stmm3; 
__darwin_mmst_reg __fpu_stmm4; 
__darwin_mmst_reg __fpu_stmm5; 
__darwin_mmst_reg __fpu_stmm6; 
__darwin_mmst_reg __fpu_stmm7; 
__darwin_xmm_reg __fpu_xmm0; 
__darwin_xmm_reg __fpu_xmm1; 
__darwin_xmm_reg __fpu_xmm2; 
__darwin_xmm_reg __fpu_xmm3; 
__darwin_xmm_reg __fpu_xmm4; 
__darwin_xmm_reg __fpu_xmm5; 
__darwin_xmm_reg __fpu_xmm6; 
__darwin_xmm_reg __fpu_xmm7; 
char __fpu_rsrv4[(14 * 16)]; 
int __fpu_reserved1; 
}; 
# 308 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_i386_exception_state { 

unsigned __trapno; 
unsigned __err; 
unsigned __faultvaddr; 
}; 
# 326 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_x86_debug_state32 { 

unsigned __dr0; 
unsigned __dr1; 
unsigned __dr2; 
unsigned __dr3; 
unsigned __dr4; 
unsigned __dr5; 
unsigned __dr6; 
unsigned __dr7; 
}; 
# 358 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_x86_thread_state64 { 

__uint64_t __rax; 
__uint64_t __rbx; 
__uint64_t __rcx; 
__uint64_t __rdx; 
__uint64_t __rdi; 
__uint64_t __rsi; 
__uint64_t __rbp; 
__uint64_t __rsp; 
__uint64_t __r8; 
__uint64_t __r9; 
__uint64_t __r10; 
__uint64_t __r11; 
__uint64_t __r12; 
__uint64_t __r13; 
__uint64_t __r14; 
__uint64_t __r15; 
__uint64_t __rip; 
__uint64_t __rflags; 
__uint64_t __cs; 
__uint64_t __fs; 
__uint64_t __gs; 
}; 
# 413 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_x86_float_state64 { 

int __fpu_reserved[2]; 
__darwin_fp_control __fpu_fcw; 
__darwin_fp_status __fpu_fsw; 
__uint8_t __fpu_ftw; 
__uint8_t __fpu_rsrv1; 
__uint16_t __fpu_fop; 


__uint32_t __fpu_ip; 
__uint16_t __fpu_cs; 

__uint16_t __fpu_rsrv2; 


__uint32_t __fpu_dp; 
__uint16_t __fpu_ds; 

__uint16_t __fpu_rsrv3; 
__uint32_t __fpu_mxcsr; 
__uint32_t __fpu_mxcsrmask; 
__darwin_mmst_reg __fpu_stmm0; 
__darwin_mmst_reg __fpu_stmm1; 
__darwin_mmst_reg __fpu_stmm2; 
__darwin_mmst_reg __fpu_stmm3; 
__darwin_mmst_reg __fpu_stmm4; 
__darwin_mmst_reg __fpu_stmm5; 
__darwin_mmst_reg __fpu_stmm6; 
__darwin_mmst_reg __fpu_stmm7; 
__darwin_xmm_reg __fpu_xmm0; 
__darwin_xmm_reg __fpu_xmm1; 
__darwin_xmm_reg __fpu_xmm2; 
__darwin_xmm_reg __fpu_xmm3; 
__darwin_xmm_reg __fpu_xmm4; 
__darwin_xmm_reg __fpu_xmm5; 
__darwin_xmm_reg __fpu_xmm6; 
__darwin_xmm_reg __fpu_xmm7; 
__darwin_xmm_reg __fpu_xmm8; 
__darwin_xmm_reg __fpu_xmm9; 
__darwin_xmm_reg __fpu_xmm10; 
__darwin_xmm_reg __fpu_xmm11; 
__darwin_xmm_reg __fpu_xmm12; 
__darwin_xmm_reg __fpu_xmm13; 
__darwin_xmm_reg __fpu_xmm14; 
__darwin_xmm_reg __fpu_xmm15; 
char __fpu_rsrv4[(6 * 16)]; 
int __fpu_reserved1; 
}; 
# 517 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_x86_exception_state64 { 

unsigned __trapno; 
unsigned __err; 
__uint64_t __faultvaddr; 
}; 
# 535 "/usr/include/mach/i386/_structs.h" 3
struct __darwin_x86_debug_state64 { 

__uint64_t __dr0; 
__uint64_t __dr1; 
__uint64_t __dr2; 
__uint64_t __dr3; 
__uint64_t __dr4; 
__uint64_t __dr5; 
__uint64_t __dr6; 
__uint64_t __dr7; 
}; 
# 48 "/usr/include/i386/_structs.h" 3
struct __darwin_mcontext32 { 

__darwin_i386_exception_state __es; 
__darwin_i386_thread_state __ss; 
__darwin_i386_float_state __fs; 
}; 
# 68 "/usr/include/i386/_structs.h" 3
struct __darwin_mcontext64 { 

__darwin_x86_exception_state64 __es; 
__darwin_x86_thread_state64 __ss; 
__darwin_x86_float_state64 __fs; 
}; 
# 94 "/usr/include/i386/_structs.h" 3
typedef __darwin_mcontext32 *mcontext_t; 
# 75 "/usr/include/sys/_structs.h" 3
struct __darwin_sigaltstack { 

void *ss_sp; 
__darwin_size_t ss_size; 
int ss_flags; 
}; 
# 128 "/usr/include/sys/_structs.h" 3
struct __darwin_ucontext { 

int uc_onstack; 
__darwin_sigset_t uc_sigmask; 
__darwin_sigaltstack uc_stack; 
__darwin_ucontext *uc_link; 
__darwin_size_t uc_mcsize; 
__darwin_mcontext32 *uc_mcontext; 



}; 
# 218 "/usr/include/sys/_structs.h" 3
typedef __darwin_sigaltstack stack_t; 
# 227
typedef __darwin_ucontext ucontext_t; 
# 163 "/usr/include/sys/signal.h" 3
typedef __darwin_pthread_attr_t pthread_attr_t; 




typedef __darwin_sigset_t sigset_t; 
# 178 "/usr/include/sys/signal.h" 3
typedef __darwin_uid_t uid_t; 


union sigval { 

int sival_int; 
void *sival_ptr; 
}; 
# 191
struct sigevent { 
int sigev_notify; 
int sigev_signo; 
sigval sigev_value; 
void (*sigev_notify_function)(sigval); 
pthread_attr_t *sigev_notify_attributes; 
}; 
# 211
typedef 
# 200
struct __siginfo { 
int si_signo; 
int si_errno; 
int si_code; 
pid_t si_pid; 
uid_t si_uid; 
int si_status; 
void *si_addr; 
sigval si_value; 
long si_band; 
unsigned long __pad[7]; 
} siginfo_t; 
# 292 "/usr/include/sys/signal.h" 3
union __sigaction_u { 
void (*__sa_handler)(int); 
void (*__sa_sigaction)(int, __siginfo *, void *); 

}; 


struct __sigaction { 
::__sigaction_u __sigaction_u; 
void (*sa_tramp)(void *, int, int, siginfo_t *, void *); 
sigset_t sa_mask; 
int sa_flags; 
}; 




struct sigaction { 
::__sigaction_u __sigaction_u; 
sigset_t sa_mask; 
int sa_flags; 
}; 
# 354 "/usr/include/sys/signal.h" 3
typedef void (*sig_t)(int); 
# 371
struct sigvec { 
void (*sv_handler)(int); 
int sv_mask; 
int sv_flags; 
}; 
# 390 "/usr/include/sys/signal.h" 3
struct sigstack { 
char *ss_sp; 
int ss_onstack; 
}; 
# 413 "/usr/include/sys/signal.h" 3
extern "C" void (*signal(int, void (*)(int)))(int); 
# 100 "/usr/include/sys/_structs.h" 3
struct timeval { 

__darwin_time_t tv_sec; 
__darwin_suseconds_t tv_usec; 
}; 
# 88 "/usr/include/sys/resource.h" 3
typedef __uint64_t rlim_t; 
# 142
struct rusage { 
timeval ru_utime; 
timeval ru_stime; 
# 153
long ru_maxrss; 

long ru_ixrss; 
long ru_idrss; 
long ru_isrss; 
long ru_minflt; 
long ru_majflt; 
long ru_nswap; 
long ru_inblock; 
long ru_oublock; 
long ru_msgsnd; 
long ru_msgrcv; 
long ru_nsignals; 
long ru_nvcsw; 
long ru_nivcsw; 


}; 
# 213 "/usr/include/sys/resource.h" 3
struct rlimit { 
rlim_t rlim_cur; 
rlim_t rlim_max; 
}; 
# 236 "/usr/include/sys/resource.h" 3
extern "C" int getpriority(int, id_t); 

extern "C" int getiopolicy_np(int, int); 

extern "C" int getrlimit(int, rlimit *) __asm__("_getrlimit$UNIX2003"); 
extern "C" int getrusage(int, rusage *); 
extern "C" int setpriority(int, id_t, int); 

extern "C" int setiopolicy_np(int, int, int); 

extern "C" int setrlimit(int, const rlimit *) __asm__("_setrlimit$UNIX2003"); 
# 46 "/usr/include/libkern/i386/_OSByteOrder.h" 3
static inline __uint16_t _OSSwapInt16(__uint16_t 
_data) 

{ 
return (_data << 8) | (_data >> 8); 
} 



static inline __uint32_t _OSSwapInt32(__uint32_t 
_data) 

{ 
__asm__("bswap   %0" : "+r" (_data)); 
return _data; 
} 




static inline __uint64_t _OSSwapInt64(__uint64_t 
_data) 

{ 
__asm__("bswap   %%eax\n\tbswap   %%edx\n\txchgl   %%eax, %%edx" : "+A" (_data)); 



return _data; 
} 
# 201 "/usr/include/sys/wait.h" 3
union wait { 
int w_status; 



struct { 

unsigned w_Termsig:7; 
unsigned w_Coredump:1; 
unsigned w_Retcode:8; 
unsigned w_Filler:16; 
# 219
} w_T; 
# 225
struct { 

unsigned w_Stopval:8; 
unsigned w_Stopsig:8; 
unsigned w_Filler:16; 
# 236
} w_S; 
}; 
# 255 "/usr/include/sys/wait.h" 3
extern "C" pid_t wait(int *) __asm__("_wait$UNIX2003"); 
extern "C" pid_t waitpid(pid_t, int *, int) __asm__("_waitpid$UNIX2003"); 

extern "C" int waitid(idtype_t, id_t, siginfo_t *, int) __asm__("_waitid$UNIX2003"); 


extern "C" pid_t wait3(int *, int, rusage *); 
extern "C" pid_t wait4(pid_t, int *, int, rusage *); 
# 36 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t); 
# 81 "/usr/include/stdlib.h" 3
typedef __darwin_ct_rune_t ct_rune_t; 




typedef __darwin_rune_t rune_t; 
# 100 "/usr/include/stdlib.h" 3
typedef 
# 97
struct div_t { 
int quot; 
int rem; 
} div_t; 




typedef 
# 102
struct ldiv_t { 
long quot; 
long rem; 
} ldiv_t; 
# 111
typedef 
# 108
struct lldiv_t { 
long long quot; 
long long rem; 
} lldiv_t; 
# 134 "/usr/include/stdlib.h" 3
extern int __mb_cur_max; 
# 145 "/usr/include/stdlib.h" 3
extern "C" void abort() __attribute__((__noreturn__)); 
extern "C"  __attribute__((__weak__)) int abs(int) __attribute__((__const__)); 
extern "C" int atexit(void (*)(void)); 
extern "C" double atof(const char *); 
extern "C" int atoi(const char *); 
extern "C" long atol(const char *); 


extern "C" long long atoll(const char *); 

extern "C" void *bsearch(const void *, const void *, size_t, size_t, int (*)(const void *, const void *)); 

extern "C" void *calloc(size_t, size_t); 
extern "C" div_t div(int, int) __attribute__((__const__)); 
extern "C" void exit(int) __attribute__((__noreturn__)); 
extern "C" void free(void *); 
extern "C" char *getenv(const char *); 
extern "C"  __attribute__((__weak__)) long labs(long) __attribute__((__const__)); 
extern "C" ldiv_t ldiv(long, long) __attribute__((__const__)); 


extern "C"  __attribute__((__weak__)) long long llabs(long long); 
extern "C" lldiv_t lldiv(long long, long long); 

extern "C" void *malloc(size_t); 
extern "C" int mblen(const char *, size_t); 
extern "C" size_t mbstowcs(wchar_t *, const char *, size_t); 
extern "C" int mbtowc(wchar_t *, const char *, size_t); 
extern "C" void qsort(void *, size_t, size_t, int (*)(const void *, const void *)); 

extern "C" int rand(); 
extern "C" void *realloc(void *, size_t); 
extern "C" void srand(unsigned); 
extern "C" double strtod(const char *, char **) __asm__("_strtod$UNIX2003"); 
extern "C" float strtof(const char *, char **) __asm__("_strtof$UNIX2003"); 
extern "C" long strtol(const char *, char **, int); 

extern "C" long double strtold(const char *, char **); 


extern "C" long long strtoll(const char *, char **, int); 


extern "C" unsigned long strtoul(const char *, char **, int); 


extern "C" unsigned long long strtoull(const char *, char **, int); 

extern "C" int system(const char *) __asm__("_system$UNIX2003"); 
extern "C" size_t wcstombs(char *, const wchar_t *, size_t); 
extern "C" int wctomb(char *, wchar_t); 


extern "C" void _Exit(int) __attribute__((__noreturn__)); 
extern "C" long a64l(const char *); 
extern "C" double drand48(); 
extern "C" char *ecvt(double, int, int *, int *); 
extern "C" double erand48(unsigned short [3]); 
extern "C" char *fcvt(double, int, int *, int *); 
extern "C" char *gcvt(double, int, char *); 
extern "C" int getsubopt(char **, char *const *, char **); 
extern "C" int grantpt(int); 

extern "C" char *initstate(unsigned, char *, size_t); 



extern "C" long jrand48(unsigned short [3]); 
extern "C" char *l64a(long); 
extern "C" void lcong48(unsigned short [7]); 
extern "C" long lrand48(); 
extern "C" char *mktemp(char *); 
extern "C" int mkstemp(char *); 
extern "C" long mrand48(); 
extern "C" long nrand48(unsigned short [3]); 
extern "C" int posix_openpt(int); 
extern "C" char *ptsname(int); 
extern "C" int putenv(char *) __asm__("_putenv$UNIX2003"); 
extern "C" long random(); 
extern "C" int rand_r(unsigned *); 

extern "C" char *realpath(const char *, char *) __asm__("_realpath$DARWIN_EXTSN"); 




extern "C" unsigned short *seed48(unsigned short [3]); 
extern "C" int setenv(const char *, const char *, int) __asm__("_setenv$UNIX2003"); 

extern "C" void setkey(const char *) __asm__("_setkey$UNIX2003"); 



extern "C" char *setstate(const char *); 
extern "C" void srand48(long); 

extern "C" void srandom(unsigned); 



extern "C" int unlockpt(int); 

extern "C" int unsetenv(const char *) __asm__("_unsetenv$UNIX2003"); 
# 78 "/usr/include/i386/types.h" 3
extern "C" { typedef signed char int8_t; }

extern "C" { typedef unsigned char u_int8_t; }


extern "C" { typedef short int16_t; }

extern "C" { typedef unsigned short u_int16_t; }


extern "C" { typedef int int32_t; }

extern "C" { typedef unsigned u_int32_t; }


extern "C" { typedef long long int64_t; }

extern "C" { typedef unsigned long long u_int64_t; }




extern "C" { typedef int32_t register_t; }




extern "C" { typedef __darwin_intptr_t intptr_t; }



extern "C" { typedef unsigned long uintptr_t; }




extern "C" { typedef u_int64_t user_addr_t; }
extern "C" { typedef u_int64_t user_size_t; }
extern "C" { typedef int64_t user_ssize_t; }
extern "C" { typedef int64_t user_long_t; }
extern "C" { typedef u_int64_t user_ulong_t; }
extern "C" { typedef int64_t user_time_t; }
# 125
extern "C" { typedef u_int64_t syscall_arg_t; }
# 257 "/usr/include/stdlib.h" 3
extern "C" { typedef __darwin_dev_t dev_t; }




extern "C" { typedef __darwin_mode_t mode_t; }




extern "C" u_int32_t arc4random(); 
extern "C" void arc4random_addrandom(unsigned char *, int); 
extern "C" void arc4random_stir(); 


extern "C" char *cgetcap(char *, const char *, int); 
extern "C" int cgetclose(); 
extern "C" int cgetent(char **, char **, const char *); 
extern "C" int cgetfirst(char **, char **); 
extern "C" int cgetmatch(const char *, const char *); 
extern "C" int cgetnext(char **, char **); 
extern "C" int cgetnum(char *, const char *, long *); 
extern "C" int cgetset(const char *); 
extern "C" int cgetstr(char *, const char *, char **); 
extern "C" int cgetustr(char *, const char *, char **); 

extern "C" int daemon(int, int) __asm__("_daemon$1050") __attribute__((__deprecated__)); 
extern "C" char *devname(dev_t, mode_t); 
extern "C" char *devname_r(dev_t, mode_t, char *, int); 
extern "C" char *getbsize(int *, long *); 
extern "C" int getloadavg(double [], int); 

extern "C" const char *getprogname(); 

extern "C" int heapsort(void *, size_t, size_t, int (*)(const void *, const void *)); 

extern "C" int mergesort(void *, size_t, size_t, int (*)(const void *, const void *)); 

extern "C" void qsort_r(void *, size_t, size_t, void *, int (*)(void *, const void *, const void *)); 

extern "C" int radixsort(const unsigned char **, int, const unsigned char *, unsigned); 

extern "C" void setprogname(const char *); 
extern "C" int sradixsort(const unsigned char **, int, const unsigned char *, unsigned); 

extern "C" void sranddev(); 
extern "C" void srandomdev(); 
extern "C" void *reallocf(void *, size_t); 


extern "C" long long strtoq(const char *, char **, int); 

extern "C" unsigned long long strtouq(const char *, char **, int); 

extern "C" { extern char *suboptarg; } 
extern "C" void *valloc(size_t); 
# 64 "/usr/include/c++/4.0.0/i686-apple-darwin9/bits/c++config.h" 3
namespace __gnu_debug_def { }

namespace __gnu_debug { 

using namespace __gnu_debug_def;
}
# 75 "/usr/include/c++/4.0.0/bits/cpp_type_traits.h" 3
namespace __gnu_internal { 

typedef char __one; 
typedef char __two[2]; 

template<class _Tp> extern __one __test_type(int _Tp::*); 

template<class _Tp> extern __two &__test_type(...); 

}


namespace __gnu_cxx { 

template<class _Iterator, class _Container> class __normal_iterator; 

}

struct __true_type { }; 
struct __false_type { }; 

namespace std { 

template<bool __T0> 
struct __truth_type { 
typedef __false_type __type; }; 


template<> struct __truth_type< true>  { 
typedef __true_type __type; }; 



template<class _Sp, class _Tp> 
struct __traitor { 

enum __cuda___value { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))}; 
typedef typename __truth_type< (((bool)_Sp::__value) || ((bool)_Tp::__value))> ::__type __type; 
}; 


template<class , class > 
struct __are_same { 

enum __cuda___value { __value}; 
typedef __false_type __type; 
}; 

template<class _Tp> 
struct __are_same< _Tp, _Tp>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<class , bool __T1> 
struct __enable_if { 

}; 

template<class _Tp> 
struct __enable_if< _Tp, true>  { 

typedef _Tp __type; 
}; 


template<class _Tp> 
struct __is_void { 

enum __cuda___value { __value}; 
typedef __false_type __type; 
}; 


template<> struct __is_void< void>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 




template<class _Tp> 
struct __is_integer { 

enum __cuda___value { __value}; 
typedef __false_type __type; 
}; 
# 171
template<> struct __is_integer< bool>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< char>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< signed char>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned char>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 



template<> struct __is_integer< wchar_t>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 



template<> struct __is_integer< short>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned short>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< int>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< long>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned long>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< long long>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_integer< unsigned long long>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 




template<class _Tp> 
struct __is_floating { 

enum __cuda___value { __value}; 
typedef __false_type __type; 
}; 



template<> struct __is_floating< float>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_floating< double>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 


template<> struct __is_floating< long double>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 




template<class _Tp> 
struct __is_pointer { 

enum __cuda___value { __value}; 
typedef __false_type __type; 
}; 

template<class _Tp> 
struct __is_pointer< _Tp *>  { 

enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 




template<class _Tp> 
struct __is_normal_iterator { 

enum __cuda___value { __value}; 
typedef __false_type __type; 
}; 

template<class _Iterator, class _Container> 
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> >  { 


enum __cuda___value { __value = 1}; 
typedef __true_type __type; 
}; 




template<class _Tp> 
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 

}; 




template<class _Tp> 
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> >  { 

}; 




template<class _Tp> 
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 

}; 




template<class _Tp> 
struct __is_pod { 


enum __cuda___value { 
__value = (sizeof((__gnu_internal::__test_type< _Tp> (0))) != sizeof(__gnu_internal::__one))

}; 
}; 

}
# 81 "/usr/include/c++/4.0.0/cmath" 3
namespace std { 



template < typename _Tp > _Tp __cmath_power ( _Tp, unsigned int );


inline double abs(double __x) 
{ return __builtin_fabs(__x); } 


inline float abs(float __x) 
{ return __builtin_fabsf(__x); } 


inline long double abs(long double __x) 
{ return __builtin_fabsl(__x); } 

using ::acos;


inline float acos(float __x) 
{ return __builtin_acosf(__x); } 


inline long double acos(long double __x) 
{ return __builtin_acosl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    acos ( _Tp __x )
    {
      return __builtin_acos ( __x );
    }

using ::asin;


inline float asin(float __x) 
{ return __builtin_asinf(__x); } 


inline long double asin(long double __x) 
{ return __builtin_asinl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }

using ::atan;


inline float atan(float __x) 
{ return __builtin_atanf(__x); } 


inline long double atan(long double __x) 
{ return __builtin_atanl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }

using ::atan2;


inline float atan2(float __y, float __x) 
{ return __builtin_atan2f(__y, __x); } 


inline long double atan2(long double __y, long double __x) 
{ return __builtin_atan2l(__y, __x); } 

template < typename _Tp, typename _Up >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value
                                        && __is_integer < _Up > :: __value > :: __type
    atan2 ( _Tp __y, _Up __x )
    { return __builtin_atan2 ( __y, __x ); }

using ::ceil;


inline float ceil(float __x) 
{ return __builtin_ceilf(__x); } 


inline long double ceil(long double __x) 
{ return __builtin_ceill(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }

using ::cos;


inline float cos(float __x) 
{ return __builtin_cosf(__x); } 


inline long double cos(long double __x) 
{ return __builtin_cosl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }

using ::cosh;


inline float cosh(float __x) 
{ return __builtin_coshf(__x); } 


inline long double cosh(long double __x) 
{ return __builtin_coshl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }

using ::exp;


inline float exp(float __x) 
{ return __builtin_expf(__x); } 


inline long double exp(long double __x) 
{ return __builtin_expl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }

using ::fabs;


inline float fabs(float __x) 
{ return __builtin_fabsf(__x); } 


inline long double fabs(long double __x) 
{ return __builtin_fabsl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }

using ::floor;


inline float floor(float __x) 
{ return __builtin_floorf(__x); } 


inline long double floor(long double __x) 
{ return __builtin_floorl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }

using ::fmod;


inline float fmod(float __x, float __y) 
{ return __builtin_fmodf(__x, __y); } 


inline long double fmod(long double __x, long double __y) 
{ return __builtin_fmodl(__x, __y); } 

using ::frexp;


inline float frexp(float __x, int *__exp) 
{ return __builtin_frexpf(__x, __exp); } 


inline long double frexp(long double __x, int *__exp) 
{ return __builtin_frexpl(__x, __exp); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }

using ::ldexp;


inline float ldexp(float __x, int __exp) 
{ return __builtin_ldexpf(__x, __exp); } 


inline long double ldexp(long double __x, int __exp) 
{ return __builtin_ldexpl(__x, __exp); } 

template < typename _Tp >
  inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }

using ::log;


inline float log(float __x) 
{ return __builtin_logf(__x); } 


inline long double log(long double __x) 
{ return __builtin_logl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }

using ::log10;


inline float log10(float __x) 
{ return __builtin_log10f(__x); } 


inline long double log10(long double __x) 
{ return __builtin_log10l(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }

using ::modf;


inline float modf(float __x, float *__iptr) 
{ return __builtin_modff(__x, __iptr); } 


inline long double modf(long double __x, long double *__iptr) 
{ return __builtin_modfl(__x, __iptr); } 

template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }

using ::pow;


inline float pow(float __x, float __y) 
{ return __builtin_powf(__x, __y); } 


inline long double pow(long double __x, long double __y) 
{ return __builtin_powl(__x, __y); } 


inline double pow(double __x, int __i) 
{ return __builtin_powi(__x, __i); } 


inline float pow(float __x, int __n) 
{ return __builtin_powif(__x, __n); } 


inline long double pow(long double __x, int __n) 
{ return __builtin_powil(__x, __n); } 

using ::sin;


inline float sin(float __x) 
{ return __builtin_sinf(__x); } 


inline long double sin(long double __x) 
{ return __builtin_sinl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }

using ::sinh;


inline float sinh(float __x) 
{ return __builtin_sinhf(__x); } 


inline long double sinh(long double __x) 
{ return __builtin_sinhl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }

using ::sqrt;


inline float sqrt(float __x) 
{ return __builtin_sqrtf(__x); } 


inline long double sqrt(long double __x) 
{ return __builtin_sqrtl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }

using ::tan;


inline float tan(float __x) 
{ return __builtin_tanf(__x); } 


inline long double tan(long double __x) 
{ return __builtin_tanl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }

using ::tanh;


inline float tanh(float __x) 
{ return __builtin_tanhf(__x); } 


inline long double tanh(long double __x) 
{ return __builtin_tanhl(__x); } 

template < typename _Tp >
    inline typename __enable_if < double, __is_integer < _Tp > :: __value > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
}
# 444
namespace __gnu_cxx { 

template < typename _Tp >
    int
    __capture_fpclassify ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __fpclassifyf ( ( float ) ( __f ) ) : sizeof ( __f ) == sizeof ( double ) ? __fpclassifyd ( ( double ) ( __f ) ) : __fpclassify ( ( long double ) ( __f ) ) ); }

template < typename _Tp >
    int
    __capture_isfinite ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __inline_isfinitef ( ( float ) ( __f ) ) : sizeof ( __f ) == sizeof ( double ) ? __inline_isfinited ( ( double ) ( __f ) ) : __inline_isfinite ( ( long double ) ( __f ) ) ); }

template < typename _Tp >
    int
    __capture_isinf ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __inline_isinff ( ( float ) ( __f ) ) : sizeof ( __f ) == sizeof ( double ) ? __inline_isinfd ( ( double ) ( __f ) ) : __inline_isinf ( ( long double ) ( __f ) ) ); }

template < typename _Tp >
    int
    __capture_isnan ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __inline_isnanf ( ( float ) ( __f ) ) : sizeof ( __f ) == sizeof ( double ) ? __inline_isnand ( ( double ) ( __f ) ) : __inline_isnan ( ( long double ) ( __f ) ) ); }

template < typename _Tp >
    int
    __capture_isnormal ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __inline_isnormalf ( ( float ) ( __f ) ) : sizeof ( __f ) == sizeof ( double ) ? __inline_isnormald ( ( double ) ( __f ) ) : __inline_isnormal ( ( long double ) ( __f ) ) ); }

template < typename _Tp >
    int
    __capture_signbit ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __inline_signbitf ( ( float ) ( __f ) ) : sizeof ( __f ) == sizeof ( double ) ? __inline_signbitd ( ( double ) ( __f ) ) : __inline_signbit ( ( long double ) ( __f ) ) ); }

template < typename _Tp >
    int
    __capture_isgreater ( _Tp __f1, _Tp __f2 )
    { return __builtin_isgreater ( ( __f1 ), ( __f2 ) ); }

template < typename _Tp >
     int
     __capture_isgreaterequal ( _Tp __f1, _Tp __f2 )
     { return __builtin_isgreaterequal ( ( __f1 ), ( __f2 ) ); }

template < typename _Tp >
     int
     __capture_isless ( _Tp __f1, _Tp __f2 ) { return __builtin_isless ( ( __f1 ), ( __f2 ) ); }

template < typename _Tp >
     int
     __capture_islessequal ( _Tp __f1, _Tp __f2 )
     { return __builtin_islessequal ( ( __f1 ), ( __f2 ) ); }

template < typename _Tp >
     int
     __capture_islessgreater ( _Tp __f1, _Tp __f2 )
     { return __builtin_islessgreater ( ( __f1 ), ( __f2 ) ); }

template < typename _Tp >
     int
     __capture_isunordered ( _Tp __f1, _Tp __f2 )
     { return __builtin_isunordered ( ( __f1 ), ( __f2 ) ); }
}
# 514 "/usr/include/c++/4.0.0/cmath" 3
namespace std { 

template < typename _Tp >
    int
    fpclassify ( _Tp __f ) { return __gnu_cxx :: __capture_fpclassify ( __f ); }

template < typename _Tp >
    int
    isfinite ( _Tp __f ) { return __gnu_cxx :: __capture_isfinite ( __f ); }

template < typename _Tp >
    int
    isinf ( _Tp __f ) { return __gnu_cxx :: __capture_isinf ( __f ); }

template < typename _Tp >
    int
    isnan ( _Tp __f ) { return __gnu_cxx :: __capture_isnan ( __f ); }

template < typename _Tp >
    int
    isnormal ( _Tp __f ) { return __gnu_cxx :: __capture_isnormal ( __f ); }

template < typename _Tp >
    int
    signbit ( _Tp __f ) { return __gnu_cxx :: __capture_signbit ( __f ); }

template < typename _Tp >
    int
    isgreater ( _Tp __f1, _Tp __f2 )
    { return __gnu_cxx :: __capture_isgreater ( __f1, __f2 ); }

template < typename _Tp >
    int
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    { return __gnu_cxx :: __capture_isgreaterequal ( __f1, __f2 ); }

template < typename _Tp >
    int
    isless ( _Tp __f1, _Tp __f2 )
    { return __gnu_cxx :: __capture_isless ( __f1, __f2 ); }

template < typename _Tp >
    int
    islessequal ( _Tp __f1, _Tp __f2 )
    { return __gnu_cxx :: __capture_islessequal ( __f1, __f2 ); }

template < typename _Tp >
    int
    islessgreater ( _Tp __f1, _Tp __f2 )
    { return __gnu_cxx :: __capture_islessgreater ( __f1, __f2 ); }

template < typename _Tp >
    int
    isunordered ( _Tp __f1, _Tp __f2 )
    { return __gnu_cxx :: __capture_isunordered ( __f1, __f2 ); }
}
# 35 "/usr/include/c++/4.0.0/bits/cmath.tcc" 3
namespace std { 

template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : 1;

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }
}
# 50 "/usr/include/c++/4.0.0/cstddef" 3
namespace std { 

using ::ptrdiff_t;
using ::size_t;
}
# 90 "/usr/include/c++/4.0.0/cstdlib" 3
namespace std { 


using ::div_t;
using ::ldiv_t;

using ::abort;
using ::abs;
using ::atexit;
using ::atof;
using ::atoi;
using ::atol;
using ::bsearch;
using ::calloc;
using ::div;
using ::exit;
using ::free;
using ::getenv;
using ::labs;
using ::ldiv;
using ::malloc;

using ::mblen;
using ::mbstowcs;
using ::mbtowc;

using ::qsort;
using ::rand;
using ::realloc;
using ::srand;
using ::strtod;
using ::strtol;
using ::strtoul;
using ::system;

using ::wcstombs;
using ::wctomb;



inline long abs(long __i) { return labs(__i); } 


inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 143 "/usr/include/c++/4.0.0/cstdlib" 3
}
# 156 "/usr/include/c++/4.0.0/cstdlib" 3
namespace __gnu_cxx { 


using ::lldiv_t;
# 165
using ::_Exit;



inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); } 


inline long long llabs(long long __x) { return (__x >= (0)) ? __x : (-__x); } 



inline lldiv_t div(long long __n, long long __d) 
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; } 


inline lldiv_t lldiv(long long __n, long long __d) 
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; } 
# 192 "/usr/include/c++/4.0.0/cstdlib" 3
using ::atoll;
using ::strtoll;
using ::strtoull;

using ::strtof;
using ::strtold;
}

namespace std { 


using __gnu_cxx::lldiv_t;

using __gnu_cxx::_Exit;
using __gnu_cxx::abs;
using __gnu_cxx::llabs;

using __gnu_cxx::div;
using __gnu_cxx::lldiv;

using __gnu_cxx::atoll;
using __gnu_cxx::strtof;
using __gnu_cxx::strtoll;
using __gnu_cxx::strtoull;
using __gnu_cxx::strtold;
}
# 434 "/usr/local/cuda/bin/../include/math_functions.h"
extern  __attribute__((__weak__)) int __signbitl(long double); 

extern  __attribute__((__weak__)) int __isinfl(long double); 

extern  __attribute__((__weak__)) int __isnanl(long double); 




extern  __attribute__((__weak__)) int __isfinite(long double); 
# 473 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx { 

extern inline long long abs(long long); 
}

namespace std { 

template<class T> extern inline T __pow_helper(T, int); 
template<class T> extern inline T __cmath_power(T, unsigned); 
}

using std::abs;
using std::fabs;
using std::ceil;
using std::floor;
using std::sqrt;
using std::pow;
using std::log;
using std::log10;
using std::fmod;
using std::modf;
using std::exp;
using std::frexp;
using std::ldexp;
using std::asin;
using std::sin;
using std::sinh;
using std::acos;
using std::cos;
using std::cosh;
using std::atan;
using std::atan2;
using std::tan;
using std::tanh;
# 560 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std { 


extern inline long abs(long); 
extern inline float abs(float); 
extern inline double abs(double); 
extern inline float fabs(float); 
extern inline float ceil(float); 
extern inline float floor(float); 
extern inline float sqrt(float); 
extern inline float pow(float, float); 
extern inline float pow(float, int); 
extern inline double pow(double, int); 
extern inline float log(float); 
extern inline float log10(float); 
extern inline float fmod(float, float); 
extern inline float modf(float, float *); 
extern inline float exp(float); 
extern inline float frexp(float, int *); 
extern inline float ldexp(float, int); 
extern inline float asin(float); 
extern inline float sin(float); 
extern inline float sinh(float); 
extern inline float acos(float); 
extern inline float cos(float); 
extern inline float cosh(float); 
extern inline float atan(float); 
extern inline float atan2(float, float); 
extern inline float tan(float); 
extern inline float tanh(float); 


}


static inline float logb(float a) 
{ 
return logbf(a); 
} 

static inline int ilogb(float a) 
{ 
return ilogbf(a); 
} 

static inline float scalbn(float a, int b) 
{ 
return scalbnf(a, b); 
} 

static inline float scalbln(float a, long b) 
{ 
return scalblnf(a, b); 
} 

static inline float exp2(float a) 
{ 
return exp2f(a); 
} 

static inline float exp10(float a) 
{ 
return exp10f(a); 
} 

static inline float expm1(float a) 
{ 
return expm1f(a); 
} 

static inline float log2(float a) 
{ 
return log2f(a); 
} 

static inline float log1p(float a) 
{ 
return log1pf(a); 
} 

static inline float rsqrt(float a) 
{ 
return rsqrtf(a); 
} 

static inline float acosh(float a) 
{ 
return acoshf(a); 
} 

static inline float asinh(float a) 
{ 
return asinhf(a); 
} 

static inline float atanh(float a) 
{ 
return atanhf(a); 
} 

static inline float hypot(float a, float b) 
{ 
return hypotf(a, b); 
} 

static inline float cbrt(float a) 
{ 
return cbrtf(a); 
} 

static inline void sincos(float a, float *sptr, float *cptr) 
{ 
sincosf(a, sptr, cptr); 
} 

static inline float erf(float a) 
{ 
return erff(a); 
} 

static inline float erfinv(float a) 
{ 
return erfinvf(a); 
} 

static inline float erfc(float a) 
{ 
return erfcf(a); 
} 

static inline float erfcinv(float a) 
{ 
return erfcinvf(a); 
} 

static inline float lgamma(float a) 
{ 
return lgammaf(a); 
} 

static inline float tgamma(float a) 
{ 
return tgammaf(a); 
} 

static inline float copysign(float a, float b) 
{ 
return copysignf(a, b); 
} 

static inline double copysign(double a, float b) 
{ 
return copysign(a, (double)b); 
} 

static inline float copysign(float a, double b) 
{ 
return copysignf(a, (float)b); 
} 

static inline float nextafter(float a, float b) 
{ 
return nextafterf(a, b); 
} 

static inline float remainder(float a, float b) 
{ 
return remainderf(a, b); 
} 

static inline float remquo(float a, float b, int *quo) 
{ 
return remquof(a, b, quo); 
} 

static inline float round(float a) 
{ 
return roundf(a); 
} 

static inline long lround(float a) 
{ 
return lroundf(a); 
} 

static inline long long llround(float a) 
{ 
return llroundf(a); 
} 

static inline float trunc(float a) 
{ 
return truncf(a); 
} 

static inline float rint(float a) 
{ 
return rintf(a); 
} 

static inline long lrint(float a) 
{ 
return lrintf(a); 
} 

static inline long long llrint(float a) 
{ 
return llrintf(a); 
} 

static inline float nearbyint(float a) 
{ 
return nearbyintf(a); 
} 

static inline float fdim(float a, float b) 
{ 
return fdimf(a, b); 
} 

static inline float fma(float a, float b, float c) 
{ 
return fmaf(a, b, c); 
} 

static inline unsigned min(unsigned a, unsigned b) 
{ 
return umin(a, b); 
} 

static inline unsigned min(int a, unsigned b) 
{ 
return umin((unsigned)a, b); 
} 

static inline unsigned min(unsigned a, int b) 
{ 
return umin(a, (unsigned)b); 
} 

static inline float min(float a, float b) 
{ 
return fminf(a, b); 
} 

static inline double min(double a, double b) 
{ 
return fmin(a, b); 
} 

static inline double min(float a, double b) 
{ 
return fmin((double)a, b); 
} 

static inline double min(double a, float b) 
{ 
return fmin(a, (double)b); 
} 

static inline unsigned max(unsigned a, unsigned b) 
{ 
return umax(a, b); 
} 

static inline unsigned max(int a, unsigned b) 
{ 
return umax((unsigned)a, b); 
} 

static inline unsigned max(unsigned a, int b) 
{ 
return umax(a, (unsigned)b); 
} 

static inline float max(float a, float b) 
{ 
return fmaxf(a, b); 
} 

static inline double max(double a, double b) 
{ 
return fmax(a, b); 
} 

static inline double max(float a, double b) 
{ 
return fmax((double)a, b); 
} 

static inline double max(double a, float b) 
{ 
return fmax(a, (double)b); 
} 
# 59 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
struct texture : public textureReference { 

texture(int norm = 0, cudaTextureFilterMode 
fMode = cudaFilterModePoint, cudaTextureAddressMode 
aMode = cudaAddressModeClamp) 
{ 
(this->normalized) = norm; 
(this->filterMode) = fMode; 
((this->addressMode)[0]) = aMode; 
((this->addressMode)[1]) = aMode; 
((this->addressMode)[2]) = aMode; 
(this->channelDesc) = cudaCreateChannelDesc< T> (); 
} 

texture(int norm, cudaTextureFilterMode 
fMode, cudaTextureAddressMode 
aMode, cudaChannelFormatDesc 
desc) 
{ 
(this->normalized) = norm; 
(this->filterMode) = fMode; 
((this->addressMode)[0]) = aMode; 
((this->addressMode)[1]) = aMode; 
((this->addressMode)[2]) = aMode; 
(this->channelDesc) = desc; 
} 
}; 
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
# 53 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
#if 0
extern "C" { extern const uint3 
# 53
threadIdx; } 
#endif
# 55 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
#if 0
extern "C" { extern const uint3 
# 55
blockIdx; } 
#endif
# 57 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
#if 0
extern "C" { extern const dim3 
# 57
blockDim; } 
#endif
# 59 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
#if 0
extern "C" { extern const dim3 
# 59
gridDim; } 
#endif
# 61 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
#if 0
extern "C" { extern const int 
# 61
warpSize; } 
#endif
# 98 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t 
cudaSetupArgument(T 
arg, size_t 
offset) 

{ 
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
} 
# 120
static inline cudaError_t cudaMemcpyToSymbol(char *
symbol, const void *
src, size_t 
count, size_t 
offset = (0), cudaMemcpyKind 
kind = cudaMemcpyHostToDevice) 

{ 
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind); 
} 

template<class T> inline cudaError_t 
cudaMemcpyToSymbol(const T &
symbol, const void *
src, size_t 
count, size_t 
offset = (0), cudaMemcpyKind 
kind = cudaMemcpyHostToDevice) 

{ 
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind); 
} 

static inline cudaError_t cudaMemcpyToSymbolAsync(char *
symbol, const void *
src, size_t 
count, size_t 
offset, cudaMemcpyKind 
kind, cudaStream_t 
stream) 

{ 
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream); 
} 

template<class T> inline cudaError_t 
cudaMemcpyToSymbolAsync(const T &
symbol, const void *
src, size_t 
count, size_t 
offset, cudaMemcpyKind 
kind, cudaStream_t 
stream) 

{ 
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream); 
} 
# 174
static inline cudaError_t cudaMemcpyFromSymbol(void *
dst, char *
symbol, size_t 
count, size_t 
offset = (0), cudaMemcpyKind 
kind = cudaMemcpyDeviceToHost) 

{ 
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind); 
} 

template<class T> inline cudaError_t 
cudaMemcpyFromSymbol(void *
dst, const T &
symbol, size_t 
count, size_t 
offset = (0), cudaMemcpyKind 
kind = cudaMemcpyDeviceToHost) 

{ 
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind); 
} 

static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
dst, char *
symbol, size_t 
count, size_t 
offset, cudaMemcpyKind 
kind, cudaStream_t 
stream) 

{ 
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream); 
} 

template<class T> inline cudaError_t 
cudaMemcpyFromSymbolAsync(void *
dst, const T &
symbol, size_t 
count, size_t 
offset, cudaMemcpyKind 
kind, cudaStream_t 
stream) 

{ 
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream); 
} 

static inline cudaError_t cudaGetSymbolAddress(void **
devPtr, char *
symbol) 

{ 
return cudaGetSymbolAddress(devPtr, (const char *)symbol); 
} 
# 252
template<class T> inline cudaError_t 
cudaGetSymbolAddress(void **
devPtr, const T &
symbol) 

{ 
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol)); 
} 
# 267
static inline cudaError_t cudaGetSymbolSize(size_t *
size, char *
symbol) 

{ 
return cudaGetSymbolSize(size, (const char *)symbol); 
} 
# 296
template<class T> inline cudaError_t 
cudaGetSymbolSize(size_t *
size, const T &
symbol) 

{ 
return cudaGetSymbolSize(size, (const char *)(&symbol)); 
} 
# 352
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode>  &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t 
size = (((2147483647) * 2U) + 1U)) 

{ 
return cudaBindTexture(offset, &tex, devPtr, (&desc), size); 
} 
# 396
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode>  &
tex, const void *
devPtr, size_t 
size = (((2147483647) * 2U) + 1U)) 

{ 
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
} 
# 451
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
cudaBindTexture2D(size_t *
offset, const texture< T, dim, readMode>  &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t 
width, size_t 
height, size_t 
pitch) 

{ 
return cudaBindTexture2D(offset, &tex, devPtr, (&desc), width, height, pitch); 
} 
# 493
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
cudaBindTextureToArray(const texture< T, dim, readMode>  &
tex, const cudaArray *
array, const cudaChannelFormatDesc &
desc) 

{ 
return cudaBindTextureToArray(&tex, array, (&desc)); 
} 
# 530
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
cudaBindTextureToArray(const texture< T, dim, readMode>  &
tex, const cudaArray *
array) 

{ 
auto cudaChannelFormatDesc desc; 
auto cudaError_t err = cudaGetChannelDesc(&desc, array); 

return (err == (cudaSuccess)) ? (cudaBindTextureToArray(tex, array, desc)) : err; 
} 
# 568
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
cudaUnbindTexture(const texture< T, dim, readMode>  &
tex) 

{ 
return cudaUnbindTexture(&tex); 
} 
# 607
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
cudaGetTextureAlignmentOffset(size_t *
offset, const texture< T, dim, readMode>  &
tex) 

{ 
return cudaGetTextureAlignmentOffset(offset, &tex); 
} 
# 649
template<class T> inline cudaError_t 
cudaLaunch(T *
entry) 

{ 
return cudaLaunch((const char *)entry); 
} 
# 70 "/usr/include/stdio.h" 3
typedef __darwin_va_list va_list; 




typedef __darwin_off_t off_t; 
# 87 "/usr/include/stdio.h" 3
typedef __darwin_off_t fpos_t; 
# 98
struct __sbuf { 
unsigned char *_base; 
int _size; 
}; 


struct __sFILEX; 
# 163
typedef 
# 132
struct __sFILE { 
unsigned char *_p; 
int _r; 
int _w; 
short _flags; 
short _file; 
__sbuf _bf; 
int _lbfsize; 


void *_cookie; 
int (*_close)(void *); 
int (*_read)(void *, char *, int); 
fpos_t (*_seek)(void *, fpos_t, int); 
int (*_write)(void *, const char *, int); 


__sbuf _ub; 
__sFILEX *_extra; 
int _ur; 


unsigned char _ubuf[3]; 
unsigned char _nbuf[1]; 


__sbuf _lb; 


int _blksize; 
fpos_t _offset; 
} FILE; 



extern "C" { extern FILE *__stdinp; } 
extern "C" { extern FILE *__stdoutp; } 
extern "C" { extern FILE *__stderrp; } 
# 249 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *); 
extern "C" int fclose(FILE *); 
extern "C" int feof(FILE *); 
extern "C" int ferror(FILE *); 
extern "C" int fflush(FILE *); 
extern "C" int fgetc(FILE *); 
extern "C" int fgetpos(FILE *, fpos_t *); 
extern "C" char *fgets(char *, int, FILE *); 
extern "C" FILE *fopen(const char *, const char *); 
extern "C" int fprintf(FILE *, const char *, ...); 
extern "C" int fputc(int, FILE *); 
extern "C" int fputs(const char *, FILE *) __asm__("_fputs$UNIX2003"); 
extern "C" size_t fread(void *, size_t, size_t, FILE *); 
extern "C" FILE *freopen(const char *, const char *, FILE *) __asm__("_freopen$UNIX2003"); 

extern "C" int fscanf(FILE *, const char *, ...); 
extern "C" int fseek(FILE *, long, int); 
extern "C" int fsetpos(FILE *, const fpos_t *); 
extern "C" long ftell(FILE *); 
extern "C" size_t fwrite(const void *, size_t, size_t, FILE *) __asm__("_fwrite$UNIX2003"); 
extern "C" int getc(FILE *); 
extern "C" int getchar(); 
extern "C" char *gets(char *); 

extern "C" { extern const int sys_nerr; } 
extern "C" { extern const char *const sys_errlist[]; } 

extern "C" void perror(const char *); 
extern "C" int printf(const char *, ...); 
extern "C" int putc(int, FILE *); 
extern "C" int putchar(int); 
extern "C" int puts(const char *); 
extern "C" int remove(const char *); 
extern "C" int rename(const char *, const char *); 
extern "C" void rewind(FILE *); 
extern "C" int scanf(const char *, ...); 
extern "C" void setbuf(FILE *, char *); 
extern "C" int setvbuf(FILE *, char *, int, size_t); 
extern "C" int sprintf(char *, const char *, ...); 
extern "C" int sscanf(const char *, const char *, ...); 
extern "C" FILE *tmpfile(); 
extern "C" char *tmpnam(char *); 
extern "C" int ungetc(int, FILE *); 
extern "C" int vfprintf(FILE *, const char *, va_list); 
extern "C" int vprintf(const char *, va_list); 
extern "C" int vsprintf(char *, const char *, va_list); 

extern "C" int asprintf(char **, const char *, ...); 
extern "C" int vasprintf(char **, const char *, va_list); 
# 308
extern "C" char *ctermid(char *); 

extern "C" char *ctermid_r(char *); 

extern "C" FILE *fdopen(int, const char *); 

extern "C" char *fgetln(FILE *, size_t *); 

extern "C" int fileno(FILE *); 
extern "C" void flockfile(FILE *); 


extern "C" const char *fmtcheck(const char *, const char *); 
extern "C" int fpurge(FILE *); 

extern "C" int fseeko(FILE *, off_t, int); 
extern "C" off_t ftello(FILE *); 
extern "C" int ftrylockfile(FILE *); 
extern "C" void funlockfile(FILE *); 
extern "C" int getc_unlocked(FILE *); 
extern "C" int getchar_unlocked(); 

extern "C" int getw(FILE *); 

extern "C" int pclose(FILE *); 
extern "C" FILE *popen(const char *, const char *); 
extern "C" int putc_unlocked(int, FILE *); 
extern "C" int putchar_unlocked(int); 

extern "C" int putw(int, FILE *); 
extern "C" void setbuffer(FILE *, char *, int); 
extern "C" int setlinebuf(FILE *); 

extern "C" int snprintf(char *, size_t, const char *, ...); 
extern "C" char *tempnam(const char *, const char *) __asm__("_tempnam$UNIX2003"); 
extern "C" int vfscanf(FILE *, const char *, va_list); 
extern "C" int vscanf(const char *, va_list); 
extern "C" int vsnprintf(char *, size_t, const char *, va_list); 
extern "C" int vsscanf(const char *, const char *, va_list); 

extern "C" FILE *zopen(const char *, const char *, int); 
# 357
extern "C" FILE *funopen(const void *, int (*)(void *, char *, int), int (*)(void *, const char *, int), fpos_t (*)(void *, fpos_t, int), int (*)(void *)); 
# 372
extern "C" int __srget(FILE *); 
extern "C" int __svfscanf(FILE *, const char *, va_list); 
extern "C" int __swbuf(int, FILE *); 
# 383
static inline int __sputc(int _c, FILE *_p) { 
if (((--(_p->_w)) >= 0) || (((_p->_w) >= (_p->_lbfsize)) && (((char)_c) != ('\n')))) { 
return (*((_p->_p)++)) = _c; } else { 

return __swbuf(_c, _p); }  
} 
# 3 "14.cu"
void kernel__entry(int *a);
#if 0
 
# 3
{ 
auto int idx = (blockIdx.x * blockDim.x + threadIdx.x); 

auto int answer = idx; 
auto int i = 0; 

if (answer != 0) { 
while (answer != 1) { 
if ((answer % 2) == 0) { answer /= 2; } else 
{ answer = 3 * answer + 1; }  
i++; 
}  
}  

(a[idx]) = i; 
} 
#endif
# 20 "14.cu"
int main() { 
auto int dimx = (3907 * 256); 
auto int num_bytes = (dimx * sizeof(int)); 

auto int *d_a = (0); auto int *h_a = (0); 

h_a = (int *)malloc(num_bytes); 
cudaMalloc((void **)(&d_a), num_bytes); 

if (((0) == h_a) || ((0) == d_a)) { 
printf("can\'t allocate memory"); 
}  

cudaMemset(d_a, 0, num_bytes); 
cudaMemcpy(d_a, h_a, num_bytes, cudaMemcpyHostToDevice); 

auto cudaEvent_t start; auto cudaEvent_t stop; 
cudaEventCreate(&start); cudaEventCreate(&stop); 

cudaEventRecord(start, 0); 
cudaConfigureCall(3907, 256) ? ((void)0) : kernel__entry(d_a); 
cudaEventRecord(stop, 0); 

cudaEventSynchronize(stop); 
auto float et; 
cudaEventElapsedTime(&et, start, stop); 

cudaEventDestroy(start); cudaEventDestroy(stop); 

printf("kernel execution time: %8.6fms\n", et); 

cudaMemcpy(h_a, d_a, num_bytes, cudaMemcpyDeviceToHost); 

auto int max = 0; 
for (int i = 0; i < dimx; i++) { 

if ((h_a[i]) > max) { max = h_a[i]; }  
}  
printf("max is %d\n", max); 

free(h_a); 
cudaFree(d_a); 

return 0; 
} 

#include "14.cudafe1.stub.c"
