#ifndef CWISEOP_H
#define CWISEOP_H

namespace coda {
template <typename T1, typename op_type>
class MatrixCwiseOp : public MatrixBase< MatrixCwiseOp<T1, op_type> > {
  public:
    typedef typename T1::elem_type    elem_type;

    const Proxy<T1> lhs;
    const elem_type val;

    inline ~MatrixCwiseOp();
    inline explicit MatrixCwiseOp(const MatrixBase<T1>& in_A);
    inline MatrixCwiseOp(const MatrixBase<T1>& in_A, elem_type in_val);

    uint nrows() const;
    uint ncols() const;
    uint nelem() const;

    elem_type operator[](const uint i) const;
    elem_type at(const uint i, const uint j) const;

    void assign(Matrix<elem_type>& out) const
    {
      coda_extra_debug_funcname();
      cwise_op<op_type>::apply(out, *this);
    }


};

template <typename T1, typename op_type>
class VectorCwiseOp : public VectorBase< VectorCwiseOp<T1, op_type> > {
  public:
    typedef typename T1::elem_type    elem_type;

    const Proxy<T1> lhs;
    const elem_type val;

    inline ~VectorCwiseOp();
    inline explicit VectorCwiseOp(const VectorBase<T1>& in_A);
    inline VectorCwiseOp(const VectorBase<T1>& in_A, elem_type in_val);

    uint nelem() const;

    elem_type operator[](const uint i) const;

};


} /* namespace coda */

#endif /* CWISEOP_H */
