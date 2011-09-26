#ifndef UNWRAP_H
#define UNWRAP_H

namespace coda
{

template <typename T1>
class Unwrap
{
public:
	typedef typename T1::elem_type eT;
	const Matrix<eT> M;

	inline Unwrap(const T1& A) : M(A)
	{
		debug_sigprint();
	}
};


template <typename eT>
class Unwrap< Matrix<eT> >
{
public:
	const Matrix<eT>& M;

	inline Unwrap(const Matrix<eT>& A) : M(A)
	{
		debug_sigprint();
	}
};

template <typename eT>
class Unwrap< Vector<eT> >
{
public:
	const Vector<eT>& M;

	inline Unwrap(const Vector<eT>& A) : M(A)
	{
		debug_sigprint();
	}
};





} /* end of namespace coda */

#endif /* end of include guard: UNWRAP_H */
