#ifndef CODA_H
#define CODA_H


#include <iostream>

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

#include <coda/linalg/eop_core.h>
#include <coda/linalg/CwiseBinaryOp.h>

#include <coda/linalg/Proxy.h>

// linalg -- immpl

#include <coda/linalg/arrayops_impl.h>
#include <coda/linalg/eop_core_impl.h>
#include <coda/linalg/CwiseBinaryOp_impl.h>

#include <coda/linalg/Matrix_impl.h>
#include <coda/linalg/Vector_impl.h>

#include <coda/linalg/operators.h>
#include <coda/linalg/functions.h>

// #include <coda/linalg/VectorOp.h>
// #include <coda/linalg/Matrix.h>
// #include <coda/linalg/MatrixOp.h>

#endif				/* end of include guard: CODA_H */
