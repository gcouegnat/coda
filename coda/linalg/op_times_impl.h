using namespace coda;

template <typename T1, typename T2>
inline void op_times::apply(Matrix<typename T1::elem_type>& out, const BinaryOp<T1,T2,op_times>& X)
{
	debug_sigprint();
	
	typedef typename T1::elem_type eT;
	
	const Unwrap<T1> tmp1(X.lhs);
	const Unwrap<T2> tmp2(X.rhs);
	
	const Matrix<eT>& A = tmp1.M;
	const Matrix<eT>& B = tmp2.M;	
	
	op_times::apply(out, A, B);
	
	
}

template <typename eT>
inline void op_times::apply(Matrix<eT>& out, const Matrix<eT>& A, const Matrix<eT>& B)
{
	debug_sigprint();

	const uint nrows = A.nrows;
	const uint ncols = B.ncols;	
	
	out.resize(nrows, ncols);
	
	gemm::apply(out, A, B);
	
}
