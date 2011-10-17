using namespace coda;

template <typename op_type> template <typename eT> inline eT cwise_op<op_type>::process(const eT a, const eT val) {
  error("cwise_expr::process(): unknown op_type");
}

template<> template<typename eT>
const inline eT cwise_op<op_scalar_plus>::process(const eT a, const eT val) {
  return a + val;
}

template<> template<typename eT>
const inline eT cwise_op<op_scalar_minus    >::process(const eT a, const eT val) {
  return a - val;
}

template<> template<typename eT>
const inline eT cwise_op<op_scalar_times    >::process(const eT a, const eT val) {
  return a * val;
}

template<> template<typename eT>
const inline eT cwise_op<op_scalar_div_pre  >::process(const eT a, const eT val) {
  return val / a;
}

template<> template<typename eT>
const inline eT cwise_op<op_scalar_div_post >::process(const eT a, const eT val) {
  return a / val;
}

template<> template<typename eT>
const inline eT cwise_op<op_neg >::process(const eT a, const eT val) {
  return -a;
}
template<> template<typename eT>
const inline eT cwise_op<op_abs >::process(const eT a, const eT val) {
  return std::abs(a);
}
template<> template<typename eT>
const inline eT cwise_op<op_ramp>::process(const eT a, const eT val) {
  return (a > eT(0) ? a : eT(0));
}



#define __apply(FUNC,OP) \
template <typename op_type> \
template <typename T1>  \
inline void  cwise_op<op_type>::FUNC(Matrix<typename T1::elem_type>& out, const MatrixCwiseOp<T1, op_type>& op) \
{ \
    typedef typename T1::elem_type eT; \
    const uint nrows = op.nrows(); \
    const uint ncols = op.ncols(); \
    out.resize(nrows, ncols);  \
    const uint nelem = op.nelem(); \
    eT* out_mem = out.memptr(); \
    const Proxy<T1>& lhs = op.lhs;  \
    const eT val = op.val;  \
    for(uint i=0; i<nelem; ++i)  \
    {  \
        out_mem[i] OP op_type::process(lhs[i], val);  \
    } \
}\
 
__apply(apply       ,  =);
__apply(apply_inplace_plus    , +=);
__apply(apply_inplace_minus    , -=);
__apply(apply_inplace_schur    , *=);
__apply(apply_inplace_div    , /=);

#undef __apply


#define __apply(FUNC,OP) \
template <typename op_type> \
template <typename T1>  \
inline void  cwise_op<op_type>::FUNC(Vector<typename T1::elem_type>& out, const VectorCwiseOp<T1, op_type>& op) \
{ \
    typedef typename T1::elem_type eT; \
    const uint nelem = op.nelem(); \
    out.resize(nelem);  \
    eT* out_mem = out.memptr(); \
    const Proxy<T1>& lhs = op.lhs;  \
    const eT val = op.val;  \
    for(uint i=0; i<nelem; ++i)  \
    {  \
        out_mem[i] OP op_type::process(lhs[i], val);  \
    } \
}\
 
__apply(apply       ,  =);
__apply(apply_inplace_plus    , +=);
__apply(apply_inplace_minus    , -=);
__apply(apply_inplace_schur    , *=);
__apply(apply_inplace_div    , /=);

#undef __apply

