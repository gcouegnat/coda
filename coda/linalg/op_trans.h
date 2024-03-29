#ifndef OP_TRANS_H
#define OP_TRANS_H

namespace coda {
class op_trans {
  public:
    template <typename T1>
    inline static void apply(Matrix<typename T1::elem_type>& out, const MatrixOp<T1, op_trans>& in);

    template <typename eT>
    inline static void apply(Matrix<eT>& out, const Matrix<eT>& in);


};

}    // namespace coda

#endif /* OP_TRANS_H */
