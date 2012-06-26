#include "cuda_runtime_api.h"
#if defined(PARALLEL)
#include "mpi.h"
#endif // defined(PARALLEL)

#include <iostream>
#include <sstream>
#include <assert.h>
#include "OptionParser.h"
#include "ResultDatabase.h"
#include "Timer.h"
#include "BadCommandLine.h"
#include "InvalidArgValue.h"
#include "Matrix2D.h"
#include "HostStencilFactory.h"
#include "HostStencil.h"
#include "CUDAStencilFactory.h"
#include "CUDAStencil.h"
#include "InitializeMatrix2D.h"
#include "InitializeMatrix2D.cpp"
#include "ValidateMatrix2D.h"
#include "ValidateMatrix2D.cpp"
#include "StencilUtil.h"
#include "StencilUtil.cpp"
#include "SerialStencilUtil.h"
#include "SerialStencilUtil.cpp"
#include "StencilFactory.cpp"
#include "CommonCUDAStencilFactory.cpp"
#include "HostStencil.cpp"
#include "CUDAStencil.cpp"

#if defined(PARALLEL)
#include "ParallelResultDatabase.h"
#include "MPIHostStencilFactory.cpp"
#include "MPIHostStencil.cpp"
#include "MPICUDAStencilFactory.cpp"
#include "MPICUDAStencil.cpp"
#include "MPIStencilUtil.cpp"
#include "MPI2DGridProgram.cpp"
#else
#include "HostStencilFactory.cpp"
#include "CUDAStencilFactory.cpp"
#endif // defined(PARALLEL)


// prototypes of auxiliary functions defined in this file or elsewhere
void CheckOptions( const OptionParser& opts );

void EnsureStencilInstantiation( void );


