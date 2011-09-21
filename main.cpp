#include <iostream>

#include <coda/coda.h>
using namespace coda;

int main (int argc, char const *argv[])
{
 
	Vector<float> x(10), y(10), z;

	x.fill(1.0);
	y.fill(2.0);
	
	x.print("x = ");
	y.print("y = ");
	
	z = x + y;
	
	z.print("z = ");

	z.resize(5);
	z.fill(0.0);
	z.print("z = ");
	
	
	Matrix<float> A(30,30);
	Matrix<float> B(30,30);
	Matrix<float> C(30,30);


	A.fill(1.0);
	B.fill(2.0);
	C.fill(3.0);	
	
	std::cout << "trace(A) = " << trace(A) << std::endl;
	std::cout << "trace(B) = " << trace(B) << std::endl;
	std::cout << "trace(C) = " << trace(C) << std::endl;
	
	
	std::cout << "trace(A+B) = " << trace(A+B) << std::endl;
	
	std::cout << "trace(A+B+C) = " << trace(A+B+C) << std::endl;
	
    return 0;
}
