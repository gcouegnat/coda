#ifndef PROXY_H
#define PROXY_H

namespace coda
{
template <typename T1>
class Proxy 
{
public:
	inline Proxy(const T1& A) 
	{
		coda_debug_sigprint();
	}
};

template <typename eT>
class Proxy< Matrix<eT> >
{
public:
	typedef eT 			elem_type;
	const Matrix<eT>& 	P;

	inline explicit Proxy(const Matrix<eT>& M) : P(M)
	{
		coda_debug_sigprint();
	}

	uint nrows() const { return P.nrows; }
	uint ncols() const { return P.ncols; }
	uint nelem() const { return P.nelem; }	
	
	inline elem_type operator[] (const uint i) 		 const { return P[i]; }
	inline elem_type at (const uint i, const uint j) const { return P.at(i,j); }

};


template <typename eT>
class Proxy< Vector<eT> >
{
public:
	typedef eT 			elem_type;
	const Vector<eT>& 	P;

	inline explicit Proxy(const Vector<eT>& V) : P(V)
	{
		coda_debug_sigprint();
	}

	uint nrows() const { return P.nrows; }
	uint ncols() const { return 1; }
	uint nelem() const { return P.nelem; }	
	
	inline elem_type operator[] (const uint i) 		 const { return P[i]; }
	inline elem_type at (const uint i, const uint j) const { return P.at(i,j); }

};

template <typename T1, typename T2, typename eop_type>
class Proxy< eBinaryOp<T1, T2, eop_type> >
{
public:
	typedef typename T1::elem_type	elem_type;
	const eBinaryOp<T1, T2, eop_type>& 	P;

	inline explicit Proxy(const eBinaryOp<T1, T2, eop_type>& O) : P(O)
	{
		coda_debug_sigprint();
	}

	uint nrows() const { return P.nrows(); }
	uint ncols() const { return P.ncols(); }
	uint nelem() const { return P.nelem(); }	
	
	inline elem_type operator[] (const uint i) 	  const { return P[i]; }
	inline elem_type at (const uint i, const uint j) const { return P.at(i,j); }

};
	
} /* end of namespace coda */


#endif /* end of include guard: PROXY_H */
