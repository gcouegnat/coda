#ifndef EOP_CORE_H
#define EOP_CORE_H

namespace coda
{

template <typename eop_type>
struct eop_core
{
	template <typename T1, typename T2> inline static void apply(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op);

	template <typename T1, typename T2> inline static void apply_inplace_plus (Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op);
	template <typename T1, typename T2> inline static void apply_inplace_minus(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op);
	template <typename T1, typename T2> inline static void apply_inplace_schur(Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op);
	template <typename T1, typename T2> inline static void apply_inplace_div  (Vector<typename T1::elem_type>& out, const eBinaryOp<T1, T2, eop_type>& op);
	
	template <typename eT> inline static eT process(const eT a, const eT b);

};


class eop_plus	: public eop_core<eop_plus> 	{};
class eop_minus	: public eop_core<eop_minus>	{};
class eop_schur	: public eop_core<eop_schur>	{};
class eop_div	: public eop_core<eop_div>		{};

} /* end of namespace coda */


#endif /* end of include guard: EOP_CORE_H */
