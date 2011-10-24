#ifndef CODA_LINALG_BACKEND_H
#define CODA_LINALG_BACKEND_H

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

#ifdef CODA_WITH_ATLAS
  #define CBLAS_INT int
  #define BLAS_IMPL "ATLAS"
  #ifndef CBLAS_INDEX
    #define CBLAS_INDEX int
  #endif
#endif

#endif /* CODA_LINALG_BACKEND_H */