template<class T>
void
DoTest( const char* timerDesc, ResultDatabase& resultDB, OptionParser& opts )
{
    StencilFactory<T>* stdStencilFactory = NULL;
    Stencil<T>* stdStencil = NULL;
    StencilFactory<T>* testStencilFactory = NULL;
    Stencil<T>* testStencil = NULL;

    try
    {
#if defined(PARALLEL)
        stdStencilFactory = new MPIHostStencilFactory<T>;
        testStencilFactory = new MPICUDAStencilFactory<T>;
#else
        stdStencilFactory = new HostStencilFactory<T>;
        testStencilFactory = new CUDAStencilFactory<T>;
#endif // defined(PARALLEL)
        assert( (stdStencilFactory != NULL) && (testStencilFactory != NULL) );

        // do a sanity check on option values
        CheckOptions( opts );
        stdStencilFactory->CheckOptions( opts );
        testStencilFactory->CheckOptions( opts );

        // extract and validate options
        std::vector<long long> arrayDims = opts.getOptionVecInt( "customSize" );
        if( arrayDims.size() != 2 )
        {
            cerr << "Dim size: " << arrayDims.size() << "\n";
            throw InvalidArgValue( "all overall dimensions must be positive" );
        }
        if (arrayDims[0] == 0) // User has not specified a custom size
        {
            const int probSizes[4] = { 768, 1408, 2048, 4096 };
            int sizeClass = opts.getOptionInt("size");
            if (!(sizeClass >= 0 && sizeClass < 5))
            {
                throw InvalidArgValue( "Size class must be between 1-4" );
            }
            arrayDims[0] = arrayDims[1] = probSizes[sizeClass - 1];
        }

        long int seed = (long)opts.getOptionInt( "seed" );
        bool beVerbose = opts.getOptionBool( "verbose" );
        unsigned int nIters = (unsigned int)opts.getOptionInt( "num-iters" );
        double valErrThreshold = (double)opts.getOptionFloat( "val-threshold" );
        unsigned int nValErrsToPrint = (unsigned int)opts.getOptionInt( "val-print-limit" );

#if defined(PARALLEL)
        unsigned int haloWidth = (unsigned int)opts.getOptionInt( "iters-per-exchange" );
#else
        unsigned int haloWidth = 1;
#endif // defined(PARALLEL)

        float haloVal = (float)opts.getOptionFloat( "haloVal" );

        // build a description of this experiment
        std::ostringstream experimentDescriptionStr;
        experimentDescriptionStr 
            << nIters << ':'
            << arrayDims[0] << 'x' << arrayDims[1] << ':'
            << LROWS << 'x' << LCOLS;

        unsigned int nPasses = (unsigned int)opts.getOptionInt( "passes" );


        // compute the expected result on the host
#if defined(PARALLEL)
        int cwrank;
        MPI_Comm_rank( MPI_COMM_WORLD, &cwrank );
        if( cwrank == 0 )
        {
#endif // defined(PARALLEL)
        std::cout << "\nPerforming stencil operation on host for later comparison with CUDA output\n"
            << "Depending on host capabilities, this may take a while."
            << std::endl;
#if defined(PARALLEL)
        }
#endif // defined(PARALLEL)
        Matrix2D<T> exp( arrayDims[0] + 2*haloWidth, 
                            arrayDims[1] + 2*haloWidth );
        Initialize<T> init( seed,
                        haloWidth,
                        haloVal );
        init( exp );
        if( beVerbose )
        {
            std::cout << "initial state:\n" << exp << std::endl;
        }
        Stencil<T>* stdStencil = stdStencilFactory->BuildStencil( opts );
        (*stdStencil)( exp, nIters );
        if( beVerbose )
        {
            std::cout << "expected result:\n" << exp << std::endl;
        }

        // compute the result on the CUDA device
        Matrix2D<T> data( arrayDims[0] + 2*haloWidth, 
                            arrayDims[1] + 2*haloWidth );
        Stencil<T>* testStencil = testStencilFactory->BuildStencil( opts );

#if defined(PARALLEL)
        MPI_Comm_rank( MPI_COMM_WORLD, &cwrank );
        if( cwrank == 0 )
        {
#endif // defined(PARALLEL)
        std::cout << "\nPerforming stencil operation on chosen device, " 
            << nPasses << " passes.\n"
            << "Depending on chosen device, this may take a while."
            << std::endl;
#if defined(PARALLEL)
        }
#endif // defined(PARALLEL)

#if !defined(PARALLEL)
        std::cout << "At the end of each pass the number of validation\nerrors observed will be printed to the standard output." 
            << std::endl;
#endif // !defined(PARALLEL)
        for( unsigned int pass = 0; pass < nPasses; pass++ )
        {
            init( data );

            int timerHandle = Timer::Start();
            (*testStencil)( data, nIters );
            double elapsedTime = Timer::Stop( timerHandle, "CUDA stencil" );
            resultDB.AddResult( timerDesc,
                                    experimentDescriptionStr.str(),
                                    "s",
                                    elapsedTime );
            if( beVerbose )
            {
                std::cout << "observed result, pass " << pass << ":\n" 
                    << data 
                    << std::endl;
            }

            // validate the result
#if defined(PARALLEL)
            StencilValidater<T>* validater = new MPIStencilValidater<T>;
#else
            StencilValidater<T>* validater = new SerialStencilValidater<T>;            
#endif // defined(PARALLEL)
            validater->ValidateResult( exp,
                            data,
                            valErrThreshold,
                            nValErrsToPrint );
        }
    }
    catch( ... )
    {
        // clean up - abnormal termination
        // wish we didn't have to do this, but C++ exceptions do not 
        // support a try-catch-finally approach
        delete stdStencil;
        delete stdStencilFactory;
        delete testStencil;
        delete testStencilFactory;
        throw;
    }

    // clean up - normal termination
    delete stdStencil;
    delete stdStencilFactory;
    delete testStencil;
    delete testStencilFactory;
}




