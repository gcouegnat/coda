#ifndef OP_TIMES_H
#define OP_TIMES_H

namespace coda
{

class op_times
{
public:
    template <typename T1, typename T2>
    inline static void apply(Matrix<typename T1::elem_type>& out, const Expr<T1,T2,op_times>& X);

    template <typename eT>
    inline static void apply(Matrix<eT>& out, const Matrix<eT>& A, const Matrix<eT>& B);

    template <typename eT>
    inline static void apply(Vector<eT>& out, const Matrix<eT>& A, const Vector<eT>& x);



};

} /* namespace coda */

#endif /* OP_TIMES_H */
