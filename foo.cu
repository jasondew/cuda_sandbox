#include <stdio.h>

__global__ void kernel(int* a) {
  int idx = blockIdx.x * blockDim.x + threadIdx.x;
//  a[idx] = 7;
  a[idx] = blockIdx.x;
//  a[idx] = threadIdx.x;
}

int main() {

  int dc = -1;
  cudaGetDeviceCount(&dc);
  printf("%d device(s) present\n", dc);

  int cd = -1;
  cudaGetDevice(&cd);
  printf("device id used: %d\n", cd);

  int dimx = 32;
  int num_bytes = dimx * sizeof(int);

  int *d_a = 0, *h_a = 0;

  h_a = (int*)malloc(num_bytes);
  int rv = cudaMalloc((void**)&d_a, num_bytes);

  if (0==h_a) { printf("couldn't allocate host memory\n"); }
  if (0==d_a) { printf("couldn't allocate device memory\n"); }

  cudaMemset(d_a, 0, num_bytes);
  cudaMemcpy(d_a, h_a, num_bytes, cudaMemcpyHostToDevice);

  cudaEvent_t start, stop;
  cudaEventCreate(&start); cudaEventCreate(&stop);

  cudaEventRecord(start, 0);
  kernel<<<8, 8>>>(d_a);
  cudaEventRecord(stop, 0);

  cudaEventSynchronize(stop);
  float et;
  cudaEventElapsedTime(&et, start, stop);

  cudaEventDestroy(start); cudaEventDestroy(stop);

  printf("kernel execution time: %8.6fms\n", et);

  cudaMemcpy(h_a, d_a, num_bytes, cudaMemcpyDeviceToHost);

  for(int i=0; i<dimx; i++) {
    printf("%d ", h_a[i]);
  }
  printf("\n");

  free(h_a);
  cudaFree(d_a); 

  return 0;
} 
