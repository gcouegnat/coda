#include <coda/coda.h>
using namespace coda;

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
}

int main(int argc, char const* argv[]) {
  info("Coda " + coda_version::as_string());
  info("Compiled with gcc %d.%d.%d", __GNUC__, __GNUC_MINOR__,__GNUC_PATCHLEVEL__);
  const uint nrepeat = 1000;
  
  info("Running benchmark<float> with coda");
  tic();
  benchmark_matmul_coda<float>(nrepeat);
  toc();
  
  info("Running benchmark<double> with coda");
  tic();
  benchmark_matmul_coda<double>(nrepeat);
  toc();
  
  return 0;
}

