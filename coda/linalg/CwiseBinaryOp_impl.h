using namespace coda;

template<typename T1, typename T2, typename op_type>
CwiseBinaryOp<T1, T2, op_type>::CwiseBinaryOp(const Base<T1>& in_A, const Base<T2>& in_B)
    : lhs(in_A.get_ref()), rhs(in_B.get_ref())
{
    coda_extra_debug_funcname();
}

template<typename T1, typename T2, typename op_type>
CwiseBinaryOp<T1, T2, op_type>::~CwiseBinaryOp()
{
    coda_extra_debug_funcname();
}

template<typename T1, typename T2, typename op_type>
uint CwiseBinaryOp<T1, T2, op_type>::nrows() const
{
    return lhs.nrows();
}

template<typename T1, typename T2, typename op_type>
uint CwiseBinaryOp<T1, T2, op_type>::ncols() const
{
    return lhs.ncols();
}

template<typename T1, typename T2, typename op_type>
uint CwiseBinaryOp<T1, T2, op_type>::nelem() const
{
    return lhs.nelem();
}

template<typename T1, typename T2, typename op_type>
typename T1::elem_type CwiseBinaryOp<T1, T2, op_type>::operator[] (const uint i) const
{
    return cwise_binary_op<op_type>::process(lhs[i], rhs[i]);
}

template<typename T1, typename T2, typename op_type>
typename T1::elem_type CwiseBinaryOp<T1, T2, op_type>::at (const uint i, const uint j) const
{
    return cwise_binary_op<op_type>::process(lhs.at(i,j), rhs.at(i,j));
}


