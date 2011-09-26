#ifndef OP_INV_H
#define OP_INV_H

namespace coda
{
class op_inv
{
public:
	template <typename T1>
	inline static void apply(Matrix<typename T1::elem_type>& out, const Op<T1, op_inv>& in);	
};

} /* end of namespace coda */

#endif /* end of include guard: OP_INV_H */
