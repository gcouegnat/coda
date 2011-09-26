#ifndef FORWARD_DECL_H
#define FORWARD_DECL_H

namespace coda
{
template <typename eT> class Matrix;
template <typename eT> class Vector;

template <typename T1, 				typename op_type> class Op;
template <typename T1, typename T2, typename op_type> class BinaryOp;
template <typename T1, 				typename op_type> class CwiseOp;
template <typename T1, typename T2, typename op_type> class CwiseBinaryOp;

template<typename T1> class Proxy;
template<typename T1> class Unwrap;

} /* end of namespace coda */

#endif /* end of include guard: FORWARD_DECL_H */
