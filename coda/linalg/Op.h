#ifndef OP_H
#define OP_H

namespace coda {

template <typename T1, typename op_type>
class MatrixOp : public MatrixBase< MatrixOp<T1, op_type> > {
  public:
    typedef typename T1::elem_type    elem_type;
    const T1& lhs;
    inline ~MatrixOp();
    inline explicit MatrixOp(const T1& in_A);

    void assign(Matrix<elem_type>& out) const
    {
      coda_extra_debug_funcname();
      op_type::apply(out, *this);
    }
};

} /* namespace coda */
#endif /* OP_H */
