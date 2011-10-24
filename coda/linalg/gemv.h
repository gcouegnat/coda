#ifndef GEMV_H
#define GEMV_H
namespace coda {

class gemv {
  public:

    template <typename eT>
    inline static void apply(eT* y, const Matrix<eT>& A, const eT* x, const eT alpha = eT(1), const eT beta = eT(0)) {
      coda_extra_debug_funcname();
      coda_extra_debug_print("Using cblas::gemv()");
      cblas::gemv(cblas::CblasColMajor, cblas::CblasNoTrans,
                  A.nrows, A.ncols,
                  alpha,
                  A.mem, A.nrows,
                  x, 1,
                  beta,
                  y, 1);
      //
      // for(uint i=0; i < A.nrows; ++i)
      //  {
      //    eT acc = eT(0);
      //    for(uint j=0; j < A.ncols; ++j)
      //    {
      //      acc += A(i,j)*x[j];
      //    }
      //    y[i]=acc;
      //  }
      //
    }

};

}    // namespace coda
#endif /* GEMV_H */
