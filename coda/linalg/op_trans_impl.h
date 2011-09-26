using namespace coda;

template <typename T1>
inline void op_trans::apply(Matrix<typename T1::elem_type>& out, const Op<T1, op_trans>& X)
{
	debug_sigprint();
	typedef typename T1::elem_type eT;
	
	Matrix<eT> tmp(X.lhs);
	int nrows = tmp.nrows;
	int ncols = tmp.ncols;
	
	out.resize(ncols, nrows);
	
	for(uint i=0; i < ncols; ++i)
	{
		for(uint j=0; j < nrows; ++j)
		{
			out(i,j) = tmp(j,i);
		}
	}
	
	
}