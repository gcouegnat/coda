#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace coda
{
// trace
template <typename T1>
inline typename T1::elem_type trace(const Base<T1>& X)
{
    debug_sigprint();

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


template <typename T1>
inline const CwiseOp<T1, op_abs> abs(const Base<T1>& X)
{
    debug_sigprint();
    return CwiseOp<T1, op_abs>(X.get_ref());
}

template <typename T1>
inline const CwiseOp<T1, op_ramp> ramp(const Base<T1>& X)
{
    debug_sigprint();
    return CwiseOp<T1, op_ramp>(X.get_ref());
}


template <typename eT>
inline bool inv(Matrix<eT>& out)
{
	debug_sigprint();

	int nrows = out.nrows;
	int ncols = out.ncols;
	int info = 0;
	
	int * ipiv = new int[nrows];
	int work_len = nrows*84;
	eT * work = new eT[work_len];
	
	lapack::getrf(&nrows, &ncols, out.memptr(), &nrows, ipiv, &info);
	
	if (info == 0)
	{
		int work_len_tmp = -1;
		lapack::getri(&nrows, out.memptr(), &nrows, ipiv, work, &work_len_tmp, &info);
		
		if (info == 0)
		{
			int len = static_cast<int>(work[0]);
			if (work_len < len)
			{
				work_len = len;
				delete [] work;
				work = new eT[work_len];
			}
		}
		
		lapack::getri(&nrows, out.memptr(), &nrows, ipiv, work, &work_len, &info);
	}
	
	delete [] ipiv;
	delete [] work;

	return (info==0);
	
}



} /* end of namespace coda */


#endif /* end of include guard: FUNCTIONS_H */
