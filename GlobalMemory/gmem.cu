#include <stdio.h>
#include <cuda.h>
#include <repeat.h>
#include <utility.h>
#include <cuda_runtime.h>
#include <device_launch_parameters.h>

#define DEFAULTMEMSIZE (1<<20)
#define DEFAULTSTEPSIZE (1<<20)

#define MINBLOCKSIZE 1
#define MAXBLOCKSIZE 1024
#define MAXGRIDSIZE 65535

float *h_iData;
float *h_oData;
float *d_iData;
float *d_oData;

//***SimpleCopy_Start***
__global__ void SimpleCopy(float *oData, float *iData)
{
    int xId = blockIdx.x * blockDim.x + threadIdx.x;
    oData[xId] = iData[xId];

}
//***SimpleCopy_End***

//***StrideCopy_Start***
__global__ void StrideCopy(float *oData, float *iData,int stride)
{
    int xId = (blockIdx.x*blockDim.x+threadIdx.x)*stride;
    oData[xId] = iData[xId];
}
//***StrideCopy_End***

//***StrideAccess_Start***
__global__ void StrideAccess(float *oData, float *iData,int nWords)
{
    unsigned int xId=0;
    float sum=0;

#pragma unroll 1024
    for(int i=0;i<nWords;i++)
    {
        xId= iData[xId];
    }

    oData[0]=xId;	
}
//***StrideAccess_End***

void RunStrideAccess(int stride,int nWords, int memSize,int nRepeats)
{
    for(unsigned int i=0;i<nWords;i++)
    {
        h_oData[i]= (float)((i+stride)%nWords);
    }

    cudaMemcpy(d_iData, h_oData, memSize, cudaMemcpyHostToDevice);

    int blockSize = 256;
    int gridSize = nWords/blockSize;

    cudaEvent_t start, stop;
    float time,latency;

    cudaEventCreate(&start);
    cudaEventCreate(&stop);
    CUDA_HANDLE_ERROR();

    cudaEventRecord(start,0);

    //  for(int i=0;i<nRepeats;i++)
    //{
    StrideAccess<<<1,1>>>(d_oData,d_iData,nWords);
    // }

    cudaEventRecord(stop,0);
    cudaEventSynchronize(stop);

    cudaMemcpy(h_iData, d_oData, memSize, cudaMemcpyDeviceToHost);

    time=0.0f;
    cudaEventElapsedTime(&time,start,stop);

    time /= 1.e3;
    latency = (time*1.0)/(float)nWords;
    float clock = latency/7.e-11;


    printf("data:%f, time:%f, stride:%d, latency:%0.10f, clock:%f\n",h_iData[0],time,stride,latency,clock);


}
void TestLatency()
{
    size_t memSize = 128*DEFAULTMEMSIZE;
    size_t nWords = (memSize)/sizeof(float);
    int nRepeats=20;

    //Initialize Host memory
    h_iData = new float[nWords];
    h_oData = new float[nWords];

    //initialize Device memory
    cudaMalloc((void **)&d_iData,memSize);
    CUDA_HANDLE_ERROR();
    cudaMalloc((void **)&d_oData,memSize);
    CUDA_HANDLE_ERROR();
    int stride=2;
    //    for(int stride=1;stride <= nWords/2; stride*=2)
    //    {
    RunStrideAccess(stride, nWords, memSize, nRepeats);
    //    }

    cudaFree(d_iData);
    cudaFree(d_oData);

    free(h_iData);
    free(h_oData);

}

void TestBandwidth()
{
    size_t memSize = 128*DEFAULTMEMSIZE;
    size_t nWords = (memSize)/sizeof(float);

    //Initialize Host memory
    h_iData = new float[nWords];
    h_oData = new float[nWords];

    //initialize Device memory
    cudaMalloc((void **)&d_iData,memSize);
    CUDA_HANDLE_ERROR();
    cudaMalloc((void **)&d_oData,memSize);
    CUDA_HANDLE_ERROR();

    cudaFree(d_iData);
    cudaFree(d_oData);

    free(h_iData);
    free(h_oData);
}

int main()
{
    TestLatency();


    return 0;
}
