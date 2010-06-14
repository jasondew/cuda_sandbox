#include <stdio.h>

__global__ void kernel(int* a) {
  int idx = blockIdx.x * blockDim.x + threadIdx.x;

  int answer = idx;
  int i = 0;

  if (answer != 0) {
    while (answer != 1) {
      if (answer % 2 == 0) { answer /= 2; }
      else { answer = 3 * answer + 1; }
      i++;
    }
  }

  a[idx] = i;
}

int main() {
  int dimx = 3907*256;
  int num_bytes = dimx * sizeof(int);

  int *d_a = 0, *h_a = 0;

  h_a = (int*)malloc(num_bytes);
  cudaMalloc((void**)&d_a, num_bytes);

  if (0==h_a || 0==d_a) {
    printf("can't allocate memory");
  }

  cudaMemset(d_a, 0, num_bytes);
  cudaMemcpy(d_a, h_a, num_bytes, cudaMemcpyHostToDevice);

  cudaEvent_t start, stop;
  cudaEventCreate(&start); cudaEventCreate(&stop);

  cudaEventRecord(start, 0);
  kernel<<<3907, 256>>>(d_a);
  cudaEventRecord(stop, 0);

  cudaEventSynchronize(stop);
  float et;
  cudaEventElapsedTime(&et, start, stop);

  cudaEventDestroy(start); cudaEventDestroy(stop);

  printf("kernel execution time: %8.6fms\n", et);

  cudaMemcpy(h_a, d_a, num_bytes, cudaMemcpyDeviceToHost);

  int max = 0;
  for(int i=0; i<dimx; i++) {
//    printf("%d ", h_a[i]);
    if (h_a[i] > max) max = h_a[i];
  }
  printf("max is %d\n", max);

  free(h_a);
  cudaFree(d_a); 

  return 0;
} 
