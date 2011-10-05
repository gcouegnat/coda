using namespace coda;

template <typename T1, typename T2>
inline void op_times::apply(Matrix<typename T1::elem_type>& out, const Expr<T1,T2,op_times>& X)
{
    coda_extra_debug_funcname();
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
    coda_extra_debug_funcname();
    const uint nrows = A.nrows;
    const uint ncols = B.ncols;
    coda_debug_assert_mult_size(A.nrows, A.ncols, B.nrows, B.ncols, "op_times::apply()");
    if (B.ncols == 1)
    {
        // matrix-vector
        out.resize(A.nrows, 1);
        gemv::apply(out.memptr(), A, B.memptr());
    }
    else
    {
        // matrix-matrix
        out.resize(nrows, ncols);
        gemm::apply(out, A, B);
    }
}

