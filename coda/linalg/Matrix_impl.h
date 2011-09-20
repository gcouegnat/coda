
using namespace coda;

#include <iostream>
#include <iomanip>

#include <coda/utils/access.h>

//-----------------------------------------------------------------------------
template <typename eT>
inline Matrix<eT>::~Matrix()
{
	coda_debug_sigprint();
	if(nelem>0)
	{
		delete [] mem;
	}
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Matrix<eT>::Matrix() 
: nrows(0), ncols(0), nelem(0), mem(0)
{
	coda_debug_sigprint();
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Matrix<eT>::Matrix(uint in_rows, uint in_cols) 
: nrows(0), ncols(0), nelem(0) ,mem(0)
{
	coda_debug_sigprint();

	init(in_rows, in_cols);
} 
//-----------------------------------------------------------------------------
template <typename eT>
inline eT* Matrix<eT>::memptr()
{
	return const_cast<eT*>(mem);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const eT* Matrix<eT>::memptr() const
{
	return mem;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Matrix<eT>::init(uint in_rows, uint in_cols)
{
	coda_debug_sigprint();
	
	if(nelem>0) delete [] mem;
	
	access::rw(nrows) = in_rows;
	access::rw(ncols) = in_cols;
	access::rw(nelem) = in_rows * in_cols;
	access::rw(mem) = new eT[nelem];
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator+=(const eT val) 
{
	coda_debug_sigprint();
	
	arrayops::inplace_plus(memptr(), val, nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator-=(const eT val)
{
	coda_debug_sigprint();
	
	arrayops::inplace_minus(memptr(), val, nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator*=(const eT val)
{
	coda_debug_sigprint();
	
	arrayops::inplace_mult(memptr(), val, nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator/=(const eT val)
{
	coda_debug_sigprint();
	
	arrayops::inplace_div(memptr(), val, nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Matrix<eT>::Matrix(const Matrix<eT>& m)
: nrows(0), ncols(0), nelem(0), mem(mem)
{
	coda_debug_sigprint();	

	if (this != &m)
	{
		init(m.nelem);
		arrayops::copy(memptr(), m.mem, m.nelem);
	}

}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator=(const Matrix& m)
{	
	coda_debug_sigprint();
	
	init(m.nelem);
	arrayops::copy(memptr(), m.mem, m.nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator+=(const Matrix& m) 
{
	coda_debug_sigprint();
	
	arrayops::inplace_plus(memptr(), m.memptr(), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator-=(const Matrix& m)
{
	coda_debug_sigprint();
	
	arrayops::inplace_minus(memptr(), m.memptr(), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator%=(const Matrix& m)
{
	coda_debug_sigprint();
	
	arrayops::inplace_mult(memptr(), m.memptr(), nelem);
	
	return *this;

}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator/=(const Matrix& m)
{
	coda_debug_sigprint();
	
	arrayops::inplace_div(memptr(), m.memptr(), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT& Matrix<eT>::operator [] (const uint i)
{
	return access::rw(mem[i]);
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT  Matrix<eT>::operator [] (const uint i) const
{
	return mem[i];
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT& Matrix<eT>::at (const uint i, const uint j)
{
	return access::rw(mem[i*ncols+j]);
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT  Matrix<eT>::at (const uint i, const uint j) const
{
	return mem[i*ncols+j];
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT& Matrix<eT>::operator() (const uint i, const uint j)
{
	return access::rw(mem[i*ncols+j]);
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT  Matrix<eT>::operator() (const uint i, const uint j) const
{
	return mem[i*ncols+j];
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::fill(const eT val)
{
	coda_debug_sigprint();
	
	arrayops::inplace_set(memptr(), val, nelem);
	
	return *this;	
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::zeros()
{
	coda_debug_sigprint();
	
	arrayops::inplace_set(memptr(), eT(0), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::ones()
{
	coda_debug_sigprint();
	
	arrayops::inplace_set(memptr(), eT(1), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline void Matrix<eT>::resize(uint in_rows, uint in_cols)
{
	coda_debug_sigprint();
	
	init(in_rows, in_cols);

}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Matrix<eT>::reshape(uint in_rows, uint in_cols)
{
	coda_debug_sigprint();
	coda_debug_function_not_implemented();
}
//-----------------------------------------------------------------------------
template <typename eT>
inline uint Matrix<eT>::size()
{
	return nelem;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Matrix<eT>::print(std::string text)
{
	coda_debug_sigprint();
	
	std::cout << text << std::endl;

	for(uint i=0; i < nrows; i++)
	{
		for (uint j=0; j < ncols; j++)
		{
			std::cout << mem[i*ncols+j] << " ";
		}
		std::cout << std::endl;
	}
		
}
//-----------------------------------------------------------------------------	
