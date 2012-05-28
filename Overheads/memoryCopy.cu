#include <stdio.h>
#include <stdlib.h>
#include <cuda.h>
#include <utility.h>


#define DEFAULTMEMSIZE (1<<2)//4B

#define MINBLOCKSIZE 1
#define MAXBLOCKSIZE 1024
#define MAXGRIDSIZE 65535

#define NUMREPEAT 1000000

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


    cudaEvent_t start, stop;
    float time,latency;

    cudaEventCreate(&start);
    cudaEventCreate(&stop);
    CUDA_HANDLE_ERROR();

    cudaEventRecord(start,0);
    
    for(int i=0;i<NUMREPEAT;i++)
    {
        cudaMemcpy(d_iData, h_iData, memSize, cudaMemcpyHostToDevice);
	cudaThreadSynchronize();
    }

    cudaEventRecord(stop,0);
   // cudaEventSynchronize(stop);
    time=0.0f;
    cudaEventElapsedTime(&time,start,stop);
    
    //cudaMemcpy(h_oData, d_oData, memSize, cudaMemcpyDeviceToHost);
    //CUDA_HANDLE_ERROR();


    time /= 1.e3;
    latency = time/((float)NUMREPEAT);

    printf("kernel lunch overhead is:%0.15f\n",latency);
}
