#ifndef MATRIX_H
#define MATRIX_H

namespace coda
{

template <typename eT>
class Matrix : public MatrixBase< Matrix<eT> >
{
public:

    typedef eT elem_type;

    const uint nrows;
    const uint ncols;
    const uint nelem;

    const eT* const mem;
// protected:
//  eT mem_local[16];

public:

    // constructor/destructor
    inline ~Matrix();
    inline Matrix();
    inline Matrix(uint in_rows, uint in_cols);

    // operations with scalar
    inline const Matrix& operator+=(const eT val);
    inline const Matrix& operator-=(const eT val);
    inline const Matrix& operator*=(const eT val);
    inline const Matrix& operator/=(const eT val);

    // operations with another matrix
    inline Matrix(const Matrix& m);
    inline const Matrix& operator= (const Matrix& m);
    inline const Matrix& operator+=(const Matrix& m);
    inline const Matrix& operator-=(const Matrix& m);
    inline const Matrix& operator%=(const Matrix& m);
    inline const Matrix& operator/=(const Matrix& m);

    // element access
    inline eT& operator [] (const uint i);
    inline eT  operator [] (const uint i) const;
    inline eT& at (const uint i, const uint j);
    inline eT  at (const uint i, const uint j) const;
    inline eT& operator() (const uint i, const uint j);
    inline eT  operator() (const uint i, const uint j) const;

    // memory access
    inline          eT* memptr();
    inline const    eT* memptr() const;

    // size management
    inline void resize(const uint in_rows, const uint in_cols);
    inline void reshape(const uint in_rows, const uint in_cols);
    inline uint size();

    // value initialization
    inline const Matrix& fill(const eT val);
    inline const Matrix& zeros();
    inline const Matrix& ones();
    inline const Matrix& eyes();

    // misc.
    inline const Matrix& symmetrize();
    inline void print(std::string text="");

    // interface with expression template
    template <typename T1,              typename op_type> inline       Matrix(const MatrixCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator= (const MatrixCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator+=(const MatrixCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator-=(const MatrixCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator%=(const MatrixCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator/=(const MatrixCwiseOp<T1, op_type>& op);

    template <typename T1, typename T2, typename op_type> inline       Matrix(const MatrixCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Matrix& operator= (const MatrixCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Matrix& operator+=(const MatrixCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Matrix& operator-=(const MatrixCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Matrix& operator%=(const MatrixCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Matrix& operator/=(const MatrixCwiseExpr<T1, T2, op_type>& op);

    template <typename T1,              typename op_type> inline       Matrix(const Op<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator= (const Op<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator+=(const Op<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator-=(const Op<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator%=(const Op<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Matrix& operator/=(const Op<T1, op_type>& op);

    template <typename T1, typename T2, typename op_type> inline    Matrix(const Expr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Matrix& operator= (const Expr<T1, T2, op_type>& op);

protected:

    inline void init(uint in_rows, uint in_cols);

};

}    /* namespace coda */

#endif    /* MATRIX_H */

