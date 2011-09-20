#ifndef EOP_CORE_H
#define EOP_CORE_H

namespace coda
{

template <typename eop_type>
struct eop_core
{
	template <typename T1, typename T2> inline static void apply(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op);
};


class eop_plus;
class eop_minus;
class eop_schur;
class eop_div;

} /* end of namespace coda */


#endif /* end of include guard: EOP_CORE_H */
