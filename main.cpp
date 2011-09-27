#include <iostream>

#include <coda/coda.h>
using namespace coda;

typedef float Scalar;

int main (int argc, char const *argv[])
{
#ifdef CODA_DEBUG
    std::cout << "Compiled with CODA_DEBUG" << std::endl;
#endif
#ifdef CODA_EXTRA_DEBUG
    std::cout << "Compiled with CODA_EXTRA_DEBUG" << std::endl;
#endif

    Matrix<Scalar> A(5,3);
    Matrix<Scalar> B(5,3);

    A.fill(0.0);
    B.fill(2.0);

    Matrix<Scalar> C;
    A.print("A = ");
    B.print("B = ");
    C = 2.0*trans(A+B)*(A-B);
    C.print("C = ");

    Vector<Scalar> x(5), y(5), z(5);
    x.fill(1.0);
    z.fill(0.1);
    y = (trans(A) * x) + z;
    y.print("y = ");
    coda_debug_assert_same_size(10,5,11,5, CODA_FUNCNAME);

    return 0;
}
