#ifndef FORWARD_DECL_H
#define FORWARD_DECL_H

namespace coda
{
template <typename eT> class Matrix;
template <typename T1, typename T2, typename op_type> class MatrixCwiseExpr;
template <typename T1, typename op_type> class MatrixCwiseOp;

template <typename eT> class Vector;
template <typename T1, typename T2, typename op_type> class VectorCwiseExpr;
template <typename T1, typename op_type> class VectorCwiseOp;

template <typename T1, typename op_type> class Op;
template <typename T1, typename T2, typename op_type> class Expr;

template<typename T1> class Proxy;
template<typename T1> class Unwrap;

} /* namespace coda */

#endif /* FORWARD_DECL_H */
