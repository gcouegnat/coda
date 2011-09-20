using namespace coda;

//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::~Vector()
{
	coda_debug_sigprint();
	if(nelem>0)
	{
		delete [] mem;
	}
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector() 
: nrows(0), ncols(0), nelem(0), mem(0)
{
	coda_debug_sigprint();
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector(uint in_size) 
: nrows(0), ncols(0), nelem(0) ,mem(0)
{
	coda_debug_sigprint();

	init(in_size);
} 
//-----------------------------------------------------------------------------
template <typename eT>
inline eT* Vector<eT>::memptr()
{
	return const_cast<eT*>(mem);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const eT* Vector<eT>::memptr() const
{
	return mem;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::init(uint in_size)
{
	coda_debug_sigprint();
	
	if(nelem>0) delete [] mem;
	
	access::rw(nrows) = in_size;
	access::rw(ncols) = 1;
	access::rw(nelem) = in_size;
	access::rw(mem) = new eT[in_size];
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator+=(const eT val) 
{
	coda_debug_sigprint();
	
	arrayops::inplace_plus(memptr(), val, nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator-=(const eT val)
{
	coda_debug_sigprint();
	
	arrayops::inplace_minus(memptr(), val, nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator*=(const eT val)
{
	coda_debug_sigprint();
	
	arrayops::inplace_mult(memptr(), val, nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator/=(const eT val)
{
	coda_debug_sigprint();
	
	arrayops::inplace_div(memptr(), val, nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector(const Vector<eT>& v)
: nrows(0), ncols(0), nelem(0), mem(mem)
{
	coda_debug_sigprint();	

	if (this != &v)
	{
		init(v.nelem);
		arrayops::copy(memptr(), v.mem, v.nelem);
	}

}
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator=(const Vector& v)
{	
	coda_debug_sigprint();
	
	init(v.nelem);
	arrayops::copy(memptr(), v.mem, v.nelem);
	
	return *this;
}

template <typename eT>
inline const Vector<eT>& Vector<eT>::operator+=(const Vector& v) 
{
	coda_debug_sigprint();
	
	arrayops::inplace_plus(memptr(), v.memptr(), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator-=(const Vector& v)
{
	coda_debug_sigprint();
	
	arrayops::inplace_minus(memptr(), v.memptr(), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator%=(const Vector& v)
{
	coda_debug_sigprint();
	
	arrayops::inplace_mult(memptr(), v.memptr(), nelem);
	
	return *this;

}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator/=(const Vector& v)
{
	coda_debug_sigprint();
	
	arrayops::inplace_div(memptr(), v.memptr(), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT& Vector<eT>::operator [] (const uint i)
{
	return access::rw(mem[i]);
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT  Vector<eT>::operator [] (const uint i) const
{
	return mem[i];
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT& Vector<eT>::at (const uint i)
{
	return access::rw(mem[i]);
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline eT  Vector<eT>::at (const uint i) const
{
	return mem[i];
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline const Vector<eT>& Vector<eT>::fill(const eT val)
{
	coda_debug_sigprint();
	
	arrayops::inplace_set(memptr(), val, nelem);
	
	return *this;	
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline const Vector<eT>& Vector<eT>::zeros()
{
	coda_debug_sigprint();
	
	arrayops::inplace_set(memptr(), eT(0), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline const Vector<eT>& Vector<eT>::ones()
{
	coda_debug_sigprint();
	
	arrayops::inplace_set(memptr(), eT(1), nelem);
	
	return *this;
}
//-----------------------------------------------------------------------------	
template <typename eT>
inline void Vector<eT>::resize(uint in_size)
{
	coda_debug_sigprint();
	
	if (in_size == nelem) 
		return;

	init(in_size);

}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::reshape(uint in_size)
{
	coda_debug_sigprint();
	coda_debug_function_not_implemented();
}
//-----------------------------------------------------------------------------
template <typename eT>
inline uint Vector<eT>::size()
{
	coda_debug_sigprint();
	return nelem;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::print(std::string text)
{
	coda_debug_sigprint();

	std::cout << text << std::endl;
	for(uint i=0; i < nelem; i++)
	{
		std::cout << mem[i] << std::endl;
	}
}
//-----------------------------------------------------------------------------	
template <typename eT>
template <typename T1, typename T2, typename eop_type> 
inline Vector<eT>::Vector(const eBinaryOp<T1, T2, eop_type>& op) : nrows(0), ncols(0), nelem(0) ,mem(0)
{
	eop_core<eop_type>::apply(*this, op);
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename eop_type> 
inline const Vector<eT>& Vector<eT>::operator=(const eBinaryOp<T1, T2, eop_type>& op)
{
	eop_core<eop_type>::apply(*this, op);
	return *this;	
}
