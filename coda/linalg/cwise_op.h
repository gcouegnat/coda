#ifndef CWISE_OP_H
#define CWISE_OP_H

namespace coda {

template <typename op_type>
class cwise_op {
public:

  template <typename T1> inline static void apply(Matrix<typename T1::elem_type>& out, const MatrixCwiseOp<T1, op_type>& op);
  template <typename T1> inline static void apply_inplace_plus(Matrix<typename T1::elem_type>& out, const MatrixCwiseOp<T1, op_type>& op);
  template <typename T1> inline static void apply_inplace_minus(Matrix<typename T1::elem_type>& out, const MatrixCwiseOp<T1, op_type>& op);
  template <typename T1> inline static void apply_inplace_schur(Matrix<typename T1::elem_type>& out, const MatrixCwiseOp<T1, op_type>& op);
  template <typename T1> inline static void apply_inplace_div(Matrix<typename T1::elem_type>& out, const MatrixCwiseOp<T1, op_type>& op);

  template <typename T1> inline static void apply(Vector<typename T1::elem_type>& out, const VectorCwiseOp<T1, op_type>& op);
  template <typename T1> inline static void apply_inplace_plus(Vector<typename T1::elem_type>& out, const VectorCwiseOp<T1, op_type>& op);
  template <typename T1> inline static void apply_inplace_minus(Vector<typename T1::elem_type>& out, const VectorCwiseOp<T1, op_type>& op);
  template <typename T1> inline static void apply_inplace_schur(Vector<typename T1::elem_type>& out, const VectorCwiseOp<T1, op_type>& op);
  template <typename T1> inline static void apply_inplace_div(Vector<typename T1::elem_type>& out, const VectorCwiseOp<T1, op_type>& op);

  template <typename eT> inline static eT process(const eT a, const eT val);
};


class op_scalar_plus        :  public cwise_op<op_scalar_plus    >   {};
class op_scalar_minus       :  public cwise_op<op_scalar_minus   >   {};
class op_scalar_times       :  public cwise_op<op_scalar_times   >   {};
class op_scalar_div_pre     :  public cwise_op<op_scalar_div_pre >   {};
class op_scalar_div_post    :  public cwise_op<op_scalar_div_post>   {};
class op_neg                :  public cwise_op<op_neg            >   {};
class op_abs                :  public cwise_op<op_abs            >   {};
class op_ramp               :  public cwise_op<op_ramp           >   {};

} /* namespace coda */



#endif /* CWISE_OP_H */
