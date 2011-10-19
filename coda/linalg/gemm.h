#ifndef GEMM_H
#define GEMM_H
namespace coda {
class gemm {
 public:
  template<typename eT>
inline static void apply(Matrix<eT>& C, const Matrix<eT>& A, const Matrix<eT>& B, const eT alpha = eT(1), const eT beta = eT(0)) {
  coda_extra_debug_funcname();
  coda_extra_debug_print("Using ["BLAS_IMPL"] cblas::gemm()");

  cblas::gemm<eT>(cblas::CblasRowMajor, cblas::CblasNoTrans, cblas::CblasNoTrans,
                  C.nrows, C.ncols, A.ncols, // K
                  alpha,
                  A.mem, A.ncols, // LDA
                  B.mem, B.ncols, // LDB
                  beta,
                  C.memptr(), C.ncols); // LDC

  // for(uint i=0; i<A.nrows; ++i)
  // {
  //   for(uint j=0; j<B.ncols; ++j)
  //   {
  //     eT acc = eT(0);
  //     for(uint k=0; k<A.ncols; ++k)
  //     {
  //       acc += A(i,k)*B(k,j);
  //     }
  //     C(i,j) = acc;
  //   }
  // }


}
};
} /* namespace coda */
#endif /* GEMM_H */
