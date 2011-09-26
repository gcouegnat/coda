#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace coda
{
// trace
template <typename T1>
inline typename T1::elem_type trace(const Base<T1>& X)
{
    debug_sigprint();

    typedef typename T1::elem_type eT;

    const Proxy<T1> A(X.get_ref());
    const uint nrows = A.nrows();

    eT val = eT(0);
    for (uint i=0; i<nrows; ++i)
    {
        val += A.at(i,i);
    }

    return val;
}


template <typename T1>
inline const CwiseOp<T1, op_abs> abs(const Base<T1>& X)
{
    debug_sigprint();
    return CwiseOp<T1, op_abs>(X.get_ref());
}

template <typename T1>
inline const CwiseOp<T1, op_ramp> ramp(const Base<T1>& X)
{
    debug_sigprint();
    return CwiseOp<T1, op_ramp>(X.get_ref());
}

template <typename T1>
inline const Op<T1, op_inv> inv(const Base<T1>& X)
{
	debug_sigprint();
	return Op<T1, op_inv>(X.get_ref());
}

template <typename T1>
inline const T1& inv(const Op<T1, op_inv>& X)
{
	debug_sigprint();
	return X.lhs;
}

template <typename T1>
inline const Op<T1, op_trans> trans(const Base<T1>& X)
{
	debug_sigprint();
	return Op<T1, op_trans>(X.get_ref());
}



} /* end of namespace coda */


#endif /* end of include guard: FUNCTIONS_H */
