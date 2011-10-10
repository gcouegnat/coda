using namespace coda;

template <typename op_type>
template <typename eT>
inline eT cwise_expr<op_type>::process(const eT a, const eT b)
{
    error("cwise_expr::process(): unknown op_type");
}

template<> template<typename eT> const inline eT cwise_expr<op_plus >::process(const eT a, const eT b)
{
    return a + b;
}
template<> template<typename eT> const inline eT cwise_expr<op_minus>::process(const eT a, const eT b)
{
    return a - b;
}
template<> template<typename eT> const inline eT cwise_expr<op_schur>::process(const eT a, const eT b)
{
    return a * b;
}
template<> template<typename eT> const inline eT cwise_expr<op_div  >::process(const eT a, const eT b)
{
    return a / b;
}

//
// Matrix
//
#define __apply(FUNC,OP) \
template <typename op_type> \
template <typename T1, typename T2> \
inline void  cwise_expr<op_type>::FUNC(Matrix<typename T1::elem_type>& out, const MatrixCwiseExpr<T1, T2, op_type>& op) \
{ \
    coda_extra_debug_funcname(); \
    typedef typename T1::elem_type eT; \
    const uint nrows = op.nrows(); \
    const uint ncols = op.ncols(); \
    const uint nelem = op.nelem(); \
    out.resize(nrows, ncols); \
    eT* out_mem = out.memptr(); \
    const Proxy<T1>& lhs = op.lhs; \
    const Proxy<T2>& rhs = op.rhs; \
    for(uint i=0; i<nelem; ++i) \
    { \
        out_mem[i] OP op_type::process(lhs[i], rhs[i]); \
    } \
} \

__apply(apply               ,  =);
__apply(apply_inplace_plus  , +=);
__apply(apply_inplace_minus , -=);
__apply(apply_inplace_schur , *=);
__apply(apply_inplace_div   , /=);

#undef __apply

//
// Vector
//
#define __apply(FUNC,OP) \
template <typename op_type> \
template <typename T1, typename T2> \
inline void  cwise_expr<op_type>::FUNC(Vector<typename T1::elem_type>& out, const VectorCwiseExpr<T1, T2, op_type>& op) \
{ \
    coda_extra_debug_funcname(); \
    typedef typename T1::elem_type eT; \
    const uint nelem = op.nelem(); \
    out.resize(nelem); \
    eT* out_mem = out.memptr(); \
    const Proxy<T1>& lhs = op.lhs; \
    const Proxy<T2>& rhs = op.rhs; \
    for(uint i=0; i<nelem; ++i) \
    { \
        out_mem[i] OP op_type::process(lhs[i], rhs[i]); \
    } \
} \

__apply(apply               , =);
__apply(apply_inplace_plus  , +=);
__apply(apply_inplace_minus , -=);
__apply(apply_inplace_schur , *=);
__apply(apply_inplace_div   , /=);

#undef __apply


