#ifndef CODA_CBLAS_H
#define CODA_CBLAS_H

#ifdef __APPLE__
#include <vecLib/cblas.h>
#include <vecLib/clapack.h>
#endif

#ifdef __linux__
#include <goto/cblas.h>
#include <goto/clapack.h>
#include <goto/f2c.h>
#endif




namespace coda
{


namespace cblas
{

using ::CblasRowMajor;
using ::CblasColMajor;
using ::CblasNoTrans;
using ::CblasTrans;

using ::cblas_sdot;
using ::cblas_ddot;

using ::cblas_sgemv;
using ::cblas_dgemv;

using ::cblas_sgemm;
using ::cblas_dgemm;

//
// dot
//
template <typename eT>
inline eT dot(const int n, const eT* x, const eT* y)
{
  debug_sigprint();
  error("cblas::dot() is only defined for float or double");
  return eT(0);
}

template <>
inline float dot(const int n, const float* x, const float* y)
{
  debug_sigprint();
  return cblas_sdot(n, x, 1, y, 1);
}

template <>
inline double dot(const int n, const double* x, const double* y)
{
  debug_sigprint();
  return cblas_ddot(n, x, 1, y, 1);
}

//
// gemv
//
template <typename eT>
inline void gemv(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const eT alpha, const eT *A, const int lda, const eT *X, const int incX, const eT beta,
                 eT *Y, const int incY)
{
  debug_sigprint();
  error("cblas::gemv() is only defined for float or double");
}

template <>
inline void gemv(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const float alpha, const float *A, const int lda, const float *X, const int incX, const float beta,
                 float *Y, const int incY)
{
  debug_sigprint();
	cblas_sgemv(Order, TransA, M, N, alpha, A, lda, X, incX, beta, Y, incY);
}


template <>
inline void gemv(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const double alpha, const double *A, const int lda, const double *X, const int incX, const double beta,
                 double *Y, const int incY)
{
  debug_sigprint();
	cblas_dgemv(Order, TransA, M, N, alpha, A, lda, X, incX, beta, Y, incY);
}


//
// gemm
//

template <typename eT>
inline void gemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const eT alpha, const eT *A,
                 const int lda, const eT *B, const int ldb,
                 const eT beta, eT *C, const int ldc)
{
	debug_sigprint();
	error("cblas::gemm() is only defined for float or double");
}

template <>
inline void gemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const float alpha, const float *A,
                 const int lda, const float *B, const int ldb,
                 const float beta, float *C, const int ldc)
{
	debug_sigprint();
	cblas_sgemm(Order, TransA, TransB, M, N, K, alpha, A, lda , B, ldb, beta, C, ldc);
}

template <>
inline void gemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const double alpha, const double *A,
                 const int lda, const double *B, const int ldb,
                 const double beta, double *C, const int ldc)
{
	debug_sigprint();
	cblas_dgemm(Order, TransA, TransB, M, N, K, alpha, A, lda , B, ldb, beta, C, ldc);
}

} /* end of namespace cblas */

//-----------------------------------------------------------------------------

namespace lapack
{

using ::sgetrf_;
using ::dgetrf_;

using ::sgetri_;
using ::dgetri_;


//
// getrf
//
template <typename eT>
inline void getrf(int* m, int* n, eT* a, int* lda, int* ipiv, int* info)
{
  debug_sigprint();
 error("lapack::getrf() is only defined for float or double");
}


template <>
inline void getrf(int* m, int* n, float* a, int* lda, int* ipiv, int* info)
{
  debug_sigprint();
  sgetrf_(m, n, a, lda, ipiv, info);
}

template <>
inline void getrf(int* m, int* n, double* a, int* lda, int* ipiv, int* info)
{
  debug_sigprint();
  dgetrf_(m, n, a, lda, ipiv, info);
}

//
// getri
//
template<typename eT>
inline void getri(int* n,  eT* a, int* lda, int* ipiv, eT* work, int* lwork, int* info)
{
  debug_sigprint();
 error("lapack::getri() is only defined for float or double");
}

template<>
inline void getri(int* n,  float* a, int* lda, int* ipiv, float* work, int* lwork, int* info)
{
  debug_sigprint();
  sgetri_(n, a ,lda, ipiv, work, lwork, info);
}

template<>
inline void getri(int* n,  double* a, int* lda, int* ipiv, double* work, int* lwork, int* info)
{
  debug_sigprint();
  dgetri_(n, a ,lda, ipiv, work, lwork, info);
}


} /* end of namespace lapack */


}/* end of namespace coda */
#endif				/* end of include guard: CODA_CBLAS_H */
