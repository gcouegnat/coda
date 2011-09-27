using namespace coda;

template <typename T1>
inline void op_trans::apply(Matrix<typename T1::elem_type>& out, const Op<T1, op_trans>& X)
{
	coda_extra_debug_funcname();
	typedef typename T1::elem_type eT;
	
  const Unwrap<T1> tmp(X.lhs);
  const Matrix<eT>& A = tmp.M;
	
  op_trans::apply(out, A);

}	

template <typename eT>
inline  void op_trans::apply(Matrix<eT>& out, const Matrix<eT>& in)
{
  coda_extra_debug_funcname();
  const uint nrows = in.nrows;
  const uint ncols = in.ncols;
  
  out.resize(ncols, nrows);
  
  for(uint r = 0; r < nrows; ++r)
  {
    const uint j = r;
    for(uint c = 0; c < ncols; ++c)
    {
      const uint i = c;
      out.at(i,j) = in.at(r,c);
    }
  }
  
}

