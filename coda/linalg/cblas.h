#ifndef CODA_CBLAS_H
#define CODA_CBLAS_H

extern "C" 
{
#include <vecLib/cblas.h>
#include <vecLib/clapack.h>
}

namespace coda
{


namespace cblas
{

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
	inline eT dot(const int n, const eT* x, const eT* y)
	{
		debug_sigprint();
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
	
} /* end of namespace cblas */

namespace lapack
{

  using ::sgetrf_;
  using ::dgetrf_;

  using ::sgetri_;
  using ::dgetri_;


//-----------------------------------------------------------------------------
// getrf
//-----------------------------------------------------------------------------
template <typename eT>
inline void getrf(int* m, int* n, eT* a, int* lda, int* ipiv, int* info)
{
	debug_sigprint();
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

//-----------------------------------------------------------------------------
// getri
//-----------------------------------------------------------------------------
template<typename eT>
inline void getri(int* n,  eT* a, int* lda, int* ipiv, eT* work, int* lwork, int* info)
{
	debug_sigprint();
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
