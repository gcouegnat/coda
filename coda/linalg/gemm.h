#ifndef GEMM_H
#define GEMM_H

namespace coda
{


class gemm
{
public:
	
	template<typename eT>
	inline static void apply(Matrix<eT>& C, const Matrix<eT>& A, const Matrix<eT>& B, const eT alpha = eT(1), const eT beta = eT(0))
	{
		debug_sigprint();

		cblas::gemm<eT>(cblas::CblasRowMajor, 
		                cblas::CblasNoTrans, 
		                cblas::CblasNoTrans, 
		                C.nrows, // M
		                C.ncols, // N
		                A.ncols, // K
		                alpha, 
		                A.mem, 
		                A.ncols, // LDA
		                B.mem, 
		                B.ncols, // LDB
		                beta, 
		                C.memptr(), 
		                C.ncols); // LDC
		
	}
	
};

	
} /* end of namespace coda */

#endif /* end of include guard: GEMM_H */
