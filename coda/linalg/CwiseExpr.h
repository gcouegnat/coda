#ifndef CWISEBINARYOP_H
#define CWISEBINARYOP_H

namespace coda {

template <typename T1, typename T2, typename op_type>
class MatrixCwiseExpr : public MatrixBase< MatrixCwiseExpr<T1, T2, op_type> > {
  public:
    typedef typename T1::elem_type    elem_type;

    const Proxy<T1> lhs;
    const Proxy<T2> rhs;

    inline ~MatrixCwiseExpr();
    inline explicit MatrixCwiseExpr(const MatrixBase<T1>& in_A, const MatrixBase<T2>& in_B);

    uint nrows() const;
    uint ncols() const;
    uint nelem() const;

    elem_type operator[](const uint i) const;
    elem_type at(const uint i, const uint j) const;

    template <typename Matrix>
    void assign(Matrix& out) const
    {
      coda_extra_debug_funcname();
      cwise_expr<op_type>::apply(out, *this);
    }

};


template <typename T1, typename T2, typename op_type>
class VectorCwiseExpr : public VectorBase< VectorCwiseExpr<T1, T2, op_type> > {
  public:
    typedef typename T1::elem_type    elem_type;

    const Proxy<T1> lhs;
    const Proxy<T2> rhs;

    inline ~VectorCwiseExpr();
    inline explicit VectorCwiseExpr(const VectorBase<T1>& in_A, const VectorBase<T2>& in_B);

    uint nelem() const;

    elem_type operator[](const uint i) const;
};

}    // namespace coda

#endif /* CWISEBINARYOP_H */
