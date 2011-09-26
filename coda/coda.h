#ifndef CODA_H
#define CODA_H


#include <iostream>
#include <cmath>

// forward declarartion
#include <coda/config/forward_decl.h>
#include <coda/config/typedef.h>
#include <coda/config/traits.h>

// utils
#include <coda/utils/Timer.h>
#include <coda/utils/log.h>
#include <coda/utils/access.h>

// parameter
#include <coda/parameter/Parameter.h>
#include <coda/parameter/Parameters.h>
#include <coda/parameter/GlobalParameters.h>

// linalg
#include <coda/linalg/Base.h>
#include <coda/linalg/arrayops.h>
#include <coda/linalg/Matrix.h>
#include <coda/linalg/Vector.h>

#include <coda/linalg/cwise_op.h>
#include <coda/linalg/cwise_binary_op.h>
#include <coda/linalg/op_inv.h>
#include <coda/linalg/op_trans.h>
#include <coda/linalg/op_times.h>

#include <coda/linalg/cblas.h>
#include <coda/linalg/gemm.h>

#include <coda/linalg/CwiseOp.h>
#include <coda/linalg/CwiseBinaryOp.h>
#include <coda/linalg/Op.h>
#include <coda/linalg/BinaryOp.h>

#include <coda/linalg/Proxy.h>
#include <coda/linalg/Unwrap.h>

// linalg -- immpl

#include <coda/linalg/arrayops_impl.h>

#include <coda/linalg/cwise_op_impl.h>
#include <coda/linalg/cwise_binary_op_impl.h>

#include <coda/linalg/op_inv_impl.h>
#include <coda/linalg/op_trans_impl.h>
#include <coda/linalg/op_times_impl.h>

#include <coda/linalg/CwiseOp_impl.h>
#include <coda/linalg/CwiseBinaryOp_impl.h>
#include <coda/linalg/Op_impl.h>
#include <coda/linalg/BinaryOp_impl.h>

#include <coda/linalg/Matrix_impl.h>
#include <coda/linalg/Vector_impl.h>

#include <coda/linalg/operators.h>
#include <coda/linalg/functions.h>

// #include <coda/linalg/VectorOp.h>
// #include <coda/linalg/Matrix.h>
// #include <coda/linalg/MatrixOp.h>

#endif				/* end of include guard: CODA_H */
