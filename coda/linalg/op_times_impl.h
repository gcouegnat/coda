using namespace coda;

//-----------------------------------------------------------------------------
// Matrix-matrix product
//-----------------------------------------------------------------------------

template <typename eT>
inline void op_times::apply(Matrix<eT>& out, const Matrix<eT>& A, const Matrix<eT>& B)
{
    coda_extra_debug_funcname();
    const uint nrows = A.nrows;
    const uint ncols = B.ncols;
    coda_debug_assert_mult_size(A.nrows, A.ncols, B.nrows, B.ncols, "op_times::apply()");
    out.resize(nrows, ncols);
    gemm::apply(out, A, B);
}

template <typename T1, typename T2>
inline void op_times::apply(Matrix<typename T1::elem_type>& out, const MatrixExpr<T1,T2,op_times>& X)
{
    coda_extra_debug_funcname();
    typedef typename T1::elem_type eT;
    const Unwrap<T1> tmp1(X.lhs);
    const Unwrap<T2> tmp2(X.rhs);
    const Matrix<eT>& A = tmp1.M;
    const Matrix<eT>& B = tmp2.M;
    op_times::apply(out, A, B);
}

template <typename T1, typename T2>
inline void op_times::apply_inplace_plus(Matrix<typename T1::elem_type>& out, const MatrixExpr<T1,T2,op_times>& X)
{
    coda_extra_debug_funcname();
    typedef typename T1::elem_type eT;
    const Unwrap<T1> tmp1(X.lhs);
    const Unwrap<T2> tmp2(X.rhs);
    const Matrix<eT>& A = tmp1.M;
    const Matrix<eT>& B = tmp2.M;
    gemm::apply(out, A, B, eT(1), eT(1));
}

//-----------------------------------------------------------------------------
// Matrix-vector product
//-----------------------------------------------------------------------------
template <typename eT>
inline void op_times::apply(Vector<eT>& out, const Matrix<eT>& A, const Vector<eT>& x)
{
    coda_extra_debug_funcname();
    coda_debug_assert_mult_size(A.nrows, A.ncols, x.nelem, 1, "op_times::apply()");
    const uint nrows = A.nrows;
    out.resize(nrows);
    gemv::apply(out.memptr(), A, x.memptr());
}

template <typename T1, typename T2>	
inline void op_times::apply(Vector<typename T1::elem_type>& out, const VectorExpr<T1,T2,op_times>& X)
{
    coda_extra_debug_funcname();
    typedef typename T1::elem_type eT;
    const Unwrap<T1> tmp1(X.lhs);
    const VectorUnwrap<T2> tmp2(X.rhs);    
    const Matrix<eT>& A = tmp1.M;
    const Vector<eT>& x = tmp2.V;
    op_times::apply(out, A, x);    
}


