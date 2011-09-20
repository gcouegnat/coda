#include <iostream>

#include <coda/coda.h>
using namespace coda;

#include <armadillo>

int main (int argc, char const *argv[])
{
 
	Vector<float> x(10), y(10), z;

	x.fill(1.0);
	y.fill(2.0);
	
	x.print("x = ");
	y.print("y = ");
	
	z = x + y;
	
	z.print("z = ");
	
    return 0;
}
