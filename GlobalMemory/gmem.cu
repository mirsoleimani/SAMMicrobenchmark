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

#define CLOCK 0.000000000713

float *h_iData;
float *h_oData;
float *d_iData;
float *d_oData;

void PrintResult(char *fName,unsigned int *size,unsigned int *stride,
    float *latency, unsigned int *clock,unsigned int count)
{
    FILE *fOut;
    fOut = fopen(fName,"w");

    fprintf(fOut,"#ArraySize(B)\tStride(B)\tlatency(ns)\tclock\n");
    for(int i=0;i<count;i++)
    {
        fprintf(fOut,"%d\t%d\t%d\t%d\n",size[i],stride[i],latency[i],clock[i]);
    }
    fclose(fOut);
}
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

#pragma unroll 512
    for(int i=0;i<nWords;i++)
    {
        xId= iData[xId];
    }
    
    oData[0]=iData[xId];	
}
//***StrideAccess_End***

void RunStrideAccess(int stride,int nWords)
{
    //***RunStideAccessFill_Start***
    for(unsigned int i=0;i<nWords;i++)
    {
        h_oData[i]= (float)((i+stride)%nWords);
    }
    //***RunStrideAccessFill_End***

    cudaMemcpy(d_iData, h_oData, nWords*sizeof(float), cudaMemcpyHostToDevice);

    int blockSize = 256;
    int gridSize = nWords/blockSize;

    cudaEvent_t start, stop;
    float time,latency;

    cudaEventCreate(&start);
    cudaEventCreate(&stop);
    CUDA_HANDLE_ERROR();

    cudaEventRecord(start,0);

    StrideAccess<<<1,1>>>(d_oData,d_iData,nWords);

    cudaEventRecord(stop,0);
    cudaEventSynchronize(stop);
    CUDA_HANDLE_ERROR();

    cudaThreadSynchronize();    

    cudaMemcpy(h_iData, d_oData, nWords*sizeof(float), cudaMemcpyDeviceToHost);

    time=0.0f;
    cudaEventElapsedTime(&time,start,stop);

    time /= 1.e3;
    latency = (time*1.0)/(float)nWords;
    int clocks = (int) latency/CLOCK;


    printf("data:%f, time:%f, stride:%d, latency:%0.10f, clocks:%d\n",h_iData[0],time,stride,latency,clocks);

    cudaEventDestroy(start);
    cudaEventDestroy(stop);
    CUDA_HANDLE_ERROR();
}
void TestLatency(size_t memSize)
{
    size_t nWords = (memSize)/sizeof(float);

    //Initialize Host memory
    h_iData = new float[nWords];
    h_oData = new float[nWords];

    //initialize Device memory
    cudaMalloc((void **)&d_iData,memSize);
    CUDA_HANDLE_ERROR();
    cudaMalloc((void **)&d_oData,memSize);
    CUDA_HANDLE_ERROR();


    for(int stride=1;stride <= nWords/2; stride*=2)
    {
        RunStrideAccess(stride, nWords);
    }

    cudaFree(d_iData);
    cudaFree(d_oData);

    free(h_iData);
    free(h_oData);

}

void TestBandwidth(size_t memSize)
{
    
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
    size_t memSize = 128*DEFAULTMEMSIZE;
    for(size_t memSize=DEFAULTMEMSIZE;memSize<256*DEFAULTMEMSIZE;memSize+=DEFAULTSTEPSIZE)
    {
        TestLatency(memSize);
    }

    return 0;
}
