#ifndef MUMPS_HPP
#define MUMPS_HPP

#include "GenericLinearSolver.h"

namespace coda
{

template <class Scalar>
class MumpsSolver : public GenericLinearSolver<Scalar>
{
public:
    MumpsSolver();
    ~MumpsSolver() {};
    int solve(Matrix<Scalar>& A);
};

// Implementation of class MumpsSolver

#include <iostream>
using std::cout;
using std::endl;

template <class Scalar>
MumpsSolver<Scalar>::MumpsSolver()
{
    cout << "instantiating a Mumps solver" << endl;
}


template <class Scalar>
int MumpsSolver<Scalar>::solve(Matrix<Scalar>& A)
{
    cout << "Solve with Mumps" << endl;
    return 0;
}


template <>
int MumpsSolver<float>::solve(Matrix<float>& A)
{
    cout << "Solve with Mumps (float)" << endl;
    return 0;
}

template <>
int MumpsSolver<double>::solve(Matrix<double>& A)
{
    cout << "Solve with Mumps (double)" << endl;
    return 1;
}

} /* namespace coda */

#endif /* end of include guard: MUMPS_HPP */

