#!/bin/sh

# Configure to build OpenCL and CUDA tests.

# By default, we build 32-bit executables on OS X because pre-4.0 versions
# of CUDA do not provide all 64-bit libraries.  However, if you are using 
# CUDA 4.0 on a Mac with a x86_64 processor, you can add --enable-m64 to build
# 64-bit executables.
sh ./configure \
    --with-opencl --with-cuda 

