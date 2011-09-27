#ifndef OPERATORS_H
#define OPERATORS_H

namespace coda
{

//
// A, B : matrix or vector
// k : scalar
//

//
// CwiseBinaryOp +, -, %, /
//

// A + B
template <typename T1, typename T2>
inline const CwiseBinaryOp<T1,T2, op_plus> operator+ (const Base<T1>& lhs, const Base<T2>& rhs)
{
    coda_extra_debug_funcname();
    return CwiseBinaryOp<T1,T2,op_plus>(lhs.get_ref(), rhs.get_ref());
}

// A - B
template <typename T1, typename T2>
inline const CwiseBinaryOp<T1,T2, op_minus> operator- (const Base<T1>& lhs, const Base<T2>& rhs)
{
    coda_extra_debug_funcname();
    return CwiseBinaryOp<T1,T2,op_minus>(lhs.get_ref(), rhs.get_ref());
}

// A % B
template <typename T1, typename T2>
inline const CwiseBinaryOp<T1,T2, op_schur> operator% (const Base<T1>& lhs, const Base<T2>& rhs)
{
    coda_extra_debug_funcname();
    return CwiseBinaryOp<T1,T2,op_schur>(lhs.get_ref(), rhs.get_ref());
}

// A / B
template <typename T1, typename T2>
inline const CwiseBinaryOp<T1,T2, op_div> operator/ (const Base<T1>& lhs, const Base<T2>& rhs)
{
    coda_extra_debug_funcname();
    return CwiseBinaryOp<T1,T2,op_div>(lhs.get_ref(), rhs.get_ref());
}

//
// CwiseOp +, -, %, /, *
//

// A + k
template <typename T1>
inline const CwiseOp<T1, op_scalar_plus> operator+ (const Base<T1>& lhs, const typename T1::elem_type val)
{
    coda_extra_debug_funcname();
    return CwiseOp<T1,op_scalar_plus>(lhs.get_ref(), val);
}

// k + A
template <typename T1>
inline const CwiseOp<T1, op_scalar_plus> operator+ (const typename T1::elem_type val, const Base<T1>& lhs)
{
    coda_extra_debug_funcname();
    return CwiseOp<T1,op_scalar_plus>(lhs.get_ref(), val);
}

// A - k
template <typename T1>
inline const CwiseOp<T1, op_scalar_minus> operator- (const Base<T1>& lhs, const typename T1::elem_type val)
{
    coda_extra_debug_funcname();
    return CwiseOp<T1,op_scalar_minus>(lhs.get_ref(), val);
}

// k - A
template <typename T1>
inline const CwiseOp<T1, op_scalar_minus> operator- (const typename T1::elem_type val, const Base<T1>& lhs)
{
    coda_extra_debug_funcname();
    return CwiseOp<T1,op_scalar_minus>(lhs.get_ref(), val);
}

// A * k
template <typename T1>
inline const CwiseOp<T1, op_scalar_times> operator* (const Base<T1>& lhs, const typename T1::elem_type val)
{
    coda_extra_debug_funcname();
    return CwiseOp<T1,op_scalar_times>(lhs.get_ref(), val);
}

// k * A
template <typename T1>
inline const CwiseOp<T1, op_scalar_times> operator* (const typename T1::elem_type val, const Base<T1>& lhs)
{
    coda_extra_debug_funcname();
    return CwiseOp<T1,op_scalar_times>(lhs.get_ref(), val);
}

// A / k
template <typename T1>
inline const CwiseOp<T1, op_scalar_div_post> operator/ (const Base<T1>& lhs, const typename T1::elem_type val)
{
    coda_extra_debug_funcname();
    return CwiseOp<T1,op_scalar_div_post>(lhs.get_ref(), val);
}

// k / A
template <typename T1>
inline const CwiseOp<T1, op_scalar_div_pre> operator/ (const typename T1::elem_type val, const Base<T1>& lhs)
{
    coda_extra_debug_funcname();
    return CwiseOp<T1,op_scalar_div_pre>(lhs.get_ref(), val);
}


// -A
template <typename T1>
inline const CwiseOp<T1, op_neg> operator- (const Base<T1>& lhs)
{
    coda_extra_debug_funcname();
    return CwiseOp<T1,op_neg>(lhs.get_ref());
}


//
// BinaryOp *
//
template <typename T1, typename T2>
inline const BinaryOp<T1, T2, op_times> operator* (const Base<T1>& lhs, const Base<T2>& rhs)
{
	coda_extra_debug_funcname();
	return BinaryOp<T1, T2, op_times>(lhs.get_ref(), rhs.get_ref());
	
}

} /* end of namespace coda */

#endif /* end of include guard: OPERATORS_H */
