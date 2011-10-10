using namespace coda;

template <typename eT>
inline Vector<eT>::~Vector()
{
    coda_extra_debug_funcname();
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector()
    : nelem(0), mem(mem)
{
    coda_extra_debug_funcname();
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector(const uint in_size) : nelem(0), mem(mem)
{
    coda_extra_debug_funcname();
    init(in_size);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::resize(const uint in_nelem)
{
    coda_extra_debug_funcname();
    if (nelem != in_nelem)
    {
        init(in_nelem);    
    }
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::print(const std::string text)
{
    coda_extra_debug_funcname();
    if (text.length()>0)
    {
        std::cout << text << std::endl;
    }
    // std::cout << "<Vector of size " << nelem << ">\n";
    // if (verbose == true)
    // {
    coda::prettyprint::print(std::cout, *this);        
    // }
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Vector<eT>::init(const uint in_nelem)
{
    coda_extra_debug_funcname();
    if(nelem>0)
    {
        delete [] mem;
    }
    access::rw(nelem) = in_nelem;
    access::rw(mem) = new eT[nelem];
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
    coda_extra_debug_funcname();
    arrayops::inplace_set(memptr(), val, nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::zeros()
{
    coda_extra_debug_funcname();
    arrayops::inplace_set(memptr(), eT(0), nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::ones()
{
    coda_extra_debug_funcname();
    arrayops::inplace_set(memptr(), eT(1), nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::randu()
{
    coda_extra_debug_funcname();
    for(uint i=0; i<nelem; ++i)
    {
        access::rw(mem[i])=coda::randu<eT>();
    }
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::basis(const uint i)
{
    coda_extra_debug_funcname();
    zeros();
    access::rw(mem[i])=eT(1);
    return *this;
}

//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator+=(const eT val)
{
    coda_extra_debug_funcname();
    arrayops::inplace_plus(memptr(), val, nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator-=(const eT val)
{
    coda_extra_debug_funcname();
    arrayops::inplace_minus(memptr(), val, nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator*=(const eT val)
{
    coda_extra_debug_funcname();
    arrayops::inplace_mult(memptr(), val, nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator/=(const eT val)
{
    coda_extra_debug_funcname();
    arrayops::inplace_div(memptr(), val, nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Vector<eT>::Vector(const Vector<eT>& v)
    : nelem(0), mem(mem)
{
    coda_extra_debug_funcname();
    if (this != &v)
    {
        init(v.nelem);
        arrayops::copy(memptr(), v.mem, v.nelem);
    }
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator=(const Vector<eT>& v)
{
    coda_extra_debug_funcname();
    init(v.nelem);
    arrayops::copy(memptr(), v.mem, v.nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator+=(const Vector<eT>& v)
{
    coda_extra_debug_funcname();
    arrayops::inplace_plus(memptr(), v.memptr(), nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator-=(const Vector<eT>& v)
{
    coda_extra_debug_funcname();
    arrayops::inplace_minus(memptr(), v.memptr(), nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator%=(const Vector<eT>& v)
{
    coda_extra_debug_funcname();
    arrayops::inplace_mult(memptr(), v.memptr(), nelem);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Vector<eT>& Vector<eT>::operator/=(const Vector<eT>& v)
{
    coda_extra_debug_funcname();
    arrayops::inplace_div(memptr(), v.memptr(), nelem);
    return *this;
}
template <typename eT>
template <typename T1, typename op_type>
inline Vector<eT>::Vector(const VectorCwiseOp<T1, op_type>& op) : nelem(0) ,mem(0)
{
    cwise_op<op_type>::apply(*this, op);
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Vector<eT>& Vector<eT>::operator=(const VectorCwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Vector<eT>& Vector<eT>::operator+=(const VectorCwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply_inplace_plus(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Vector<eT>& Vector<eT>::operator-=(const VectorCwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply_inplace_minus(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Vector<eT>& Vector<eT>::operator%=(const VectorCwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply_inplace_schur(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Vector<eT>& Vector<eT>::operator/=(const VectorCwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply_inplace_div(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline Vector<eT>::Vector(const VectorCwiseExpr<T1, T2, op_type>& op) : nelem(0) ,mem(mem)
{
    cwise_expr<op_type>::apply(*this, op);
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Vector<eT>& Vector<eT>::operator=(const VectorCwiseExpr<T1, T2, op_type>& op)
{
    cwise_expr<op_type>::apply(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Vector<eT>& Vector<eT>::operator+=(const VectorCwiseExpr<T1, T2, op_type>& op)
{
    cwise_expr<op_type>::apply_inplace_plus(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Vector<eT>& Vector<eT>::operator-=(const VectorCwiseExpr<T1, T2, op_type>& op)
{
    cwise_expr<op_type>::apply_inplace_minus(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Vector<eT>& Vector<eT>::operator%=(const VectorCwiseExpr<T1, T2, op_type>& op)
{
    cwise_expr<op_type>::apply_inplace_schur(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Vector<eT>& Vector<eT>::operator/=(const VectorCwiseExpr<T1, T2, op_type>& op)
{
    cwise_expr<op_type>::apply_inplace_div(*this, op);
    return *this;
}

template <typename eT>
template <typename T1, typename T2, typename op_type> 
inline Vector<eT>::Vector(const VectorExpr<T1, T2, op_type>& op) : nelem(0) ,mem(mem)
{
    coda_extra_debug_funcname();
    op_type::apply(*this, op);
}

template <typename eT>
template <typename T1, typename T2, typename op_type> 
inline const Vector<eT>& Vector<eT>::operator= (const VectorExpr<T1, T2, op_type>& op)
{
    coda_extra_debug_funcname();
    op_type::apply(*this, op);
    return *this;
}

