# Add source files here
EXECUTABLE	:= gmem

# cuda source file
CUFILES		:= gmem.cu

# C/C++ source files
CCFILES		:=

SM_VERSIONS := 10 110 12 13 20 21

CUDA_INSTALL_PATH ?= /usr/local/cuda

# baseic directory setup for SDK
ROOTDIR    ?= /home/sam/NVIDIA_GPU_Computing_SDK/C
LIBDIR     := $(ROOTDIR)/lib
COMMONDIR  := $(ROOTDIR)/common
SHAREDDIR  := $(ROOTDIR)/../shared/
CUPTI	   := /home/sam/CUDAToolsSDK/CUPTI
# Compilers
NVCC       := $(CUDA_INSTALL_PATH)/bin/nvcc 
CXX	:= g++ -fPIC
LINK	:= g++ -fPIC
# Includes
INCLUDES  += -I. -I.. -I$(CUDA_INSTALL_PATH)/include -I$(COMMONDIR)/inc -I$(SHAREDDIR)/inc -I$(CUPTI)/include

# Libraries
LIB += -L$(CUDA_INSTALL_PATH)/lib64 -L$(LIBDIR) -L$(SHAREDDIR)/lib -L$(CUPTI)/lib -lcuda -lcudart -lcutil_x86_64 -lshrutil_x86_64

# architecture flag for nvcc and gcc compilers build
CUBIN_ARCH_FLAG += -Xptxas=-v --cubin
CXX_ARCH_FLAGS  :=
NVCCFLAGS       += -gencode arch=compute_20,code=sm_20 -Xptxas -dlcm=ca

bin: $(CUFILES)
	$(NVCC) $(NVCCFLAGS) -g -G -m64 -o $(EXECUTABLE) $(CUFILES) $(INCLUDES) $(LIB)


cubin: $(CUFILES)
	$(NVCC) $(NVCCFLAGS) -m64 -o $(EXECUTABLE) $(CUFILES) $(INCLUDES) $(LIB) $(CUBIN_ARCH_FLAG)
