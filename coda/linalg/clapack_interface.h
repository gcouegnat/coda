#ifndef CLAPACK_INTERFACE_H
#define CLAPACK_INTERFACE_H

#ifdef CODA_WITH_VECLIB
  #define CBLAS_INT int
  #define BLAS_IMPL "VecLib (Atlas)"
  #ifndef CBLAS_INDEX
    #define CBLAS_INDEX int
  #endif
#endif

#ifdef CODA_WITH_GOTOBLAS
  #ifdef BLASINT
    #define CBLAS_INT BLAS_INT
  #else
    #define CBLAS_INT int
  #endif
  #define BLAS_IMPL "GotoBLAS2"
  #ifndef CBLAS_INDEX
    #define CBLAS_INDEX size_t
  #endif
#endif

#ifdef CODA_WITH_GENERICBLAS
  #define CBLAS_INT int
  #define BLAS_IMPL "Generic CBLAS"
  #ifndef CBLAS_INDEX
    #define CBLAS_INDEX int
  #endif
#endif

#include "clapack.h"

namespace coda
{
  namespace lapack {

    using ::sgetrf_;
    using ::dgetrf_;
    using ::sgetri_;
    using ::dgetri_;
  //-----------------------------------------------------------------------------
  // getrf
  //-----------------------------------------------------------------------------
  template <typename eT>
    inline void getrf(int* m, int* n, eT* a, int* lda, int* ipiv, int* info) {
      coda_extra_debug_funcname();
      error("lapack::getrf() is only defined for float or double");
    }
  //-----------------------------------------------------------------------------
  template <>
    inline void getrf(int* m, int* n, float* a, int* lda, int* ipiv, int* info) {
      coda_extra_debug_funcname();
      sgetrf_(m, n, a, lda, ipiv, info);
    }
  //-----------------------------------------------------------------------------
  template <>
    inline void getrf(int* m, int* n, double* a, int* lda, int* ipiv, int* info) {
      coda_extra_debug_funcname();
      dgetrf_(m, n, a, lda, ipiv, info);
    }
  //-----------------------------------------------------------------------------
  // getri
  //-----------------------------------------------------------------------------
  template<typename eT>
    inline void getri(int* n,  eT* a, int* lda, int* ipiv, eT* work, int* lwork, int* info) {
      coda_extra_debug_funcname();
      error("lapack::getri() is only defined for float or double");
    }
  //-----------------------------------------------------------------------------
  template<>
    inline void getri(int* n,  float* a, int* lda, int* ipiv, float* work, int* lwork, int* info) {
      coda_extra_debug_funcname();
      sgetri_(n, a , lda, ipiv, work, lwork, info);
    }
  //-----------------------------------------------------------------------------
  template<>
    inline void getri(int* n,  double* a, int* lda, int* ipiv, double* work, int* lwork, int* info) {
      coda_extra_debug_funcname();
      dgetri_(n, a , lda, ipiv, work, lwork, info);
    }
  } /* namespace lapack */

  } /* namespace coda */


#endif /* CLAPACK_INTERFACE_H */
