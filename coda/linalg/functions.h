#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace coda
{
// trace
template <typename T1>
inline typename T1::elem_type trace(const MatrixBase<T1>& X)
{
    coda_extra_debug_funcname();
    typedef typename T1::elem_type eT;
    const Proxy<T1> A(X.derived());
    const uint nrows = A.nrows();
    eT val = eT(0);
    for (uint i=0; i<nrows; ++i)
    {
        val += A.at(i,i);
    }
    return val;
}


// norm1
template <typename T1>
inline typename T1::elem_type norm1(const VectorBase<T1>& X)
{
    coda_extra_debug_funcname();
    typedef typename T1::elem_type eT;
    const Proxy<T1> V(X.derived());
    const uint nelem = V.nelem();
    eT acc = eT(0);
    for (uint i=0; i<nelem; ++i)
    {
        acc += std::abs(V[i]);
    }
    
    return acc;
}

// norm2
template <typename T1>
inline typename T1::elem_type norm2(const VectorBase<T1>& X)
{
    coda_extra_debug_funcname();
    typedef typename T1::elem_type eT;
    const Proxy<T1> V(X.derived());
    const uint nelem = V.nelem();
    eT acc = eT(0);
    for (uint i=0; i<nelem; ++i)
    {
        const eT tmp = V[i];
        acc += tmp*tmp;
    }
    
    return std::sqrt(acc);
}

// norm_inf
template <typename T1>
inline typename T1::elem_type norm_max(const VectorBase<T1>& X)
{
    coda_extra_debug_funcname();
    typedef typename T1::elem_type eT;
    const Proxy<T1> V(X.derived());
    const uint nelem = V.nelem();
    eT max_val = std::abs(V[0]);
    for (uint i=1; i<nelem; ++i)
    {
        const eT tmp = std::abs(V[i]);
        if(tmp > max_val) { max_val = tmp; }
    }
    
    return max_val;
}


template <typename T1>
inline const MatrixCwiseOp<T1, op_abs> abs(const MatrixBase<T1>& X)
{
    coda_extra_debug_funcname();
    return MatrixCwiseOp<T1, op_abs>(X.derived());
}

template <typename T1>
inline const VectorCwiseOp<T1, op_abs> abs(const VectorBase<T1>& X)
{
    coda_extra_debug_funcname();
    return VectorCwiseOp<T1, op_abs>(X.derived());
}

template <typename T1>
inline const MatrixCwiseOp<T1, op_ramp> ramp(const MatrixBase<T1>& X)
{
    coda_extra_debug_funcname();
    return MatrixCwiseOp<T1, op_ramp>(X.derived());
}

template <typename T1>
inline const VectorCwiseOp<T1, op_ramp> ramp(const VectorBase<T1>& X)
{
    coda_extra_debug_funcname();
    return VectorCwiseOp<T1, op_ramp>(X.derived());
}


// matrix inverse
template <typename T1>
inline const MatrixOp<T1, op_inv> inv(const MatrixBase<T1>& X)
{
    coda_extra_debug_funcname();
    return MatrixOp<T1, op_inv>(X.derived());
}

// inv(inv(X)) = X
template <typename T1>
inline const T1& inv(const MatrixOp<T1, op_inv>& X)
{
    coda_extra_debug_funcname();
    return X.lhs;
}

// matrix transpose
template <typename T1>
inline const MatrixOp<T1, op_trans> trans(const MatrixBase<T1>& X)
{
    coda_extra_debug_funcname();
    return MatrixOp<T1, op_trans>(X.derived());
}



} /* namespace coda */


#endif /* FUNCTIONS_H */
