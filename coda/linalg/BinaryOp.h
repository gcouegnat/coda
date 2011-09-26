#ifndef BINARYOP_H
#define BINARYOP_H

namespace coda
{

template <typename T1, typename T2, typename op_type>
class BinaryOp : public Base< BinaryOp<T1, T2, op_type> >
{
public:
	typedef typename T1::elem_type elem_type;
	
	const T1& lhs;
	const T2& rhs;
	
	inline ~BinaryOp();
	inline BinaryOp(const T1& in_A, const T2& in_B);

};

} /* end of namespace coda */

#endif /* end of include guard: BINARYOP_H */
