using namespace coda;

template <typename T1, typename op_type>
CwiseOp<T1, op_type>::CwiseOp(const Base<T1>& in_A) : lhs(in_A.get_ref()), val(val)
{
    coda_extra_debug_funcname();
}

template <typename T1, typename op_type>
CwiseOp<T1, op_type>::CwiseOp(const Base<T1>& in_A, typename T1::elem_type in_val) : lhs(in_A.get_ref()), val(in_val)
{
    coda_extra_debug_funcname();
}


template <typename T1, typename op_type>
CwiseOp<T1, op_type>::~CwiseOp()
{
    coda_extra_debug_funcname();
}

template <typename T1, typename op_type>
uint CwiseOp<T1, op_type>::nrows() const
{
    return lhs.nrows();
}

template <typename T1, typename op_type>
uint CwiseOp<T1, op_type>::ncols() const
{
    return lhs.ncols();
}

template <typename T1, typename op_type>
uint CwiseOp<T1, op_type>::nelem() const
{
    return lhs.nelem();
}

template<typename T1, typename op_type>
typename T1::elem_type CwiseOp<T1, op_type>::operator[] (const uint i) const
{
    return cwise_op<op_type>::process(lhs[i], val);
}

template<typename T1, typename op_type>
typename T1::elem_type CwiseOp<T1, op_type>::at (const uint i, const uint j) const
{
    return cwise_op<op_type>::process(lhs.at(i,j), val);
}
