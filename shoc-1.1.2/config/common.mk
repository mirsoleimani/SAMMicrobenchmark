# === Basics ===
CC       = gcc
CXX      = g++
LD       = g++
AR       = /usr/bin/ar
RANLIB   = ranlib

CPPFLAGS += -I$(SHOC_ROOT)/src/common -I${SHOC_ROOT}/config -I/usr/local/cuda4.1/cuda/include
CFLAGS   += -m64 -g -O2
CXXFLAGS += -m64 -g -O2
NVCXXFLAGS += -m64 -g -O2
ARFLAGS  = rcv
LDFLAGS  = 
LIBS     = -L$(SHOC_ROOT)/lib  -lrt

USE_MPI         = no
MPICXX          = 

OCL_CPPFLAGS    += -I${SHOC_ROOT}/src/opencl/common
OCL_LIBS        = -lOpenCL

NVCC            = /usr/local/cuda4.1/cuda/bin/nvcc
CUDA_CXX        = /usr/local/cuda4.1/cuda/bin/nvcc
CUDA_INC        = -I/usr/local/cuda4.1/cuda/include
CUDA_CPPFLAGS   += -gencode=arch=compute_10,code=sm_10  -gencode=arch=compute_11,code=sm_11  -gencode=arch=compute_13,code=sm_13  -gencode=arch=compute_20,code=sm_20  -gencode=arch=compute_20,code=compute_20 -I${SHOC_ROOT}/src/cuda/include

USE_CUDA        = yes
ifeq ($(USE_CUDA),yes)
CUDA_LIBS       := $(shell /usr/local/cuda4.1/cuda/bin/nvcc -dryrun bogus.cu 2>&1 | grep LIBRARIES | sed 's/^.*LIBRARIES=//')
else
CUDA_LIBS       =
endif



