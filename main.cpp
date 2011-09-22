#include <iostream>

#include <coda/coda.h>
using namespace coda;

typedef double Scalar;

int main (int argc, char const *argv[])
{
 
	Vector<Scalar> x(10), y(10), z;

	x.fill(1.0);
	y.fill(2.0);
	
	x.print("x = ");
	y.print("y = ");
	
	z = x + y;
	
	z.print("z = ");

	z.resize(5);
	z.fill(0.0);
	z.print("z = ");
	
	
	Matrix<Scalar> A(10,10);
	Matrix<Scalar> B(10,10);
	Matrix<Scalar> C(10,10);


	A.fill(5.0);
	B.fill(2.0);
	C.fill(3.0);	
	
	std::cout << "trace(A) = " << trace(A) << std::endl;
	std::cout << "trace(A+B) = " << trace(A+B) << std::endl;

	A.print(" A = ");
	
	C = 1.0 + 2.0*(A - B) - 6.5 + (-B+0.1*A/4.0);
	C.print(" C = ");
	
	for(uint i=0; i < C.nrows; ++i)	C(i,i)=1.0;
	C.print(" C = ");

	A += ramp(C) + abs(C);
	A.print(" A = ");
	
	std::cout << "trace( abs(A) ) = " << trace(ramp(A)) << std::endl;
	
	A.fill(1.0);
	for(uint i=0; i < A.nrows; ++i)	A(i,i)=2.0;
	A.print(" A = ");

	inv(A);
	A.print(" A = ");
	
	inv(A);
	A.print(" A = ");
		
    return 0;
}
