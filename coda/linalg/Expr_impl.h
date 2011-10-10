using namespace coda;

template <typename T1, typename T2, typename op_type>
inline MatrixExpr<T1,T2,op_type>::~MatrixExpr()
{
    coda_extra_debug_funcname();
}

template <typename T1, typename T2, typename op_type>
inline MatrixExpr<T1,T2,op_type>::MatrixExpr(const T1& in_A, const T2& in_B) : lhs(in_A), rhs(in_B)
{
    coda_extra_debug_funcname();
}


template <typename T1, typename T2, typename op_type>
inline VectorExpr<T1,T2,op_type>::~VectorExpr()
{
    coda_extra_debug_funcname();
}

template <typename T1, typename T2, typename op_type>
inline VectorExpr<T1,T2,op_type>::VectorExpr(const T1& in_A, const T2& in_B) : lhs(in_A), rhs(in_B)
{
    coda_extra_debug_funcname();
}