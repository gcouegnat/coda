#include <iostream>

#include <coda/coda.h>
using namespace coda;

typedef float Scalar;

int main (int argc, char const *argv[])
{
 
	Matrix<Scalar> A(5,3);
	Matrix<Scalar> B(5,3);
	
	A.fill(1.0);
	B.fill(2.0);
	
	Matrix<Scalar> C;
	C = trans(A+B);

	A.print("A = ");
	B.print("B = ");
	C.print("C = ");

    return 0;
}
