#ifndef CWISEOP_H
#define CWISEOP_H

namespace coda
{
template <typename T1, typename op_type>
class CwiseOp : public Base< CwiseOp<T1, op_type> >
{
public:
    typedef typename T1::elem_type	elem_type;

    const Proxy<T1> lhs;
    const elem_type val;

    inline ~CwiseOp();
    inline explicit CwiseOp(const Base<T1>& in_A);
    inline CwiseOp(const Base<T1>& in_A, elem_type in_val);

    uint nrows() const;
    uint ncols() const;
    uint nelem() const;

    elem_type operator[] 	(const uint i) const;
    elem_type at 			(const uint i, const uint j) const;

};

} /* end of namespace coda */

#endif /* end of include guard: CWISEOP_H */
