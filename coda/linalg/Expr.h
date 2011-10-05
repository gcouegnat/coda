#ifndef BINARYOP_H
#define BINARYOP_H

namespace coda
{

template <typename T1, typename T2, typename op_type>
class Expr : public MatrixBase< Expr<T1, T2, op_type> >
{
public:
    typedef typename T1::elem_type elem_type;

    const T1& lhs;
    const T2& rhs;

    inline ~Expr();
    inline Expr(const T1& in_A, const T2& in_B);

};

} /* namespace coda */

#endif /* BINARYOP_H */
