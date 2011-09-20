using namespace coda;

template<typename T1, typename T2, typename eop_type>
eBinaryOp<T1, T2, eop_type>::eBinaryOp(const Base<T1>& in_A, const Base<T2>& in_B) 
	: lhs(in_A.get_ref()), rhs(in_B.get_ref())
{
	coda_debug_sigprint();
}

template<typename T1, typename T2, typename eop_type>
eBinaryOp<T1, T2, eop_type>::~eBinaryOp()
{
	coda_debug_sigprint();
}

template<typename T1, typename T2, typename eop_type>
uint eBinaryOp<T1, T2, eop_type>::nrows() const
{
	return lhs.nrows();
}

template<typename T1, typename T2, typename eop_type>
uint eBinaryOp<T1, T2, eop_type>::ncols() const
{
	return lhs.ncols();
}

template<typename T1, typename T2, typename eop_type>
uint eBinaryOp<T1, T2, eop_type>::nelem() const
{
	return lhs.nelem();
}

template<typename T1, typename T2, typename eop_type>
typename T1::elem_type eBinaryOp<T1, T2, eop_type>::operator[] (const uint i) const
{
		 if (is_same_type<eop_type, eop_plus >::value == true) { return lhs[i] + rhs[i]; }
	else if (is_same_type<eop_type, eop_minus>::value == true) { return lhs[i] - rhs[i]; }
	else if (is_same_type<eop_type, eop_schur>::value == true) { return lhs[i] * rhs[i]; }
	else if (is_same_type<eop_type, eop_div  >::value == true) { return lhs[i] / rhs[i]; }	
}