void
RunBenchmark( ResultDatabase& resultDB, OptionParser& opts )
{
    int device;

#if defined(PARALLEL)
    int cwrank;
    MPI_Comm_rank( MPI_COMM_WORLD, &cwrank );
#endif // defined(PARALLEL)

    cudaGetDevice( &device );
    cudaDeviceProp deviceProps;
    cudaGetDeviceProperties( &deviceProps, device );

#if defined(PARALLEL)
    if( cwrank == 0 )
    {
#endif // defined(PARALLEL)
        std::cout << "Running single precision test" << std::endl;
#if defined(PARALLEL)
    }
#endif // defined(PARALLEL)
    DoTest<float>( "SP_Sten2D", resultDB, opts );

    // check if we can run double precision tests
    if( ((deviceProps.major == 1) && (deviceProps.minor >= 3)) ||
        (deviceProps.major >= 2) )
    {
#if defined(PARALLEL)
        if( cwrank == 0 )
        {
#endif // defined(PARALLEL)
            std::cout << "DP supported" << std::endl;
#if defined(PARALLEL)
        }
#endif // defined(PARALLEL)
        DoTest<double>( "DP_Sten2D", resultDB, opts );
    }
    else
    {
#if defined(PARALLEL)
        if( cwrank == 0 )
        {
#endif // defined(PARALLEL)
            std::cout << "Double precision not supported - skipping" << std::endl;
#if defined(PARALLEL)
        }
#endif // defined(PARALLEL)
        // resultDB requires neg entry for every possible result
        int nPasses = (int)opts.getOptionInt( "passes" );
        for( int p = 0; p < nPasses; p++ )
        {
            resultDB.AddResult( (const char*)"DP_Sten2D", "N/A", "s", FLT_MAX);
        }
    }
}


// Adds command line options to given OptionParser
void
addBenchmarkSpecOptions( OptionParser& opts )
{
    opts.addOption("customSize", OPT_VECINT, "0,0", "specify custom problem size");
    opts.addOption( "num-iters", OPT_INT, "1000", "number of stencil iterations" );
    opts.addOption( "weight-center", OPT_FLOAT, "0.25", "center value weight" );
    opts.addOption( "weight-cardinal", OPT_FLOAT, "0.15", "cardinal values weight" );
    opts.addOption( "weight-diagonal", OPT_FLOAT, "0.05", "diagonal values weight" );
    opts.addOption( "seed", OPT_INT, "71594", "random number generator seed" );
    opts.addOption( "val-threshold", OPT_FLOAT, "0.01", "validation error threshold" );
    opts.addOption( "val-print-limit", OPT_INT, "15", "number of validation errors to print" );
    opts.addOption( "haloVal", OPT_FLOAT, "0.0", "value to use for halo data" );

#if defined(PARALLEL)
    // rather than define a fixed 2D topology that will cause problems
    // if the user didn't specify exactly the right number of processes,
    // we build a topology based on the number of processes available.
    // For now, we are taking a simple approach and making it a 2D grid,
    // 2x(N/2) where N is the number of available processes.
    // At most, we idle one process using this approach but we use a true
    // 2D topology that forces halo exchanges in two or three directions
    // (as opposed to using a 1xN topology that would involve halo exchanges
    // across only one or two directions).
    //
    // A more sophisticated approach would determine a 2D topology that tries
    // to be as "square" as possible while keeping the number of processes
    // used <= the number of processes available.
    //
    int nprocs;
    MPI_Comm_size( MPI_COMM_WORLD, &nprocs );
    assert( nprocs > 0 );
    int ny = (nprocs / 2);
    assert( ny > 0 );
    std::ostringstream ostr;
    ostr << "2," << ny;
    opts.addOption( "msize", OPT_VECINT, ostr.str().c_str(), "MPI 2D grid topology dimensions" );
    opts.addOption( "iters-per-exchange", OPT_INT, "1", "Number of local iterations between MPI boundary exchange operations (also, halo width)" );
#endif // defined(PARALLEL)
}


// validate stencil-independent values
void
CheckOptions( const OptionParser& opts )
{
    // check matrix dimensions - must be 2d, must be positive
    std::vector<long long> arrayDims = opts.getOptionVecInt( "customSize" );
    if( arrayDims.size() != 2 )
    {
        throw InvalidArgValue( "overall size must have two dimensions" );
    }
    if( (arrayDims[0] < 0) || (arrayDims[1] < 0) )
    {
        throw InvalidArgValue( "each size dimension must be positive" );
    }

    // validation error threshold must be positive
    float valThreshold = opts.getOptionFloat( "val-threshold" );
    if( valThreshold <= 0.0f )
    {
        throw InvalidArgValue( "validation threshold must be positive" );
    }

    // number of validation errors to print must be non-negative
    int nErrsToPrint = opts.getOptionInt( "val-print-limit" );
    if( nErrsToPrint < 0 )
    {
        throw InvalidArgValue( "number of validation errors to print must be non-negative" );
    }
}

