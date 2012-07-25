#include <stdio.h>
#include <cuda.h>
#include <repeat.h>
#include <utility.h>
#include <cuda_runtime.h>
#include <device_launch_parameters.h>


#define DEFAULTMEMSIZE (1<<10)//1KB

#define MINBLOCKSIZE 1
#define MAXBLOCKSIZE 1024
#define MAXGRIDSIZE 65535

#define CLOCK 0.000000000713

unsigned int *h_iData;
unsigned int *h_oData;
unsigned int *d_iData;
unsigned int *d_oData;

void PrintResult(char *fName,unsigned int *size,unsigned int *stride,
    unsigned int *latency, unsigned int *clock,unsigned int count)
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
extern "C"
 __global__ void StrideAccess(unsigned int *oData, unsigned int *iData, int itr)
{
    unsigned int xId=0;
    unsigned int start=0,stop=0;
    volatile unsigned int sumTime=0;


    for(int i=0;i<itr;i++)
    {
       // start = clock();
        repeat512(xId= iData[xId];)//dependency
       // stop = clock();

       // sumTime += stop-start;
    }

    oData[0]=iData[xId];
    oData[1]=sumTime;
}
//***StrideAccess_End***



void RunStrideAccess(int stride,int nWords, int itr)
{
    //***RunStrideAccessFill_Start***
    //Lay out path of memory references in array
    for(unsigned int i=0;i<nWords;i++)
    {
        h_oData[i]= ((i+stride)%nWords);
    }
    //***RunStrideAccessFill_End***

    cudaMemcpy(d_iData, h_oData, (nWords+1)*sizeof(unsigned int), cudaMemcpyHostToDevice);

    dim3 blockSize = dim3(1,1);
    dim3 gridSize = dim3(1,1,1);

    cudaEvent_t start, stop;
    float time,latency;

    cudaEventCreate(&start);
    cudaEventCreate(&stop);
    CUDA_HANDLE_ERROR();

    
    cudaEventRecord(start,0);

    StrideAccess<<<1,1>>>(d_oData,d_iData,itr);

    cudaEventRecord(stop,0);
    cudaThreadSynchronize();    
    cudaEventSynchronize(stop);
    CUDA_HANDLE_ERROR();

    cudaMemcpy(h_iData, d_oData, nWords*sizeof(unsigned int), cudaMemcpyDeviceToHost);

    time=0.0f;
    cudaEventElapsedTime(&time,start,stop);

    time /= 1.e3;
    latency = (time*1.0)/(float)(itr*512);
    unsigned int clocks = (latency/CLOCK);

    latency*=1.e9;
    int c = (float)h_iData[1]/(float)((itr)*512);
    printf("%d\t%f\t%d\t%0.0f\t%d\t%d\n",nWords*sizeof(int),time,stride*sizeof(int),latency,clocks,c);

    cudaEventDestroy(start);
    cudaEventDestroy(stop);
    CUDA_HANDLE_ERROR();
}
void TestLatency(size_t memSize)
{
    size_t nWords = (memSize)/sizeof(unsigned int);
    int itr=200;

    //Initialize Host memory
    h_iData = new unsigned int[nWords+1];
    h_oData = new unsigned int[nWords+1];

    //initialize Device memory
    cudaMalloc((void **)&d_iData,(nWords+1)*sizeof(int));
    CUDA_HANDLE_ERROR();
    cudaMalloc((void **)&d_oData,(nWords+1)*sizeof(int));
    CUDA_HANDLE_ERROR();

    printf("#size\ttime\tstride\tlatency(ns)\tclocks\n");
    for(int stride=1;stride <= nWords/2; stride*=2)
    {
        RunStrideAccess(stride, nWords,itr);
    }

    cudaFree(d_iData);
    cudaFree(d_oData);

    free(h_iData);
    free(h_oData);

}

void TestBandwidth(size_t memSize)
{
    
    size_t nWords = (memSize)/sizeof(unsigned int);

    //Initialize Host memory
    h_iData = new unsigned int[nWords];
    h_oData = new unsigned int[nWords];

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
	cudaThreadSetCacheConfig(cudaFuncCachePreferL1);
    for(size_t memSize=4*DEFAULTMEMSIZE;memSize<=512*1024*DEFAULTMEMSIZE;memSize*=2)
    {
        TestLatency(memSize);
    }

    return 0;
}
