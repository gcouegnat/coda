#ifndef OP_H
#define OP_H

namespace coda
{

template <typename T1, typename op_type>
class Op : public Base< Op<T1, op_type> >
{
public:
    typedef typename T1::elem_type	elem_type;

    const T1& lhs;

    inline ~Op();
    inline explicit Op(const T1 & in_A);

};



} /* end of namespace coda */

#endif /* end of include guard: OP_H */