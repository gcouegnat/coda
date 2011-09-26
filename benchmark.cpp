#include <coda/coda.h>
using namespace coda;

#include <armadillo>
// #include <eigen3/Eigen/Dense>

#define GCCVERSION (__GNUC__ * 100 + __GNUC_MINOR__ * 10 + __GNUC_PATCHLEVEL__)


template<typename eT>
void benchmark_matmul_cblas(uint nrepeat = 1000)
{
    Matrix<eT> K(24,24);
    Matrix<eT> B( 6,24);
    Matrix<eT> C( 6, 6);

    K.zeros();
    B.fill(1.0);
    C.fill(2.0);


    for (uint i=0; i < nrepeat; ++i)
    {
        Matrix<eT> BtC(B.ncols, C.ncols);
        cblas::gemm<eT>(cblas::CblasRowMajor, cblas::CblasTrans,
                        cblas::CblasNoTrans, BtC.nrows, // M
                        BtC.ncols, // N
                        B.ncols, // K
                        eT(1.0),
                        B.mem,
                        B.ncols, // LDA
                        C.mem,
                        C.ncols, // LDB
                        eT(0.0),
                        BtC.memptr(),
                        BtC.ncols); // LDC

        cblas::gemm<eT>(cblas::CblasRowMajor, cblas::CblasNoTrans,
                        cblas::CblasNoTrans,
                        K.nrows, // M
                        K.ncols, // N
                        BtC.ncols, // K
                        eT(1.0),
                        BtC.mem,
                        BtC.ncols, // LDA
                        B.mem,
                        B.ncols, // LDB
                        eT(0.0),
                        K.memptr(),
                        K.ncols); // LDC


    }
    // K.print("K =");


}


template<typename eT>
void benchmark_matmul_coda(uint nrepeat = 1000)
{
    Matrix<eT> K(24,24);
    Matrix<eT> B( 6,24);
    Matrix<eT> C( 6, 6);

    K.zeros();
    B.fill(1.0);
    C.fill(2.0);
    
    for (uint i=0; i < nrepeat; ++i)
    {
        K = trans(B)*C*B;
    }
    // K.print("K =");
}




int
main (int argc, char const *argv[])
{
    set_log_level (INFO);
    info("Compiled with gcc %d", GCCVERSION);

    Timer timer;

    timer.rename("cblas");
    timer.start();
    benchmark_matmul_cblas<float>(1000000);
    timer.stop();

    timer.rename("coda");
    timer.start();
    benchmark_matmul_coda<float>(1000000);
    timer.stop();



    return 0;
}
