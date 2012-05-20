#include <stdio.h>
#include <cuda.h>

#define DEFAULTMEMSIZE (1<<20)

#define MINBLOCKSIZE 1
#define MAXBLOCKSIZE 1024
#define MAXGRIDSIZE 65535


__global__ void SimpleCopy(float *oData, float *iData)
{
    int xId = blockIdx.x * blockDim.x + threadIdx.x;
    oData[xId] = iData[xId]++;
}


int main()
{
    size_t memSize = 32*DEFAULTMEMSIZE;
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
    //CUDA_HANDLE_ERROR();
    cudaMalloc((void **)&d_oData,memSize);
    //CUDA_HANDLE_ERROR();

    cudaMemcpy(d_iData, h_iData, memSize, cudaMemcpyHostToDevice);


    int blockSize = 256;
    int gridSize = nWords/blockSize;

    //cudaEvent_t start, stop;

}
