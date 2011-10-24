using namespace coda;

//
// Matrix
//

template <typename T1, typename op_type>
MatrixCwiseOp<T1, op_type>::MatrixCwiseOp(const MatrixBase<T1>& in_A) : lhs(in_A.derived()), val(0) {
  coda_extra_debug_funcname();
}
template <typename T1, typename op_type>
MatrixCwiseOp<T1, op_type>::MatrixCwiseOp(const MatrixBase<T1>& in_A, typename T1::elem_type in_val) : lhs(in_A.derived()), val(in_val) {
  coda_extra_debug_funcname();
}
template <typename T1, typename op_type>
MatrixCwiseOp<T1, op_type>::~MatrixCwiseOp() {
  coda_extra_debug_funcname();
}
template <typename T1, typename op_type>
uint MatrixCwiseOp<T1, op_type>::nrows() const {
  return lhs.nrows();
}
template <typename T1, typename op_type>
uint MatrixCwiseOp<T1, op_type>::ncols() const {
  return lhs.ncols();
}
template <typename T1, typename op_type>
uint MatrixCwiseOp<T1, op_type>::nelem() const {
  return lhs.nelem();
}
template<typename T1, typename op_type>
typename T1::elem_type MatrixCwiseOp<T1, op_type>::operator[](const uint i) const {
  return cwise_op<op_type>::process(lhs[i], val);
}
template<typename T1, typename op_type>
typename T1::elem_type MatrixCwiseOp<T1, op_type>::at(const uint i, const uint j) const {
  return cwise_op<op_type>::process(lhs.at(i, j), val);
}

//
// Vector
//

template <typename T1, typename op_type>
VectorCwiseOp<T1, op_type>::VectorCwiseOp(const VectorBase<T1>& in_A) : lhs(in_A.derived()), val(0) {
  coda_extra_debug_funcname();
}
template <typename T1, typename op_type>
VectorCwiseOp<T1, op_type>::VectorCwiseOp(const VectorBase<T1>& in_A, typename T1::elem_type in_val) : lhs(in_A.derived()), val(in_val) {
  coda_extra_debug_funcname();
}
template <typename T1, typename op_type>
VectorCwiseOp<T1, op_type>::~VectorCwiseOp() {
  coda_extra_debug_funcname();
}
template <typename T1, typename op_type>
uint VectorCwiseOp<T1, op_type>::nelem() const {
  return lhs.nelem();
}
template<typename T1, typename op_type>
typename T1::elem_type VectorCwiseOp<T1, op_type>::operator[](const uint i) const {
  return cwise_op<op_type>::process(lhs[i], val);
}
