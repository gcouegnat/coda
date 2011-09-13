#ifndef MATRIXOP_H
#define MATRIXOP_H


#include "Matrix.h"
#include "Vector.h"
#include <coda/utils/Expression.h>

template <typename MT1>
class Dummy {};

namespace coda
{
	
//-----------------------------------------------------------------------------
template <class MT1, class MT2>
class MatrixAdd : public MatrixET< MatrixAdd<MT1,MT2> >
{
public:

    explicit MatrixAdd(const MT1& lhs, const MT2& rhs) : lhs_(lhs), rhs_(rhs) {};

    int size() const
    {
        return lhs_.size();
    }

    double operator[] (int i) const
    {
        return lhs_[i] + rhs_[i];
    }

private:
    const MT1& lhs_;
    const MT2& rhs_;

};

template <typename MT1, typename MT2>
MatrixAdd<MT1,MT2> operator+ (const MatrixET<MT1>& rhs, const MatrixET<MT2>& lhs)
{
    return MatrixAdd<MT1,MT2>(~rhs, ~lhs);
}



} /* end of namespace coda */

#endif /* end of include guard: MATRIXOP_H */
