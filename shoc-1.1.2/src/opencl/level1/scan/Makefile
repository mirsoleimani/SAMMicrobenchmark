SHOC_ROOT=../../../..
include $(SHOC_ROOT)/config/config.mk

VPATH:=../../common

LDFLAGS+=$(OCL_LDFLAGS)
CPPFLAGS+=$(OCL_CPPFLAGS) -I${SHOC_ROOT}/src/mpi/common
LIBS+=$(OCL_LIBS)

TARGET     = ${SHOC_ROOT}/bin/Serial/OpenCL/Scan
EPTARGET   = ${SHOC_ROOT}/bin/EP/OpenCL/Scan
TPTARGET   = ${SHOC_ROOT}/bin/TP/OpenCL/Scan

TARGETS=$(TARGET) 
ifeq ($(USE_MPI),yes)
TARGETS += ${EPTARGET} $(TPTARGET)
CPPFLAGS+=-I${SHOC_ROOT}/src/mpi/common
MPI_LIBS    = -lSHOCCommonMPI
endif

OBJS = Scan.o main.o scan_cl.o
EPOBJS = Scan.o main_mpi.o scan_cl.o
TPOBJS = tpScan_mpi.o main_mpi.o scan_cl.o

LIBS+=-lSHOCCommonOpenCL -lSHOCCommon
LIBDEP=$(SHOC_ROOT)/lib/libSHOCCommonOpenCL.a $(SHOC_ROOT)/lib/libSHOCCommon.a 
LIBDEP_PAR=$(LIBDEP_SER) $(SHOC_ROOT)/lib/libSHOCCommonMPI.a 

all: ${TARGETS}

${TARGET}: ${OBJS}
	${CXX} -o $@ ${CXXFLAGS} ${LDFLAGS} ${OBJS} ${LIBS}

${EPTARGET}: ${EPOBJS} $(LIBDEP_PAR)
	${MPICXX} -o $@ ${CXXFLAGS} ${LDFLAGS} ${EPOBJS} ${LIBS} ${MPI_LIBS} ${OCL_LIBS}

${TPTARGET}: ${TPOBJS} $(LIBDEP_PAR)
	${MPICXX} -o $@ ${CXXFLAGS} ${LDFLAGS} ${TPOBJS} ${LIBS} ${MPI_LIBS} ${OCL_LIBS}

$(SHOC_ROOT)/lib/libSHOCCommonMPI.a:
	${MAKE} -C ${SHOC_ROOT}/src/mpi/common

clean:
	${RM} ${OBJS} ${EPOBJS} $(TPOBJS) ${TARGET} ${EPTARGET} $(TPTARGET)

distclean: clean
	${RM} $(DEP) *_cl.cpp *~ .buildflags Makefile

include $(SHOC_ROOT)/config/targets.mk

