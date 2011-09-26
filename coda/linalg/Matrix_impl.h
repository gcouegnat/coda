
using namespace coda;

#include <iostream>
#include <iomanip>

#include <coda/utils/access.h>

//-----------------------------------------------------------------------------
template <typename eT>
inline Matrix<eT>::~Matrix()
{
    debug_sigprint();
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
    debug_sigprint();
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Matrix<eT>::Matrix(uint in_rows, uint in_cols)
    : nrows(0), ncols(0), nelem(0) ,mem(0)
{
    debug_sigprint();

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
    debug_sigprint();

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
    debug_sigprint();

    arrayops::inplace_plus(memptr(), val, nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator-=(const eT val)
{
    debug_sigprint();

    arrayops::inplace_minus(memptr(), val, nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator*=(const eT val)
{
    debug_sigprint();

    arrayops::inplace_mult(memptr(), val, nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator/=(const eT val)
{
    debug_sigprint();

    arrayops::inplace_div(memptr(), val, nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline Matrix<eT>::Matrix(const Matrix<eT>& m)
    : nrows(0), ncols(0), nelem(0), mem(mem)
{
    debug_sigprint();

    if (this != &m)
    {
        init(m.nrows, m.ncols);
        arrayops::copy(memptr(), m.mem, m.nelem);
    }

}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator=(const Matrix& m)
{
    debug_sigprint();

    init(m.ncols, m.nrows);
    arrayops::copy(memptr(), m.mem, m.nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator+=(const Matrix& m)
{
    debug_sigprint();

    arrayops::inplace_plus(memptr(), m.memptr(), nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator-=(const Matrix& m)
{
    debug_sigprint();

    arrayops::inplace_minus(memptr(), m.memptr(), nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator%=(const Matrix& m)
{
    debug_sigprint();

    arrayops::inplace_mult(memptr(), m.memptr(), nelem);

    return *this;

}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::operator/=(const Matrix& m)
{
    debug_sigprint();

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
    debug_sigprint();

    arrayops::inplace_set(memptr(), val, nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::zeros()
{
    debug_sigprint();

    arrayops::inplace_set(memptr(), eT(0), nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::ones()
{
    debug_sigprint();

    arrayops::inplace_set(memptr(), eT(1), nelem);

    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Matrix<eT>::resize(uint in_rows, uint in_cols)
{
    debug_sigprint();
    if ((nrows!=in_rows) || (ncols!=in_cols))
    {
        init(in_rows, in_cols);
    }

}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Matrix<eT>::reshape(uint in_rows, uint in_cols)
{
    debug_sigprint();
    coda_debug_function_not_implemented();
}
//-----------------------------------------------------------------------------
template <typename eT>
inline uint Matrix<eT>::size()
{
    return nelem;
}
template <typename eT>
inline const Matrix<eT>& Matrix<eT>::symmetrize()
{
	debug_sigprint();
	
	for(uint i=0; i < nrows; ++i)
	{
		for(uint j=0; j < ncols; ++j)
		{
			const eT val = 0.5*((*this)(i,j)+(*this)(j,i));
			(*this)(i,j) = (*this)(j,i) = val;
		}
	}
	return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void Matrix<eT>::print(std::string text)
{
    debug_sigprint();
	
	std::ostream& out = std::cout;
    out << text << std::endl;
	
	std::ios::fmtflags old_flags = out.flags();
	uint old_prec = out.precision(4);

	out.setf(std::ios::scientific, std::ios::floatfield);
	uint width = 11;

    for(uint i=0; i < nrows; i++)
    {
        for (uint j=0; j < ncols; j++)
        {
            out << std::setw(width) << mem[i*ncols+j] << "  ";
        }
        out << std::endl;
    }

	out.flags(old_flags);
	out.precision(old_prec);
}

//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline Matrix<eT>::Matrix(const CwiseOp<T1, op_type>& op) : nrows(0), ncols(0), nelem(0) ,mem(0)
{
    cwise_op<op_type>::apply(*this, op);
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator=(const CwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator+=(const CwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply_inplace_plus(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator-=(const CwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply_inplace_minus(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator%=(const CwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply_inplace_schur(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator/=(const CwiseOp<T1, op_type>& op)
{
    cwise_op<op_type>::apply_inplace_div(*this, op);
    return *this;
}


//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline Matrix<eT>::Matrix(const CwiseBinaryOp<T1, T2, op_type>& op) : nrows(0), ncols(0), nelem(0) ,mem(mem)
{
    cwise_binary_op<op_type>::apply(*this, op);
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator=(const CwiseBinaryOp<T1, T2, op_type>& op)
{
    cwise_binary_op<op_type>::apply(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator+=(const CwiseBinaryOp<T1, T2, op_type>& op)
{
    cwise_binary_op<op_type>::apply_inplace_plus(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator-=(const CwiseBinaryOp<T1, T2, op_type>& op)
{
    cwise_binary_op<op_type>::apply_inplace_minus(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator%=(const CwiseBinaryOp<T1, T2, op_type>& op)
{
    cwise_binary_op<op_type>::apply_inplace_schur(*this, op);
    return *this;
}
//-----------------------------------------------------------------------------
template <typename eT>
template <typename T1, typename T2, typename op_type>
inline const Matrix<eT>& Matrix<eT>::operator/=(const CwiseBinaryOp<T1, T2, op_type>& op)
{
    cwise_binary_op<op_type>::apply_inplace_div(*this, op);
    return *this;
}

template <typename eT>
template <typename T1, typename op_type> 
inline Matrix<eT>::Matrix(const Op<T1, op_type>& op) : nrows(0), ncols(0), nelem(0), mem(mem)
{
	debug_sigprint();
	op_type::apply(*this, op);
}

template <typename eT>
template <typename T1, typename op_type> 
inline const Matrix<eT>& Matrix<eT>::operator=(const Op<T1, op_type>& op)
{
	debug_sigprint();
	op_type::apply(*this, op);
	return *this;
}



