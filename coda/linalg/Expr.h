#ifndef BINARYOP_H
#define BINARYOP_H

namespace coda {

template <typename T1, typename T2, typename op_type>
class MatrixExpr : public MatrixBase< MatrixExpr<T1, T2, op_type> > {
  public:
    typedef typename T1::elem_type elem_type;

    const T1& lhs;
    const T2& rhs;

    inline ~MatrixExpr();
    inline MatrixExpr(const T1& in_A, const T2& in_B);

};

template <typename T1, typename T2, typename op_type>
class VectorExpr : public VectorBase< VectorExpr<T1, T2, op_type> > {
  public:
    typedef typename T1::elem_type elem_type;

    const T1& lhs;
    const T2& rhs;

    inline ~VectorExpr();
    inline VectorExpr(const T1& in_A, const T2& in_B);

};


}    // namespace coda

#endif /* BINARYOP_H */
