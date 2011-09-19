#ifndef BASEVECTOR_H
#define	BASEVECTOR_H

#include <coda/utils/log.h>

namespace coda
{

template < typename Derived > 
class BaseVector
{
public:
    const Derived& derived(void) const
    {
        return static_cast<const Derived&> (*this);
    }
};

template < class Left, class Right, class Op >
class VectorExpression : public BaseVector < VectorExpression < Left, Right, Op > >
{
public:
    typedef const VectorExpression & StoreType;

    VectorExpression(const BaseVector < Left > &lhs, const BaseVector < Right > &rhs)
        : lhs_(lhs.derived()), rhs_(rhs.derived())
    {

    }

    inline double operator[] (int i) const
    {
        double result = Op::apply(lhs_[i], rhs_[i]);
        return result;
    }

    inline int
    size(void) const
    {
        return rhs_.size();
    }
private:
    typename Left::StoreType lhs_;
    typename Right::StoreType rhs_;

};

template < class V >
class VectorScalarExpression : public BaseVector < VectorScalarExpression < V > >
{
public:
    typedef const VectorScalarExpression & StoreType;

    VectorScalarExpression(const BaseVector < V > &v, const double &a) 
		: v_(v.derived()), a_(a)
    {
    }

    inline double operator [] (int i) const
    {
        double result = a_ * v_[i];
        return result;
    }

    inline int size(void) const
    {
        return v_.size();
    }

private:
    double a_;
    typename V::StoreType v_;
};

struct Add
{

    static inline double apply(double a, double b)
    {
        double result = a + b;
        return result;
    }
};

struct Minus
{

    static inline double apply(double a, double b)
    {
        double result = a - b;
        return result;
    }
};

template < class Left, class Right >
inline VectorExpression < Left, Right, Add > operator +(const BaseVector < Left > &lhs, const BaseVector < Right > &rhs)
{
    return VectorExpression < Left, Right, Add > (lhs.derived(), rhs.derived());
}

template < class Left, class Right >
inline VectorExpression < Left, Right, Minus > operator -(const BaseVector < Left > &lhs, const BaseVector < Right > &rhs)
{
    return VectorExpression < Left, Right, Minus > (lhs.derived(), rhs.derived());
}

template < class Left >
inline VectorScalarExpression < Left > operator *(const BaseVector <Left > &v, const double &a)
{
    return VectorScalarExpression < Left > (v.derived(), a);
}

template < class Right >
inline VectorScalarExpression < Right > operator *(const double &a, const BaseVector < Right > &v)
{
    return VectorScalarExpression < Right > (v.derived(), a);
}

template < class Left >
VectorScalarExpression < Left > operator /(const BaseVector <Left > &v, const double &a)
{
	double b = 1.0/a;
    return VectorScalarExpression < Left > (v.derived(), b);
}




} /* end namespace coda */

#endif				/* BASEVECTOR_H */
