#ifndef GEMV_H
#define GEMV_H
namespace coda
{

  class gemv
{
public:

  template <typename eT>
  inline static void apply(eT* y, const Matrix<eT>& A, const eT* x, const eT alpha = eT(1), const eT beta = eT(0))
  {
  coda_extra_debug_funcname();
  coda_extra_debug_print("Using cblas::gemv()");
  cblas::gemv(cblas::CblasRowMajor, cblas::CblasNoTrans, A.nrows, A.ncols, alpha, A.mem, A.ncols, x, 1, beta, y, 1);
  }

};

} /* namespace coda */
#endif /* GEMV_H */
