#ifndef CODA_CBLAS_H
#define CODA_CBLAS_H

#include "backend.h"
#include "cblas.h"

namespace coda {
namespace cblas {
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
//-----------------------------------------------------------------------------
// dot
//-----------------------------------------------------------------------------
template <typename eT>
inline eT dot(const int n, const eT* x, const eT* y) {
  coda_extra_debug_funcname();
  error("cblas::dot() is only defined for float or double");
  return eT(0);
}
template <>
inline float dot(const int n, const float* x, const float* y) {
  coda_extra_debug_funcname();
  return cblas_sdot(n, x, 1, y, 1);
}
template <>
inline double dot(const int n, const double* x, const double* y) {
  coda_extra_debug_funcname();
  return cblas_ddot(n, x, 1, y, 1);
}
//-----------------------------------------------------------------------------
// gemv
//-----------------------------------------------------------------------------
template <typename eT>
inline void gemv(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const eT alpha, const eT* A, const int lda, const eT* X, const int incX, const eT beta,
                 eT* Y, const int incY) {
  coda_extra_debug_funcname();
  error("cblas::gemv() is only defined for float or double");
}
template <>
inline void gemv(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const float alpha, const float* A, const int lda, const float* X, const int incX, const float beta,
                 float* Y, const int incY) {
  coda_extra_debug_funcname();
  cblas_sgemv(Order, TransA, M, N, alpha, A, lda, X, incX, beta, Y, incY);
}
template <>
inline void gemv(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                 const double alpha, const double* A, const int lda, const double* X, const int incX, const double beta,
                 double* Y, const int incY) {
  coda_extra_debug_funcname();
  cblas_dgemv(Order, TransA, M, N, alpha, A, lda, X, incX, beta, Y, incY);
}
//-----------------------------------------------------------------------------
// gemm
//-----------------------------------------------------------------------------
template <typename eT>
inline void gemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const eT alpha, const eT* A,
                 const int lda, const eT* B, const int ldb,
                 const eT beta, eT* C, const int ldc) {
  coda_extra_debug_funcname();
  error("cblas::gemm() is only defined for float or double");
}
template <>
inline void gemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const float alpha, const float* A,
                 const int lda, const float* B, const int ldb,
                 const float beta, float* C, const int ldc) {
  coda_extra_debug_funcname();
  cblas_sgemm(Order, TransA, TransB, M, N, K, alpha, A, lda , B, ldb, beta, C, ldc);
}
template <>
inline void gemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
                 const enum CBLAS_TRANSPOSE TransB, const int M, const int N,
                 const int K, const double alpha, const double* A,
                 const int lda, const double* B, const int ldb,
                 const double beta, double* C, const int ldc) {
  coda_extra_debug_funcname();
  cblas_dgemm(Order, TransA, TransB, M, N, K, alpha, A, lda , B, ldb, beta, C, ldc);
}
} /* namespace cblas */

}/* namespace coda */
#endif        /* CODA_CBLAS_H */
