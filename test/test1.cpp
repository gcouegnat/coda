#include <coda/coda.h>
using namespace coda;

typedef Matrix<double> Matrixd;
typedef Matrix<float> Matrixf;

int main(int argc, char const* argv[]) {
  info(coda::version());
  info("testing matrix");
  Matrixd A(4, 4);
  A.fill(0.1);
  A.print("A:");
  A.randu();
  A.print("A:");
  info("testing matrix operations");
  A += 2;
  A.print("A+=2");
  Matrixd B;
  B = A;
  B.print("B=A");
  info("testing cwise_exp");
  Matrixd C;
  C = A + B;
  C.print("C=A+B");
  C = A % B;
  C.print("C=A%B");
  info("testing cwise_op");
  C = A + 2;
  C.print("C=A+2");
  info("testing vector");
  Vector<double> x(4);
  x.basis(2);
  x.at(0) = 10;
  x[1] = -10.0001;
  x.print("x:");
  x.randu();
  x.print("x:");
  info("testing operations");
  info("x+=2");
  x += 2;
  x.print("x+=2");
  Vector<double> y;
  y = x;
  y.print("y=x");
  y += x;
  y.print("y=+x");
  info("testing cwiseop");
  y = x + 2;
  y.print("y=x+2");
  y = abs(x);
  y.print("y=abs(x)");
  y = ramp(x);
  y.print("y=ramp(x)");
  info("testing cwiseop");
  Vector<double> z;
  x.print("x=");
  y.print("y=");
  z = x + y;
  z.print("z=x+y");
  z = x - y;
  z.print("z=x-y");
  z = 2.0 * x * (y - 1.0);
  z.print("z=2*x*(y-1)");
  z = 2.0 * (A + B) * x - C * y;
  z.print("2.0*(A+B)*x-C*y");
  z[0] = -100;
  info("norm1(z)    : %f", norm1(z));
  info("norm2(z)    : %f", norm2(z));
  info("norm_max(z) : %f", norm_max(z));
  y = A * x;
  for (uint i = 0; i < y.nelem; ++i) {
    y[i] += 1e-4 * randu<double>();
  }
  z = A * x;
  y.print("y :");
  z.print("Ax:");
  std::cout << "norm(Ax-y) = " << norm2(A * x - y) << std::endl;

  coda::warning("This is a warning");
  coda::error("This is an error");
  
  return 0;
}
