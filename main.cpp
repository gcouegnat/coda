#include <iostream>

#include <coda/coda.h>
using namespace coda;

#include <armadillo>

int main (int argc, char const *argv[])
{
    set_log_level (INFO);

    info("@VECTOR");
   
	Vector<float> x(3), y(3), z(3), u(3), v(3), w(3);
   
	x.fill(1.0);
	y.fill(2.0);
	z.fill(3.0);
	w.fill(4.0);

	u = (x + y) % z / w;

	u.print("result = ");

	
    return 0;
}
