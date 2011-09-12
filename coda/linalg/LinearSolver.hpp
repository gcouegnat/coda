template <class Scalar>
LinearSolver<Scalar>::LinearSolver(std::string solver_type)
{
    if (solver_type == "mumps")
    {
        std::cout << "Creating a Mumps solver" << std::endl;
        _solver = new MumpsSolver<Scalar>();
    }
    else
    {
        std::cout << "Unknown solver type : " << solver_type << std::endl;
    }
}

template <class Scalar>
LinearSolver<Scalar>::~LinearSolver()
{
    delete _solver;
}

template <class Scalar>
int LinearSolver<Scalar>::solve(Matrix<Scalar>& A)
{
    return _solver->solve(A);
}

