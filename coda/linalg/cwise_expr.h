#ifndef EOP_CORE_H
#define EOP_CORE_H

namespace coda {

template <typename op_type>
struct cwise_expr {
  template <typename T1, typename T2> inline static void apply(Matrix<typename T1::elem_type>& out, const MatrixCwiseExpr<T1, T2, op_type>& op);
  template <typename T1, typename T2> inline static void apply_inplace_plus(Matrix<typename T1::elem_type>& out, const MatrixCwiseExpr<T1, T2, op_type>& op);
  template <typename T1, typename T2> inline static void apply_inplace_minus(Matrix<typename T1::elem_type>& out, const MatrixCwiseExpr<T1, T2, op_type>& op);
  template <typename T1, typename T2> inline static void apply_inplace_schur(Matrix<typename T1::elem_type>& out, const MatrixCwiseExpr<T1, T2, op_type>& op);
  template <typename T1, typename T2> inline static void apply_inplace_div(Matrix<typename T1::elem_type>& out, const MatrixCwiseExpr<T1, T2, op_type>& op);

  template <typename T1, typename T2> inline static void apply(Vector<typename T1::elem_type>& out, const VectorCwiseExpr<T1, T2, op_type>& op);
  template <typename T1, typename T2> inline static void apply_inplace_plus(Vector<typename T1::elem_type>& out, const VectorCwiseExpr<T1, T2, op_type>& op);
  template <typename T1, typename T2> inline static void apply_inplace_minus(Vector<typename T1::elem_type>& out, const VectorCwiseExpr<T1, T2, op_type>& op);
  template <typename T1, typename T2> inline static void apply_inplace_schur(Vector<typename T1::elem_type>& out, const VectorCwiseExpr<T1, T2, op_type>& op);
  template <typename T1, typename T2> inline static void apply_inplace_div(Vector<typename T1::elem_type>& out, const VectorCwiseExpr<T1, T2, op_type>& op);

  template <typename eT> inline static eT process(const eT a, const eT b);

};


class op_plus   : public cwise_expr<op_plus>     {};
class op_minus  : public cwise_expr<op_minus>    {};
class op_schur  : public cwise_expr<op_schur>    {};
class op_div    : public cwise_expr<op_div>      {};

} /* namespace coda */


#endif /* EOP_CORE_H */
