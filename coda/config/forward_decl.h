#ifndef FORWARD_DECL_H
#define FORWARD_DECL_H

namespace coda {
template <typename eT> class Matrix;
template <typename eT> class SymMatrix;
template <typename eT> class Vector;

template <typename T1, typename op_type> class MatrixCwiseOp;
template <typename T1, typename op_type> class MatrixOp;
template <typename T1, typename T2, typename op_type> class MatrixCwiseExpr;
template <typename T1, typename T2, typename op_type> class MatrixExpr;

template <typename T1, typename T2, typename op_type> class VectorCwiseExpr;
template <typename T1, typename op_type> class VectorCwiseOp;
template <typename T1, typename T2, typename op_type> class VectorExpr;

template<typename T1> class Proxy;
template<typename T1> class Unwrap;

class op_times;


template <typename eT> class CooSparseMatrix;



} /* namespace coda */

#endif /* FORWARD_DECL_H */
