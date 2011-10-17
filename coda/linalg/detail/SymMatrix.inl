using namespace coda;

#include <iostream>
#include <iomanip>
#include <coda/utils/access.h>
// 
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline SymMatrix<eT>::~Matrix() {
//   coda_extra_debug_funcname();
//   if (nelem > 0) {
//     delete [] mem;
//   }
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline SymMatrix<eT>::Matrix()
//   : nrows(0), ncols(0), nelem(0), mem(0) {
//   coda_extra_debug_funcname();
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline SymMatrix<eT>::Matrix(uint in_rows, uint in_cols)
//   : nrows(0), ncols(0), nelem(0) , mem(0) {
//   coda_extra_debug_funcname();
//   init(in_rows, in_cols);
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline eT* SymMatrix<eT>::memptr() {
//   return const_cast<eT*>(mem);
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const eT* SymMatrix<eT>::memptr() const {
//   return mem;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline void SymMatrix<eT>::init(uint in_rows, uint in_cols) {
//   coda_extra_debug_funcname();
//   if (nelem > 0) {
//     delete [] mem;
//   }
//   access::rw(nrows) = in_rows;
//   access::rw(ncols) = in_cols;
//   access::rw(nelem) = in_rows * in_cols;
//   access::rw(mem) = new eT[nelem];
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator+=(const eT val) {
//   coda_extra_debug_funcname();
//   arrayops::inplace_plus(memptr(), val, nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator-=(const eT val) {
//   coda_extra_debug_funcname();
//   arrayops::inplace_minus(memptr(), val, nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator*=(const eT val) {
//   coda_extra_debug_funcname();
//   arrayops::inplace_mult(memptr(), val, nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator/=(const eT val) {
//   coda_extra_debug_funcname();
//   arrayops::inplace_div(memptr(), val, nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline SymMatrix<eT>::Matrix(const SymMatrix<eT>& m)
//   : nrows(0), ncols(0), nelem(0), mem(mem) {
//   coda_extra_debug_funcname();
//   if (this != &m) {
//     init(m.nrows, m.ncols);
//     arrayops::copy(memptr(), m.mem, m.nelem);
//   }
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator=(const Matrix& m) {
//   coda_extra_debug_funcname();
//   init(m.nrows, m.ncols);
//   arrayops::copy(memptr(), m.mem, m.nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator+=(const Matrix& m) {
//   coda_extra_debug_funcname();
//   arrayops::inplace_plus(memptr(), m.memptr(), nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator-=(const Matrix& m) {
//   coda_extra_debug_funcname();
//   arrayops::inplace_minus(memptr(), m.memptr(), nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator%=(const Matrix& m) {
//   coda_extra_debug_funcname();
//   arrayops::inplace_mult(memptr(), m.memptr(), nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator/=(const Matrix& m) {
//   coda_extra_debug_funcname();
//   arrayops::inplace_div(memptr(), m.memptr(), nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline eT& SymMatrix<eT>::operator [](const uint i) {
//   return access::rw(mem[i]);
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline eT  SymMatrix<eT>::operator [](const uint i) const {
//   return mem[i];
// }
//-----------------------------------------------------------------------------
template <typename eT>
inline eT& SymMatrix<eT>::at(const uint i, const uint j) {
  if(i>j) 
    return Matrix<eT>::at(i,j);
  else
    return Matrix<eT>::at(j,i);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline eT  SymMatrix<eT>::at(const uint i, const uint j) const {
  return mem[i * ncols + j];
}
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline eT& SymMatrix<eT>::operator()(const uint i, const uint j) {
//   return access::rw(mem[i * ncols + j]);
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline eT  SymMatrix<eT>::operator()(const uint i, const uint j) const {
//   return mem[i * ncols + j];
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::fill(const eT val) {
//   coda_extra_debug_funcname();
//   arrayops::inplace_set(memptr(), val, nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::zeros() {
//   coda_extra_debug_funcname();
//   arrayops::inplace_set(memptr(), eT(0), nelem);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::ones() {
//   coda_extra_debug_funcname();
//   arrayops::inplace_set(memptr(), eT(1), nelem);
//   return *this;
// }
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::randu() {
//   coda_extra_debug_funcname();
//   for (uint i = 0; i < nelem; ++i) {
//     access::rw(mem[i]) = coda::randu<eT>();
//   }
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline void SymMatrix<eT>::resize(uint in_rows, uint in_cols) {
//   coda_extra_debug_funcname();
//   if ((nrows != in_rows) || (ncols != in_cols)) {
//     init(in_rows, in_cols);
//   }
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline void SymMatrix<eT>::reshape(uint in_rows, uint in_cols) {
//   coda_extra_debug_funcname();
//   // coda_debug_function_not_implemented();
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// inline uint SymMatrix<eT>::size() {
//   return nelem;
// }
// template <typename eT>
// inline const SymMatrix<eT>& SymMatrix<eT>::symmetrize() {
//   coda_extra_debug_funcname();
//   for (uint i = 0; i < nrows; ++i) {
//     for (uint j = 0; j < ncols; ++j) {
//       const eT val = 0.5 * ((*this)(i, j) + (*this)(j, i));
//       (*this)(i, j) = (*this)(j, i) = val;
//     }
//   }
//   return *this;
// }
// //-----------------------------------------------------------------------------
template <typename eT>
inline void SymMatrix<eT>::print(std::string text) {
  coda_extra_debug_funcname();
  if (text.length() > 0) {
    std::cout << text << " ";
  }
  std::cout << "<Symmetic matrix of size " << nrows << " by " << ncols <<">\n";
  prettyprint::print(std::cout, *this);
}
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename op_type>
// inline SymMatrix<eT>::Matrix(const MatrixCwiseOp<T1, op_type>& op) : nrows(0), ncols(0), nelem(0) , mem(0) {
//   cwise_op<op_type>::apply(*this, op);
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator=(const MatrixCwiseOp<T1, op_type>& op) {
//   cwise_op<op_type>::apply(*this, op);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator+=(const MatrixCwiseOp<T1, op_type>& op) {
//   cwise_op<op_type>::apply_inplace_plus(*this, op);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator-=(const MatrixCwiseOp<T1, op_type>& op) {
//   cwise_op<op_type>::apply_inplace_minus(*this, op);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator%=(const MatrixCwiseOp<T1, op_type>& op) {
//   cwise_op<op_type>::apply_inplace_schur(*this, op);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator/=(const MatrixCwiseOp<T1, op_type>& op) {
//   cwise_op<op_type>::apply_inplace_div(*this, op);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename T2, typename op_type>
// inline SymMatrix<eT>::Matrix(const MatrixCwiseExpr<T1, T2, op_type>& op) : nrows(0), ncols(0), nelem(0) , mem(mem) {
//   cwise_expr<op_type>::apply(*this, op);
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename T2, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator=(const MatrixCwiseExpr<T1, T2, op_type>& op) {
//   cwise_expr<op_type>::apply(*this, op);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename T2, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator+=(const MatrixCwiseExpr<T1, T2, op_type>& op) {
//   cwise_expr<op_type>::apply_inplace_plus(*this, op);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename T2, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator-=(const MatrixCwiseExpr<T1, T2, op_type>& op) {
//   cwise_expr<op_type>::apply_inplace_minus(*this, op);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename T2, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator%=(const MatrixCwiseExpr<T1, T2, op_type>& op) {
//   cwise_expr<op_type>::apply_inplace_schur(*this, op);
//   return *this;
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename T2, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator/=(const MatrixCwiseExpr<T1, T2, op_type>& op) {
//   cwise_expr<op_type>::apply_inplace_div(*this, op);
//   return *this;
// }
// 
// //-----------------------------------------------------------------------------
// // MatrixOp
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename op_type>
// inline SymMatrix<eT>::Matrix(const MatrixOp<T1, op_type>& op) : nrows(0), ncols(0), nelem(0), mem(mem) {
//   coda_extra_debug_funcname();
//   op_type::apply(*this, op);
// }
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator=(const MatrixOp<T1, op_type>& op) {
//   coda_extra_debug_funcname();
//   op_type::apply(*this, op);
//   return *this;
// }
// 
// //-----------------------------------------------------------------------------
// // MatrixExpr
// //-----------------------------------------------------------------------------
// template <typename eT>
// template <typename T1, typename T2, typename op_type>
// inline SymMatrix<eT>::Matrix(const MatrixExpr<T1, T2, op_type>& op) : nrows(0), ncols(0), nelem(0) , mem(mem) {
//   coda_extra_debug_funcname();
//   op_type::apply(*this, op);
// }
// 
// template <typename eT>
// template <typename T1, typename T2, typename op_type>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator= (const MatrixExpr<T1, T2, op_type>& op) {
//   coda_extra_debug_funcname();
//   op_type::apply(*this, op);
//   return *this;
// }
// 
// template <typename eT>
// template <typename T1, typename T2>
// inline const SymMatrix<eT>& SymMatrix<eT>::operator+= (const MatrixExpr<T1, T2, op_times>& op) {
//   coda_extra_debug_funcname();
//   op_times::apply_inplace_plus(*this, op);
//   return *this;
// }
// 
