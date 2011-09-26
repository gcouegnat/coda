using namespace coda;

template <typename T1, typename T2, typename op_type>
inline BinaryOp<T1,T2,op_type>::~BinaryOp()
{
	debug_sigprint();
}

template <typename T1, typename T2, typename op_type>
inline BinaryOp<T1,T2,op_type>::BinaryOp(const T1& in_A, const T2& in_B) : lhs(in_A), rhs(in_B)
{
	debug_sigprint();
}
