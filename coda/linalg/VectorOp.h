#ifndef VECTOROP_H
#define VECTOROP_H


#include "Matrix.h"
#include "Vector.h"
#include <coda/utils/Expression.h>

namespace coda
{


//-----------------------------------------------------------------------------
// VectorAdd
//-----------------------------------------------------------------------------
template <typename VT1, typename VT2>
class VectorAdd : public VectorET< VectorAdd<VT1,VT2> >
{
public:

    explicit VectorAdd(const VT1& lhs, const VT2& rhs) : lhs_(lhs), rhs_(rhs) {};
    int size() const
    {
        return lhs_.size();
    }
    float operator[] (int i) const
    {
        return lhs_[i] + rhs_[i];
    }

private:
    const VT1& lhs_;
    const VT2& rhs_;

};

template <typename VT1, typename VT2>
VectorAdd<VT1,VT2> operator+ (const VectorET<VT1>& rhs, const VectorET<VT2>& lhs)
{
    return VectorAdd<VT1,VT2>(~rhs, ~lhs);
}

//-----------------------------------------------------------------------------
template<typename MT, typename VT>
class MatVecMult : public VectorET< MatVecMult<MT,VT> >
{
public:
    MatVecMult(const MT& mat, const VT& vec) : mat_(mat), vec_(vec) { }

    int size() const
    {
        return vec_.size();
    }

    float operator[] (int i) const
    {
				float tmp = 0.0;
				const int n = mat_.n();
				for(int j=0; j < n; j+=8)
				{
					tmp+=mat_[i*n+j	 ]*vec_[j  ];
					tmp+=mat_[i*n+j+1]*vec_[j+1];
					tmp+=mat_[i*n+j+2]*vec_[j+2];
					tmp+=mat_[i*n+j+3]*vec_[j+3];
					tmp+=mat_[i*n+j+4]*vec_[j+4];
					tmp+=mat_[i*n+j+5]*vec_[j+5];
					tmp+=mat_[i*n+j+6]*vec_[j+6];
					tmp+=mat_[i*n+j+7]*vec_[j+7];

				}
					
        return tmp;
    }

private:
    const MT& mat_;
    const VT& vec_;
};

template <typename MT, typename VT>
MatVecMult<MT,VT> operator* (const MatrixET<MT>& mat, const VectorET<VT>& vec)
{
    return MatVecMult<MT,VT>(~mat, ~vec);
}


} /* end of namespace coda */

#endif /* end of include guard: VECTOROP_H */
