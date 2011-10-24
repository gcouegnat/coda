#include <coda/coda.h>
using namespace coda;

// #include <armadillo>
// #include <eigen3/Eigen/Dense>

#ifdef __GNUC__
#define GCCVERSION (__GNUC__ * 100 + __GNUC_MINOR__ * 10 + __GNUC_PATCHLEVEL__)
#endif

template<typename eT>
void benchmark_matmul_cblas(uint nrepeat = 1000) {
  Matrix<eT> K(360, 360);
  Matrix<eT> B(60, 360);
  Matrix<eT> C(60, 60);
  K.zeros();
  B.fill(1.0);
  C.fill(2.0);
  for (uint i = 0; i < nrepeat; ++i) {
    Matrix<eT> BtC(B.ncols, C.ncols);

    cblas::gemm<eT>(cblas::CblasRowMajor, cblas::CblasTrans,
                    cblas::CblasNoTrans, BtC.nrows, BtC.ncols, B.ncols, eT(1.0),
                    B.mem, B.ncols, C.mem, C.ncols, eT(0.0), BtC.memptr(),
                    BtC.ncols); 

    cblas::gemm<eT>(cblas::CblasRowMajor, cblas::CblasNoTrans,
                    cblas::CblasNoTrans, K.nrows, K.ncols, BtC.ncols, eT(1.0),
                    BtC.mem, BtC.ncols, B.mem, B.ncols, eT(0.0), K.memptr(),
                    K.ncols); 
  }
  K.print("K =");
}


template<typename eT>
void benchmark_matmul_coda(uint nrepeat = 1000) {
  Matrix<eT> K(360, 360);
  Matrix<eT> B(60, 360);
  Matrix<eT> C(60, 60);
  K.zeros();
  B.fill(1.0);
  C.fill(2.0);
  for (uint i = 0; i < nrepeat; ++i) {
    K += trans(B) * C * B;
  }
  // K.print("K =");
}


// template<typename eT>
// void benchmark_matmul_arma(uint nrepeat = 1000) {
//   arma::Mat<eT> K(360, 360);
//   arma::Mat<eT> B(60, 360);
//   arma::Mat<eT> C(60, 60);
//   K.zeros();
//   B.fill(1.0);
//   C.fill(2.0);
//   for (uint i = 0; i < nrepeat; ++i) {
//     K += trans(B) * C * B;
//   }
//   // K.print("K =");
// }

int
main(int argc, char const* argv[]) {
  // set_log_level (ERROR);
  info("Coda " + coda_version::as_string());
  info("Compiled with gcc %d.%d.%d", __GNUC__, __GNUC_MINOR__,__GNUC_PATCHLEVEL__);
  const uint nrepeat = 1000;
  Timer timer;
  // info("Running benchmark with cblas");
  // timer.rename("cblas");
  // timer.start();
  // benchmark_matmul_cblas<float>(nrepeat);
  // timer.stop();
  info("Running benchmark<float> with coda");
  timer.rename("coda");
  timer.start();
  benchmark_matmul_coda<float>(nrepeat);
  timer.stop();
  // info("Running benchmark<float> with armadillo");
  // timer.rename("armadillo");
  // timer.start();
  // benchmark_matmul_arma<float>(nrepeat);
  // timer.stop();
  // info("Running benchmark<double> with cblas");
  // timer.rename("cblas");
  // timer.start();
  // benchmark_matmul_cblas<double>(nrepeat);
  // timer.stop();
  info("Running benchmark<double> with coda");
  timer.rename("coda");
  timer.start();
  benchmark_matmul_coda<double>(nrepeat);
  timer.stop();
  // info("Running benchmark<double> with armadillo");
  // timer.rename("armadillo");
  // timer.start();
  // benchmark_matmul_arma<double>(nrepeat);
  // timer.stop();
  return 0;
}
