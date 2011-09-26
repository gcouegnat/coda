using namespace coda;

template <typename T1, typename op_type>
Op<T1, op_type>::Op(const T1& in_A) : lhs(in_A)
{
    debug_sigprint();
}

template <typename T1, typename op_type>
Op<T1, op_type>::~Op()
{
    debug_sigprint();
}
