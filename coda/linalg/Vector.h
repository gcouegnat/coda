#ifndef VECTOR_H
#define VECTOR_H

namespace coda
{

template <typename eT>
class Vector : public VectorBase< Vector<eT> >
{

public:
    typedef eT  elem_type;
    const uint nelem;
    const eT* const mem;

// protected:
//  eT mem_local[16];

public:

    // constructor/destructor
    inline ~Vector();
    inline Vector();
    inline explicit Vector(uint in_size);

    // operations with scalar
    inline const Vector& operator+=(const eT val);
    inline const Vector& operator-=(const eT val);
    inline const Vector& operator*=(const eT val);
    inline const Vector& operator/=(const eT val);

    // operations with another Vector
    inline Vector(const Vector& v);
    inline const Vector& operator= (const Vector& v);
    inline const Vector& operator+=(const Vector& v);
    inline const Vector& operator-=(const Vector& v);
    inline const Vector& operator%=(const Vector& v);
    inline const Vector& operator/=(const Vector& v);

    // interface with expression template
    template <typename T1,              typename op_type> inline       Vector(const VectorCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Vector& operator= (const VectorCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Vector& operator+=(const VectorCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Vector& operator-=(const VectorCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Vector& operator%=(const VectorCwiseOp<T1, op_type>& op);
    template <typename T1,              typename op_type> inline const Vector& operator/=(const VectorCwiseOp<T1, op_type>& op);

    template <typename T1, typename T2, typename op_type> inline       Vector(const VectorCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Vector& operator= (const VectorCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Vector& operator+=(const VectorCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Vector& operator-=(const VectorCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Vector& operator%=(const VectorCwiseExpr<T1, T2, op_type>& op);
    template <typename T1, typename T2, typename op_type> inline const Vector& operator/=(const VectorCwiseExpr<T1, T2, op_type>& op);



    inline void resize(const uint in_nelem);
    inline void print(const std::string text="", const bool verbose = false);

    inline eT& operator [] (const uint i);
    inline eT  operator [] (const uint i) const;
    inline eT& at (const uint i);
    inline eT  at (const uint i) const;

    // value initialization
    inline const Vector& fill(const eT val);
    inline const Vector& zeros();
    inline const Vector& ones();
    inline const Vector& basis (const uint i);

    // memory access
    inline          eT* memptr();
    inline const    eT* memptr() const;

protected:
    inline void init(uint in_size);


};

} /* namespace coda */

#endif  /* VECTOR_H */

