#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <coda/utils/Expression.h>
#include <coda/utils/log.h>


namespace coda
{

class Matrix : public MatrixET<Matrix>
{
public:

    explicit Matrix(int m,int n);
    Matrix(const Matrix& mat);

    virtual ~Matrix() {};

    const Matrix& operator= (const Matrix& mat);
    const Matrix& operator=(float a);

    float 	operator() ( int i,  int j) const
    {
        return values_[i*n_+j];
    };
    float& 	operator() ( int i,  int j)
    {
        return values_[i*n_+j];
    };

    float operator[] ( int i) 					const
    {
        return values_[i];
    };
    float& operator[] ( int i)
    {
        return values_[i];
    };

    int m() const
    {
        return m_;
    }
    int n() const
    {
        return n_;
    }

    void print();

private:
    int m_, n_;
    float* values_;

public:

    template <typename Expr>
    void assign(const MatrixET<Expr>& expr)
    {
        debug("Matrix::assign");
        const Expr& m(~expr);
        for (int i=0; i<m_*n_; i++)
            values_[i] = m[i];
    }

    template<typename Expr>
    const Matrix& operator=(const MatrixET<Expr>& expr)
    {
        debug("Matrix::operator=");
        assign(expr);
        return *this;
    }

    template<typename Expr>
    Matrix(const MatrixET<Expr>& expr)
    {
        debug("Matrix::Matrix");
        assign(expr);
    }

};

} /* namespace coda */


#endif /* end of include guard: MATRIX_HPP */
