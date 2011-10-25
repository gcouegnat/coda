#ifndef CODA_H
#define CODA_H

// c includes
#include <time.h>

// c++ includes
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>


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
#include "coda/utils/tuple.h"

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

// math
#include "coda/math/random.h"


// linalg
#include "coda/linalg/Base.h"
#include "coda/linalg/MatrixBase.h"
#include "coda/linalg/VectorBase.h"

#include "coda/linalg/arrayops.h"
#include "coda/linalg/Matrix.h"
#include "coda/linalg/SymMatrix.h"
#include "coda/linalg/Vector.h"

// #include "coda/linalg/cwise_op.h"
// #include "coda/linalg/cwise_expr.h"
// #include "coda/linalg/op_inv.h"
// #include "coda/linalg/op_lu.h"
// #include "coda/linalg/op_trans.h"
// #include "coda/linalg/op_times.h"

#include "coda/linalg/cblas_interface.h"
#include "coda/linalg/lapack_interface.h"

#include "coda/linalg/gemm.h"
#include "coda/linalg/gemv.h"

// #include "coda/linalg/CwiseOp.h"
// #include "coda/linalg/CwiseExpr.h"
// #include "coda/linalg/Op.h"
// #include "coda/linalg/Expr.h"
// 
#include "coda/linalg/Proxy.h"
// #include "coda/linalg/Unwrap.h"


#include "coda/utils/Array.h"
#include "coda/sparse/SparseMatrixBase.h"
#include "coda/sparse/CooSparseMatrix.h"

// linalg -- immpl
#include "coda/log/prettyprint_impl.h"


#include "coda/linalg/detail/arrayops.cpp"

// #include "coda/linalg/detail/cwise_op.cpp"
// #include "coda/linalg/detail/cwise_expr.cpp"
// 
// #include "coda/linalg/detail/op_inv.cpp"
// #include "coda/linalg/detail/op_lu.cpp"
// #include "coda/linalg/detail/op_trans.cpp"
// #include "coda/linalg/detail/op_times.cpp"
// 
// #include "coda/linalg/detail/CwiseOp.cpp"
// #include "coda/linalg/detail/CwiseExpr.cpp"
// #include "coda/linalg/detail/Op.cpp"
// #include "coda/linalg/detail/Expr.cpp"

#include "coda/linalg/detail/Matrix.cpp"
#include "coda/linalg/detail/SymMatrix.cpp"
#include "coda/linalg/detail/Vector.cpp"

// #include "coda/linalg/operators.h"
#include "coda/linalg/functions.h"


#include "coda/sparse/CooSparseMatrix_impl.h"

// #include "coda/linalg/VectorOp.h"
// #include "coda/linalg/Matrix.h"
// #include "coda/linalg/MatrixOp.h"

#endif /* CODA_H */
