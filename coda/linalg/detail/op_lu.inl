using namespace coda;

template <typename T1>
inline void op_lu::apply(Matrix<typename T1::elem_type>& out, const MatrixOp<T1, op_lu>& X)
{
  coda_extra_debug_funcname();
  typedef typename T1::elem_type eT;
  out = X.lhs;
  int nrows = out.nrows;
  int ncols = out.ncols;
  int info = 0;
  int* ipiv = new int[nrows];
  int work_len = nrows ;
  eT* work = new eT[work_len];
  lapack::getrf(&nrows, &ncols, out.memptr(), &nrows, ipiv, &info);

  if (info > 0) {
    error("op_inv::apply(): Matrix is singular");
  }

  delete [] ipiv;
  delete [] work;
  
}