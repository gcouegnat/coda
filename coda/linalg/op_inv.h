#ifndef OP_INV_H
#define OP_INV_H

namespace coda
{
class op_inv
{
public:
    template <typename T1>
    inline static void apply(Matrix<typename T1::elem_type>& out, const MatrixOp<T1, op_inv>& in);
};

} /* namespace coda */

#endif /* OP_INV_H */
