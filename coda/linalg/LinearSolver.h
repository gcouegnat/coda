#ifndef LINEARSOLVER_H
#define LINEARSOLVER_H

#include <string>
#include <iostream>

#include "GenericLinearSolver.h"
#include "LinearSolver.h"
#include "MumpsSolver.h"

namespace coda
{
template <class Scalar>
class LinearSolver
{

public:
    LinearSolver(std::string solver_type = "mumps");
    ~LinearSolver();
    int solve(Matrix<Scalar>& A);

private:
    GenericLinearSolver<Scalar>* _solver;

};

#include "LinearSolver.hpp"

} /* namespace coda */


#endif /* end of include guard: LINEARSOLVER_H */
