using namespace coda;

///////////////////////////////////////////////////////////////////////////////
// MatrixCwise Expr

template<typename T1, typename T2, typename op_type>
MatrixCwiseExpr<T1, T2, op_type>::MatrixCwiseExpr(const MatrixBase<T1>& in_A, const MatrixBase<T2>& in_B)
  : lhs(in_A.derived()), rhs(in_B.derived()) {
  coda_extra_debug_funcname();
}

template<typename T1, typename T2, typename op_type>
MatrixCwiseExpr<T1, T2, op_type>::~MatrixCwiseExpr() {
  coda_extra_debug_funcname();
}

template<typename T1, typename T2, typename op_type>
uint MatrixCwiseExpr<T1, T2, op_type>::nrows() const {
  return lhs.nrows();
}

template<typename T1, typename T2, typename op_type>
uint MatrixCwiseExpr<T1, T2, op_type>::ncols() const {
  return lhs.ncols();
}

template<typename T1, typename T2, typename op_type>
uint MatrixCwiseExpr<T1, T2, op_type>::nelem() const {
  return lhs.nelem();
}

template<typename T1, typename T2, typename op_type>
typename T1::elem_type MatrixCwiseExpr<T1, T2, op_type>::operator[](const uint i) const {
  return cwise_expr<op_type>::process(lhs[i], rhs[i]);
}

template<typename T1, typename T2, typename op_type>
typename T1::elem_type MatrixCwiseExpr<T1, T2, op_type>::at(const uint i, const uint j) const {
  return cwise_expr<op_type>::process(lhs.at(i, j), rhs.at(i, j));
}

///////////////////////////////////////////////////////////////////////////////
// VectorCwise Expr

template<typename T1, typename T2, typename op_type>
VectorCwiseExpr<T1, T2, op_type>::VectorCwiseExpr(const VectorBase<T1>& in_A, const VectorBase<T2>& in_B)
  : lhs(in_A.derived()), rhs(in_B.derived()) {
  coda_extra_debug_funcname();
}

template<typename T1, typename T2, typename op_type>
VectorCwiseExpr<T1, T2, op_type>::~VectorCwiseExpr() {
  coda_extra_debug_funcname();
}

template<typename T1, typename T2, typename op_type>
uint VectorCwiseExpr<T1, T2, op_type>::nelem() const {
  return lhs.nelem();
}

template<typename T1, typename T2, typename op_type>
typename T1::elem_type VectorCwiseExpr<T1, T2, op_type>::operator[](const uint i) const {
  return cwise_expr<op_type>::process(lhs[i], rhs[i]);
}

