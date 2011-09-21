using namespace coda;

//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector() 
{
	coda_debug_sigprint();
	access::rw(Matrix<eT>::ncols) = 1;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector(const uint in_size) 
{
	coda_debug_sigprint();
	Matrix<eT>::init(in_size, 1);
} 
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::resize(const uint in_nelem)
{
		coda_debug_sigprint();
		Matrix<eT>::init(in_nelem, 1);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::print(std::string text)
{
	coda_debug_sigprint();

	std::cout << text << std::endl;
	for(uint i=0; i < Matrix<eT>::nelem; i++)
	{
		std::cout << Matrix<eT>::mem[i] << std::endl;
	}
}
//-----------------------------------------------------------------------------	
template<typename eT>
template<typename T1>
inline Vector<eT>::Vector(const Base<T1>& X)
{
	coda_debug_sigprint();
  	Matrix<eT>::operator=(X.get_ref());
}

template<typename eT>
template<typename T1>
inline const Vector<eT>& Vector<eT>::operator=(const Base<T1>& X)
{
	coda_debug_sigprint();
  	Matrix<eT>::operator=(X.get_ref());
	return *this;
}
