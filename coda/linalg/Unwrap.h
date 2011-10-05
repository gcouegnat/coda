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
    static const bool do_trans = false;

    inline Unwrap(const T1& A) : M(A)
    {
        coda_extra_debug_funcname();
    }
};


template <typename eT>
class Unwrap< Matrix<eT> >
{
public:
    const Matrix<eT>& M;
    static const bool do_trans = false;

    inline Unwrap(const Matrix<eT>& A) : M(A)
    {
        coda_extra_debug_funcname();
    }
};

template <typename eT>
class Unwrap< Vector<eT> >
{
public:
    const Vector<eT>& M;
    static const bool do_trans = false;

    inline Unwrap(const Vector<eT>& A) : M(A)
    {
        coda_extra_debug_funcname();
    }
};





} /* namespace coda */

#endif /* UNWRAP_H */
