#include <stdio.h>
#include <stdlib.h>
#include <cuda.h>
#include <utility.h>

#define DEFAULTMEMSIZE (1<<20)

#define MINBLOCKSIZE 1
#define MAXBLOCKSIZE 1024
#define MAXGRIDSIZE 65535

#define NUMREPEAT 100

__global__ void SimpleCopy(float *oData, float *iData)
{
    int xId = blockIdx.x * blockDim.x + threadIdx.x;
    oData[xId] = iData[xId];

}

int main()
{
    size_t memSize = DEFAULTMEMSIZE;
    size_t nWords = (memSize)/sizeof(float);
    
    //Initialize Host memory
    float *h_iData;
    float *h_oData;
    h_iData = new float[nWords];
    h_oData = new float[nWords];

    for(unsigned int i=0;i<nWords;i++)
    {
        h_iData[i]= (float) (i&(0xFF));
    }

    //initialize Device memory
    float *d_iData;
    float *d_oData;
    cudaMalloc((void **)&d_iData,memSize);
    CUDA_HANDLE_ERROR();
    cudaMalloc((void **)&d_oData,memSize);
    CUDA_HANDLE_ERROR();

    cudaMemcpy(d_iData, h_iData, memSize, cudaMemcpyHostToDevice);


    dim3 blockSize = 1;
    dim3 gridSize = 1;

    cudaEvent_t start, stop;
    float time,latency;

    cudaEventCreate(&start);
    cudaEventCreate(&stop);
    CUDA_HANDLE_ERROR();

    cudaEventRecord(start);
    
    for(int i=0;i<NUMREPEAT;i++)
    {
        SimpleCopy<<<gridSize,blockSize>>>(h_oData,h_iData);
    }

    cudaEventRecord(stop);
    cudaEventSynchronize(stop);
    cudaEventElapsedTime(&time,start,stop);

    latency = time/(1e3*(double)NUMREPEAT);

    printf("kernel lunch overhead is:%0.10f\n",latency);
}