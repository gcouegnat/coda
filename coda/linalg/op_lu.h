#ifndef OP_LU_H
#define OP_LU_H

  namespace coda {
  class op_lu {
    public:
      template <typename T1>
      inline static void apply(Matrix<typename T1::elem_type>& out, const MatrixOp<T1, op_lu>& in);
  };

  }    // namespace coda

#endif /* OP_LU_H */
