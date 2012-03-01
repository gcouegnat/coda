// This file is part of CODA library
// Copyright 2011,2012 Guillaume COUEGNAT

#ifndef CODA_LINALG_EXPR_H_
#define CODA_LINALG_EXPR_H_

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


}  // namespace coda

#endif  // CODA_LINALG_EXPR_H_

