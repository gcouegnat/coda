using namespace coda;

//-----------------------------------------------------------------------------
// Cwise Binary Op
//-----------------------------------------------------------------------------
template <typename op_type>
template <typename T1, typename T2>
inline void  cwise_binary_op<op_type>::apply(Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op)
{
    coda_extra_debug_funcname();

    typedef typename T1::elem_type eT;
    const uint nrows = op.nrows();
    const uint ncols = op.ncols();
    const uint nelem = op.nelem();

    out.resize(nrows, ncols);
    eT* out_mem = out.memptr();

    const Proxy<T1>& lhs = op.lhs;
    const Proxy<T2>& rhs = op.rhs;

    for(uint i=0; i<nelem; ++i)
    {
        out_mem[i] = op_type::process(lhs[i], rhs[i]);
    }
}

template <typename op_type>
template <typename T1, typename T2>
inline void  cwise_binary_op<op_type>::apply_inplace_plus(Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op)
{
    coda_extra_debug_funcname();

    typedef typename T1::elem_type eT;
    const uint nrows = op.nrows();
    const uint ncols = op.ncols();
    const uint nelem = op.nelem();

    out.resize(nrows, ncols);
    eT* out_mem = out.memptr();

    const Proxy<T1>& lhs = op.lhs;
    const Proxy<T2>& rhs = op.rhs;

    for(uint i=0; i<nelem; ++i)
    {
        out_mem[i] += op_type::process(lhs[i], rhs[i]);
    }
}

template <typename op_type>
template <typename T1, typename T2>
inline void  cwise_binary_op<op_type>::apply_inplace_minus(Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op)
{
    coda_extra_debug_funcname();

    typedef typename T1::elem_type eT;
    const uint nrows = op.nrows();
    const uint ncols = op.ncols();
    const uint nelem = op.nelem();

    out.resize(nrows, ncols);
    eT* out_mem = out.memptr();

    const Proxy<T1>& lhs = op.lhs;
    const Proxy<T2>& rhs = op.rhs;

    for(uint i=0; i<nelem; ++i)
    {
        out_mem[i] -= op_type::process(lhs[i], rhs[i]);
    }
}

template <typename op_type>
template <typename T1, typename T2>
inline void  cwise_binary_op<op_type>::apply_inplace_schur(Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op)
{
    coda_extra_debug_funcname();

    typedef typename T1::elem_type eT;
    const uint nrows = op.nrows();
    const uint ncols = op.ncols();
    const uint nelem = op.nelem();

    out.resize(nrows, ncols);
    eT* out_mem = out.memptr();

    const Proxy<T1>& lhs = op.lhs;
    const Proxy<T2>& rhs = op.rhs;

    for(uint i=0; i<nelem; ++i)
    {
        out_mem[i] *= op_type::process(lhs[i], rhs[i]);
    }
}

template <typename op_type>
template <typename T1, typename T2>
inline void  cwise_binary_op<op_type>::apply_inplace_div(Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op)
{
    coda_extra_debug_funcname();

    typedef typename T1::elem_type eT;
    const uint nrows = op.nrows();
    const uint ncols = op.ncols();
    const uint nelem = op.nelem();

    out.resize(nrows, ncols);
    eT* out_mem = out.memptr();

    const Proxy<T1>& lhs = op.lhs;
    const Proxy<T2>& rhs = op.rhs;

    for(uint i=0; i<nelem; ++i)
    {
        out_mem[i] /= op_type::process(lhs[i], rhs[i]);
    }
}


template <typename op_type>
template <typename eT>
inline eT cwise_binary_op<op_type>::process(const eT a, const eT b)
{
    error("cwise_binary_op::process(): unknown op_type");
}

template<> template<typename eT> const inline eT cwise_binary_op<op_plus >::process(const eT a, const eT b)
{
    return a + b;
}
template<> template<typename eT> const inline eT cwise_binary_op<op_minus>::process(const eT a, const eT b)
{
    return a - b;
}
template<> template<typename eT> const inline eT cwise_binary_op<op_schur>::process(const eT a, const eT b)
{
    return a * b;
}
template<> template<typename eT> const inline eT cwise_binary_op<op_div  >::process(const eT a, const eT b)
{
    return a / b;
}
