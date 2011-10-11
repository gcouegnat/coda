#include <iostream>

#include <coda/coda.h>
using namespace coda;

typedef float Scalar;

int main (int argc, char const *argv[])
{
#ifdef CODA_DEBUG
    info("Compiled with CODA_DEBUG");
#endif
#ifdef CODA_EXTRA_DEBUG
    info("Compiled with CODA_EXTRA_DEBUG");
#endif
    Matrix<Scalar> A(5,3);
    Matrix<Scalar> B(5,3);
    A.randu();
    B.fill(2.0);
    
    info("Matrix operations...");
    Matrix<Scalar> C;
    A.print("A = ");
    B.print("B = ");
    C = 2.0*trans(A+B)*(A-B);
    C.print("C = ");

    return 0;
}
