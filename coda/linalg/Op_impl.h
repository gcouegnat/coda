using namespace coda;

template <typename T1, typename op_type>
MatrixOp<T1, op_type>::MatrixOp(const T1& in_A) : lhs(in_A)
{
    coda_extra_debug_funcname();
}

template <typename T1, typename op_type>
MatrixOp<T1, op_type>::~MatrixOp()
{
    coda_extra_debug_funcname();
}
