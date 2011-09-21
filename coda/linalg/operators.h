#ifndef OPERATORS_H
#define OPERATORS_H

namespace coda
{
	
	template <typename T1, typename T2>
	inline const CwiseBinaryOp<T1,T2, eop_plus> operator+ (const Base<T1>& lhs, const Base<T2>& rhs)
	{
		coda_debug_sigprint();
		return CwiseBinaryOp<T1,T2,eop_plus>(lhs.get_ref(), rhs.get_ref());
	}

	template <typename T1, typename T2>
	inline const CwiseBinaryOp<T1,T2, eop_minus> operator- (const Base<T1>& lhs, const Base<T2>& rhs)
	{
		coda_debug_sigprint();
		return CwiseBinaryOp<T1,T2,eop_minus>(lhs.get_ref(), rhs.get_ref());
	}
	
	template <typename T1, typename T2>
	inline const CwiseBinaryOp<T1,T2, eop_schur> operator% (const Base<T1>& lhs, const Base<T2>& rhs)
	{
		coda_debug_sigprint();
		return CwiseBinaryOp<T1,T2,eop_schur>(lhs.get_ref(), rhs.get_ref());
	}

	template <typename T1, typename T2>
	inline const CwiseBinaryOp<T1,T2, eop_div> operator/ (const Base<T1>& lhs, const Base<T2>& rhs)
	{
		coda_debug_sigprint();
		return CwiseBinaryOp<T1,T2,eop_div>(lhs.get_ref(), rhs.get_ref());
	}
	

} /* end of namespace coda */

#endif /* end of include guard: OPERATORS_H */
