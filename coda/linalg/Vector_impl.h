using namespace coda;

//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector()
{
    coda_extra_debug_funcname();
    access::rw(Matrix<eT>::ncols) = 1;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector(const uint in_size)
{
    coda_extra_debug_funcname();
    Matrix<eT>::init(in_size, 1);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::resize(const uint in_nelem)
{
    coda_extra_debug_funcname();
    Matrix<eT>::init(in_nelem, 1);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::print(std::string text)
{
    coda_extra_debug_funcname();
    
    std::cout << text << std::endl;
    std::cout << "<Vector of size " << Matrix<eT>::nelem << ">\n";

    for(uint i=0; i < Matrix<eT>::nelem; i++)
    {
        std::cout << std::setw(14) << Matrix<eT>::mem[i] << std::endl;
    }
}
//-----------------------------------------------------------------------------
template<typename eT>
template<typename T1>
inline Vector<eT>::Vector(const Base<T1>& X)
{
    coda_extra_debug_funcname();
    Matrix<eT>::operator=(X.get_ref());
}

template<typename eT>
template<typename T1>
inline const Vector<eT>& Vector<eT>::operator=(const Base<T1>& X)
{
    coda_extra_debug_funcname();
    Matrix<eT>::operator=(X.get_ref());
    return *this;
}
