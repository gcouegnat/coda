#ifndef OPERATORS_H
#define OPERATORS_H

namespace coda {

//
// A, B : matrix or vector
// k : scalar
//

//
// MatrixCwiseExpr +, -, %, /
//

// A + B
template <typename T1, typename T2>
inline const MatrixCwiseExpr<T1, T2, op_plus> operator+ (const MatrixBase<T1>& lhs, const MatrixBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return MatrixCwiseExpr<T1, T2, op_plus>(lhs.derived(), rhs.derived());
}

// A - B
template <typename T1, typename T2>
inline const MatrixCwiseExpr<T1, T2, op_minus> operator- (const MatrixBase<T1>& lhs, const MatrixBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return MatrixCwiseExpr<T1, T2, op_minus>(lhs.derived(), rhs.derived());
}

// A % B
template <typename T1, typename T2>
inline const MatrixCwiseExpr<T1, T2, op_schur> operator% (const MatrixBase<T1>& lhs, const MatrixBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return MatrixCwiseExpr<T1, T2, op_schur>(lhs.derived(), rhs.derived());
}

// A / B
template <typename T1, typename T2>
inline const MatrixCwiseExpr<T1, T2, op_div> operator/ (const MatrixBase<T1>& lhs, const MatrixBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return MatrixCwiseExpr<T1, T2, op_div>(lhs.derived(), rhs.derived());
}

//
// VectorCwiseExpr +, -, %, /
//

// A + B
template <typename T1, typename T2>
inline const VectorCwiseExpr<T1, T2, op_plus> operator+ (const VectorBase<T1>& lhs, const VectorBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return VectorCwiseExpr<T1, T2, op_plus>(lhs.derived(), rhs.derived());
}

// A - B
template <typename T1, typename T2>
inline const VectorCwiseExpr<T1, T2, op_minus> operator- (const VectorBase<T1>& lhs, const VectorBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return VectorCwiseExpr<T1, T2, op_minus>(lhs.derived(), rhs.derived());
}

// A % B
template <typename T1, typename T2>
inline const VectorCwiseExpr<T1, T2, op_schur> operator% (const VectorBase<T1>& lhs, const VectorBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return VectorCwiseExpr<T1, T2, op_schur>(lhs.derived(), rhs.derived());
}

// A * B
template <typename T1, typename T2>
inline const VectorCwiseExpr<T1, T2, op_schur> operator* (const VectorBase<T1>& lhs, const VectorBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return VectorCwiseExpr<T1, T2, op_schur>(lhs.derived(), rhs.derived());
}


// A / B
template <typename T1, typename T2>
inline const VectorCwiseExpr<T1, T2, op_div>
operator/ (const VectorBase<T1>& lhs, const VectorBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return VectorCwiseExpr<T1, T2, op_div>(lhs.derived(), rhs.derived());
}

//
// MatrixCwiseOp +, -, %, /, *
//

// A + k
template <typename T1>
inline const MatrixCwiseOp<T1, op_scalar_plus> operator+ (const MatrixBase<T1>& lhs, const typename T1::elem_type val) {
  coda_extra_debug_funcname();
  return MatrixCwiseOp<T1, op_scalar_plus>(lhs.derived(), val);
}

// k + A
template <typename T1>
inline const MatrixCwiseOp<T1, op_scalar_plus> operator+ (const typename T1::elem_type val, const MatrixBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return MatrixCwiseOp<T1, op_scalar_plus>(lhs.derived(), val);
}

// A - k
template <typename T1>
inline const MatrixCwiseOp<T1, op_scalar_minus> operator- (const MatrixBase<T1>& lhs, const typename T1::elem_type val) {
  coda_extra_debug_funcname();
  return MatrixCwiseOp<T1, op_scalar_minus>(lhs.derived(), val);
}

// k - A
template <typename T1>
inline const MatrixCwiseOp<T1, op_scalar_minus> operator- (const typename T1::elem_type val, const MatrixBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return MatrixCwiseOp<T1, op_scalar_minus>(lhs.derived(), val);
}

// A * k
template <typename T1>
inline const MatrixCwiseOp<T1, op_scalar_times> operator* (const MatrixBase<T1>& lhs, const typename T1::elem_type val) {
  coda_extra_debug_funcname();
  return MatrixCwiseOp<T1, op_scalar_times>(lhs.derived(), val);
}

// k * A
template <typename T1>
inline const MatrixCwiseOp<T1, op_scalar_times> operator* (const typename T1::elem_type val, const MatrixBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return MatrixCwiseOp<T1, op_scalar_times>(lhs.derived(), val);
}

// A / k
template <typename T1>
inline const MatrixCwiseOp<T1, op_scalar_div_post> operator/ (const MatrixBase<T1>& lhs, const typename T1::elem_type val) {
  coda_extra_debug_funcname();
  return MatrixCwiseOp<T1, op_scalar_div_post>(lhs.derived(), val);
}

// k / A
template <typename T1>
inline const MatrixCwiseOp<T1, op_scalar_div_pre> operator/ (const typename T1::elem_type val, const MatrixBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return MatrixCwiseOp<T1, op_scalar_div_pre>(lhs.derived(), val);
}


// -A
template <typename T1>
inline const MatrixCwiseOp<T1, op_neg> operator- (const MatrixBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return MatrixCwiseOp<T1, op_neg>(lhs.derived());
}

//
// VectorCwiseOp +, -, %, /, *
//

// A + k
template <typename T1>
inline const VectorCwiseOp<T1, op_scalar_plus> operator+ (const VectorBase<T1>& lhs, const typename T1::elem_type val) {
  coda_extra_debug_funcname();
  return VectorCwiseOp<T1, op_scalar_plus>(lhs.derived(), val);
}

// k + A
template <typename T1>
inline const VectorCwiseOp<T1, op_scalar_plus> operator+ (const typename T1::elem_type val, const VectorBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return VectorCwiseOp<T1, op_scalar_plus>(lhs.derived(), val);
}

// A - k
template <typename T1>
inline const VectorCwiseOp<T1, op_scalar_minus> operator- (const VectorBase<T1>& lhs, const typename T1::elem_type val) {
  coda_extra_debug_funcname();
  return VectorCwiseOp<T1, op_scalar_minus>(lhs.derived(), val);
}

// k - A
template <typename T1>
inline const VectorCwiseOp<T1, op_scalar_minus> operator- (const typename T1::elem_type val, const VectorBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return VectorCwiseOp<T1, op_scalar_minus>(lhs.derived(), val);
}

// A * k
template <typename T1>
inline const VectorCwiseOp<T1, op_scalar_times> operator* (const VectorBase<T1>& lhs, const typename T1::elem_type val) {
  coda_extra_debug_funcname();
  return VectorCwiseOp<T1, op_scalar_times>(lhs.derived(), val);
}

// k * A
template <typename T1>
inline const VectorCwiseOp<T1, op_scalar_times> operator* (const typename T1::elem_type val, const VectorBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return VectorCwiseOp<T1, op_scalar_times>(lhs.derived(), val);
}

// A / k
template <typename T1>
inline const VectorCwiseOp<T1, op_scalar_div_post> operator/ (const VectorBase<T1>& lhs, const typename T1::elem_type val) {
  coda_extra_debug_funcname();
  return VectorCwiseOp<T1, op_scalar_div_post>(lhs.derived(), val);
}

// k / A
template <typename T1>
inline const VectorCwiseOp<T1, op_scalar_div_pre> operator/ (const typename T1::elem_type val, const VectorBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return VectorCwiseOp<T1, op_scalar_div_pre>(lhs.derived(), val);
}


// -A
template <typename T1>
inline const VectorCwiseOp<T1, op_neg> operator- (const VectorBase<T1>& lhs) {
  coda_extra_debug_funcname();
  return VectorCwiseOp<T1, op_neg>(lhs.derived());
}
//
// Expr *
//
template <typename T1, typename T2>
inline const MatrixExpr<T1, T2, op_times> operator* (const MatrixBase<T1>& lhs, const MatrixBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return MatrixExpr<T1, T2, op_times>(lhs.derived(), rhs.derived());
}

template <typename T1, typename T2>
inline const VectorExpr<T1, T2, op_times> operator* (const MatrixBase<T1>& lhs, const VectorBase<T2>& rhs) {
  coda_extra_debug_funcname();
  return VectorExpr<T1, T2, op_times>(lhs.derived(), rhs.derived());
}


} /* namespace coda */

#endif /* OPERATORS_H */
