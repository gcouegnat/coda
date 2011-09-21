#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace coda
{
	// trace
	template <typename T1>
	inline typename T1::elem_type trace(const Base<T1>& X)
	{
		coda_debug_sigprint();

		typedef typename T1::elem_type eT;
		
		const Proxy<T1> A(X.get_ref());
		const uint nrows = A.nrows();
		eT val = eT(0);
		for (uint i=0; i<nrows; ++i)
		{
			val += A.at(i,i);
		}
		
		return val;
	}
	
} /* end of namespace coda */


#endif /* end of include guard: FUNCTIONS_H */
