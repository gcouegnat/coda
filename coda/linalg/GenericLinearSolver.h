#ifndef GENERICLINEARSOLVER_H
#define GENERICLINEARSOLVER_H

namespace coda
{

// forward declaration
template <class Scalar>
class Matrix;

template <class Scalar>
class GenericLinearSolver
{

public:
    GenericLinearSolver() {};
    virtual int solve(Matrix<Scalar>& A) = 0;
};

} /* namespace coda */

#endif /* end of include guard: LINEARSOLVER_H */
