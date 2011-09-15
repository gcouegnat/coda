#ifndef VECTOROP_H
#define VECTOROP_H


#include "Matrix.h"
#include "Vector.h"
#include <coda/utils/Expression.h>
#include <coda/utils/log.h>


namespace       coda
{


// -----------------------------------------------------------------------------
// VectorAdd
// -----------------------------------------------------------------------------
template < typename VT1, typename VT2 >
class VectorAdd:public VectorET < VectorAdd < VT1, VT2 > >
{
public:

    explicit VectorAdd(const VT1 & lhs, const VT2 & rhs):lhs_(lhs),
        rhs_(rhs)
    {
    };
    int             size() const
    {
        return lhs_.size();
    }
    double          operator[] (int i) const
    {
        return lhs_[i] + rhs_[i];
    }
    void            assign(Vector & dest)
    {
    }


private:
    const           VT1 & lhs_;
    const           VT2 & rhs_;

};

template < typename VT1, typename VT2 >
VectorAdd < VT1, VT2 > operator+(const VectorET < VT1 > &rhs,
                                 const VectorET < VT2 > &lhs)
{
    return VectorAdd < VT1, VT2 > (~rhs, ~lhs);
}

// -----------------------------------------------------------------------------
template < typename MT, typename VT > class MatVecMult:public VectorET < MatVecMult < MT,
    VT > >
{
public:
    MatVecMult(const MT & mat, const VT & vec):mat_(mat), vec_(vec)
    {
    }

    int             size() const
    {
        return vec_.size();
    }
    double          operator[] (int i) const
    {
        debug("MatVecMult::operator []");
        double          tmp = 0.0;
        const int       n = mat_.n();
        for             (int j = 0; j < n; ++j)
            tmp += mat_[i * n + j] * vec_[j];
        return tmp;
    }
    template <      typename VT3, typename MT4, typename VT5 >
    static inline void assign(VT3 & C, MT4 & A, VT5 & B)
    {
        debug("coda::assignMatVecMult_impl");
    }

private:
    const           MT & mat_;
    const           VT & vec_;
};

template < typename MT, typename VT >
MatVecMult < MT, VT > operator*(const MatrixET < MT > &mat,
                                const VectorET < VT > &vec)
{
    return MatVecMult < MT, VT > (~mat, ~vec);
}


template < typename VT1, typename MT2, typename VT3 >
void assign(VectorET < VT1 > &lhs, const MatVecMult < MT2,
            VT3 > &rhs)
{
    debug("coda::assign");
    MatVecMult < MT2, VT3 >::assign(~lhs, rhs.lhs_, rhs.rhs_);
}


}				/* end of namespace coda */

#endif				/* end of include guard: VECTOROP_H */
