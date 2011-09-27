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

    A.fill(2.0);
    B.fill(2.0);

    info("Matrix operations...");
    Matrix<Scalar> C;
    A.print("A = ");
    B.print("B = ");
    C = 2.0*trans(A+B)*(A-B);
    C.print("C = ");

    info("Vector operations...");
    Vector<Scalar> x(3), y(3), z(3);
    info("vector of size %d x %d", x.nrows, x.ncols);

    x.fill(1.0);
    z.fill(0.1);
    y = trans(trans(A)) * x + z;
    y.print("y = ");
    
    warning("this is a warning");
    
    return 0;
}
