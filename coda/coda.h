#ifndef CODA_H
#define CODA_H

// c++ includes
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cmath>

// compiler defs
#include "coda/config/config.h"

// forward declarartion
#include "coda/config/forward_decl.h"
#include "coda/config/typedef.h"
#include "coda/config/traits.h"

// utils
#include "coda/utils/access.h"
#include "coda/utils/colors.h"
#include "coda/utils/version.h"

// log
#include "coda/log/prettyprint.h"
#include "coda/log/Timer.h"
#include "coda/log/log.h"

// debug
#include "coda/debug/debug.h"

// parameter
#include "coda/parameter/Parameter.h"
#include "coda/parameter/Parameters.h"
#include "coda/parameter/GlobalParameters.h"


// linalg
#include "coda/linalg/Base.h"
#include "coda/linalg/MatrixBase.h"
#include "coda/linalg/VectorBase.h"

#include "coda/linalg/arrayops.h"
#include "coda/linalg/Matrix.h"
#include "coda/linalg/Vector.h"

#include "coda/linalg/cwise_op.h"
#include "coda/linalg/cwise_expr.h"
#include "coda/linalg/op_inv.h"
#include "coda/linalg/op_trans.h"
#include "coda/linalg/op_times.h"

#include "coda/linalg/cblas.h"
#include "coda/linalg/gemm.h"
#include "coda/linalg/gemv.h"

#include "coda/linalg/CwiseOp.h"
#include "coda/linalg/CwiseExpr.h"
#include "coda/linalg/Op.h"
#include "coda/linalg/Expr.h"

#include "coda/linalg/Proxy.h"
#include "coda/linalg/Unwrap.h"

// linalg -- immpl
#include "coda/log/prettyprint_impl.h"


#include "coda/linalg/arrayops_impl.h"

#include "coda/linalg/cwise_op_impl.h"
#include "coda/linalg/cwise_expr_impl.h"

#include "coda/linalg/op_inv_impl.h"
#include "coda/linalg/op_trans_impl.h"
#include "coda/linalg/op_times_impl.h"

#include "coda/linalg/CwiseOp_impl.h"
#include "coda/linalg/CwiseExpr_impl.h"
#include "coda/linalg/Op_impl.h"
#include "coda/linalg/Expr_impl.h"

#include "coda/linalg/Matrix_impl.h"
#include "coda/linalg/Vector_impl.h"

#include "coda/linalg/operators.h"
#include "coda/linalg/functions.h"

// #include "coda/linalg/VectorOp.h"
// #include "coda/linalg/Matrix.h"
// #include "coda/linalg/MatrixOp.h"

#endif /* CODA_H */
