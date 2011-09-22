#ifndef EOP_CORE_H
#define EOP_CORE_H

namespace coda
{

template <typename op_type>
struct cwise_binary_op
{
    template <typename T1, typename T2> inline static void apply(Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op);

    template <typename T1, typename T2> inline static void apply_inplace_plus (Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op);
    template <typename T1, typename T2> inline static void apply_inplace_minus(Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op);
    template <typename T1, typename T2> inline static void apply_inplace_schur(Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op);
    template <typename T1, typename T2> inline static void apply_inplace_div  (Matrix<typename T1::elem_type>& out, const CwiseBinaryOp<T1, T2, op_type>& op);

    template <typename eT> inline static eT process(const eT a, const eT b);

};


class op_plus	: public cwise_binary_op<op_plus> 	{};
class op_minus	: public cwise_binary_op<op_minus>	{};
class op_schur	: public cwise_binary_op<op_schur>	{};
class op_div	: public cwise_binary_op<op_div>		{};

} /* end of namespace coda */


#endif /* end of include guard: EOP_CORE_H */
