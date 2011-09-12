/*
 * File:   VectorETession.h
 * T1uthor: couegnat
 *
 * Created on 8 septembre 2011, 10:49
 */

#ifndef EXPRESSION_H
#define	EXPRESSION_H

namespace coda
{


template <typename T>
struct VectorET
{

    inline VectorET() {};

    inline const T& operator~() const
    {
        return *static_cast<const T*> (this);
    }

    // virtual void eval(const VectorET& expr) {};

};



//-----------------------------------------------------------------------------

// template <typename T1, typename T2>
// class VectorSub : public VectorET< VectorSub<T1, T2> >
// {
// public:
//
//     explicit VectorSub(const T1& a, const T2& b) : a_(a), b_(b)
//     {
//     }
//
//     int size() const
//     {
//         return a_.size();
//     }
//
//     inline double operator[](int i) const
//     {
//         return a_[i] - b_[i];
//     }
//
// private:
//     const T1& a_;
//     const T2& b_;
// };
// //-----------------------------------------------------------------------------
//
// template <typename T1, typename T2>
// class VectorScale : public VectorET< VectorScale<T1, T2> >
// {
// public:
//
//     explicit VectorScale(const T1& a, const T2& b) : a_(a), b_(b)
//     {
//     }
//
//     int size() const
//     {
//         return a_.size();
//     }
//
//     inline double operator[](int i) const
//     {
//         return a_ * b_[i];
//     }
//
// private:
//     const T1& a_;
//     const T2& b_;
// };
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------

// template <typename T1, typename T2>
// inline VectorSub<T1, T2> operator-(const VectorET<T1>& a, const VectorET<T2>& b)
// {
//     return VectorSub<T1, T2 > (~a, ~b);
// }
// //-----------------------------------------------------------------------------
//
// template <typename T2>
// inline VectorScale<double, T2> operator*(double a, const VectorET<T2>& b)
// {
//     return VectorScale<double, T2 > (a, ~b);
// }
//-----------------------------------------------------------------------------

}

#endif	/* EXPRESSION_H */

