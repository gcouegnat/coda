#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <string>
#include <coda/utils/Expression.h>
#include <coda/utils/log.h>

typedef unsigned int uint;

namespace coda
{

class Matrix;

class Vector : public VectorET<Vector>
{
public:


    explicit Vector(const uint size = 0);
    Vector(const Vector& v);

    virtual ~Vector();

    void resize(uint n);
    uint size() const;

    const Vector& operator=(const Vector& v);
    const Vector& operator=(double a);

    void zeros();

    void abs();

    void add(double a);
    void add(double a, Vector& v);
    void add(double a, Vector&v, double b, Vector& w);

    void eq(double a);
    void eq(double a, Vector& v);
    void eq(double a, Vector&v, double b, Vector& w);

    void axpy(double a, const Vector& v);

    double dot(const Vector& x) const;
    double norm(std::string norm_type) const;

    double min() const;
    double max() const;
    double sum() const;

    std::string str() const;
		void print() const;

    const Vector& operator*=(double a);
    const Vector& operator/=(double a);
    const Vector& operator+=(double a);
    const Vector& operator-=(double a);
    const Vector& operator+=(const Vector& v);
    const Vector& operator-=(const Vector& v);

		void matvec(Matrix& A, Vector& y);

    inline double operator[] (const uint index) const
    {
        return _values[index];
    };

    inline double& operator[] (const uint index)
    {
        return _values[index];
    };

//      const Vector operator+(const Vector& v) const;
//    const Vector operator-(const Vector& v) const;

    // Expression template function

    template <typename Expr>
    inline void assign(const VectorET<Expr>& expr)
    {
        const Expr& v(~expr);
        for (int i=0; i<_size; i++)
            _values[i] = v[i];
    }

    template<typename Expr>
    const Vector& operator=(const VectorET<Expr>& expr)
    {
        assign(expr);
        return *this;
    }

private:
    uint _size;
    double* _values;

private:
    double* memptr();
};




} /* end of namespace coda */

#endif /* end of include guard: VECTOR_H */
