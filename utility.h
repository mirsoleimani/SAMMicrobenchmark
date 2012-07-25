#include <stdio.h>
#include <stdlib.h>
//#include <sys/time.h>
#include <cmath>
#include <cuda.h>

//#define startTiming gettimeofday(&startTime,NULL)
//#define endTiming gettimeofday(&endTime,NULL)
//#define measuredTime = timediff(endTime,startTime);

//struct timeval startTime, endTime;
//double measuredTime;

//calculate difference in time between two times
//double timediff(timeval end, timeval start)
//{
//	double ts = start.tv_sec + (start.tv_usec / 1000000.0);
//	double te = end.tv_sec + (end.tv_usec / 1000000.0);
//	return te - ts;
//}


void HandleError(cudaError_t errcode,int line)
{
	if(cudaSuccess != errcode)
	{
		printf("cudaMalloc failed %s:%d \n",__FILE__,line);
		printf("%s\n",cudaGetErrorString(errcode));
		return;
	}
}

#define CUDA_HANDLE_ERROR()\
{\
	cudaError_t errcode = cudaGetLastError();\
		if(cudaSuccess != errcode)\
		{\
        		printf("error code=%d error=%s file=%s line=%d \n",errcode,cudaGetErrorString(errcode),__FILE__,__LINE__);\
        		exit(-1);\
        	}\
}

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