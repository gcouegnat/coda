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
    const Vector& operator=(float a);

    void zeros();

    void abs();

    void add(float a);
    void add(float a, Vector& v);
    void add(float a, Vector&v, float b, Vector& w);

    void eq(float a);
    void eq(float a, Vector& v);
    void eq(float a, Vector&v, float b, Vector& w);

    void axpy(float a, const Vector& v);

    float dot(const Vector& x) const;
    float norm(std::string norm_type) const;

    float min() const;
    float max() const;
    float sum() const;

    std::string str() const;
		void print() const;

    const Vector& operator*=(float a);
    const Vector& operator/=(float a);
    const Vector& operator+=(float a);
    const Vector& operator-=(float a);
    const Vector& operator+=(const Vector& v);
    const Vector& operator-=(const Vector& v);

		void matvec(Matrix& A, Vector& y);

    inline float operator[] (const uint index) const
    {
        return _values[index];
    };

    inline float& operator[] (const uint index)
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
    float* _values;

private:
    float* memptr();
};




} /* end of namespace coda */

#endif /* end of include guard: VECTOR_H */
