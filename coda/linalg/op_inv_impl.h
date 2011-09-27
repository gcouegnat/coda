using namespace coda;

template <typename T1>
inline void op_inv::apply(Matrix<typename T1::elem_type>& out, const Op<T1, op_inv>& X)
{
		coda_extra_debug_funcname();
		typedef typename T1::elem_type eT;
		out = X.lhs;

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
		
		if(info>0)
		{
			error("op_inv::apply(): Matrix is singular");
		}


		delete [] ipiv;
		delete [] work;


}
