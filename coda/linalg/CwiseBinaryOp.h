#ifndef CWISEBINARYOP_H
#define CWISEBINARYOP_H

namespace coda
{

template <typename T1, typename T2, typename eop_type>
class CwiseBinaryOp : public Base< CwiseBinaryOp<T1, T2, eop_type> >
{
public:
	typedef typename T1::elem_type	elem_type;
	
	const Proxy<T1> lhs;
	const Proxy<T2> rhs;
	
	inline ~CwiseBinaryOp();
	inline explicit CwiseBinaryOp(const Base<T1>& in_A, const Base<T2>& in_B);
	
	uint nrows() const;
	uint ncols() const;
	uint nelem() const;
		
	elem_type operator[] 	(const uint i) const;
	elem_type at 			(const uint i, const uint j) const;
		
};
	
	
} /* end of namespace coda */

#endif /* end of include guard: CWISEBINARYOP_H */
