#include <stdio.h>
#include <stdlib.h>
#include <cuda.h>
#include <utility.h>
#include <cuda_runtime.h>
#include <device_launch_parameters.h>


#define DEFAULTMEMSIZE (1<<2)//4B

#define MINBLOCKSIZE 1
#define MAXBLOCKSIZE 1024
#define MAXGRIDSIZE 65535

#define NUMREPEAT 1000000
#define PINNED 0

int main()
{
    size_t memSize = DEFAULTMEMSIZE;
    size_t nWords = (memSize)/sizeof(float);

    //Initialize Host memory
    float *h_iData;
    float *h_oData;
    if(PINNED)
    {
        cudaHostAlloc((void **)&h_iData,memSize,0);
        cudaHostAlloc((void **)&h_oData,memSize,0);
    }
    else
    {
        h_iData = new float[nWords];
        h_oData = new float[nWords];
    }

    for(unsigned int i=0;i<nWords;i++)
    {
        h_oData[i]= (float) (i&(0xFF));
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

        if(PINNED)
        {
		for(int i=0;i<NUMREPEAT;i++)
		{
            cudaMemcpyAsync(d_iData,h_iData,memSize,cudaMemcpyHostToDevice,0);
		}
        }
        else
        {
		for(int i=0;i<NUMREPEAT;i++)
		{
            cudaMemcpy(d_iData, h_iData, memSize, cudaMemcpyHostToDevice);
		}
        }
//        cudaThreadSynchronize();
    

    cudaEventRecord(stop,0);
    cudaEventSynchronize(stop);
    time=0.0f;
    cudaEventElapsedTime(&time,start,stop);

    //cudaMemcpy(h_oData, d_oData, memSize, cudaMemcpyDeviceToHost);
    //CUDA_HANDLE_ERROR();


    time /= 1.e3;
    latency = time/((float)NUMREPEAT);

    printf("memory copy host trasfer lunch overhead is:%0.15f\n",latency);

   if(PINNED)
   {
	   cudaFreeHost(d_iData);
	   cudaFreeHost(d_oData);
   }
   else
   {
 free(h_iData);
 free(h_oData);



   }
   
     cudaFree(d_iData);  
    cudaFree(d_oData);
}
