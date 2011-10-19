#include <coda/coda.h>
using namespace coda;
int main(int argc, char const* argv[]) {
  Matrix<float> A(25, 25), B(25, 15), C(15, 25);

  B.fill(2.0);
  C.fill(3.0);

  Vector<float> x(A.nrows), y;
  x.ones();
  
  y.resize(x.nelem);
  
  const uint nrepeat = 500000;
  
  Timer timer("matvec");
  info("(B*C)*x");
  timer.start();
  for (uint i = 0; i < nrepeat; ++i) {
    y = (B * C) * x;
  }
  timer.stop();
  
  info("B*(C*x)");
  timer.start();
  for (uint i = 0; i < nrepeat; ++i) {
    y = B * (C * x);
  }
  timer.stop();
  
  info("B*C*x");
  timer.start();
  for (uint i = 0; i < nrepeat; ++i) {
    y = B * C * x;
  }
  timer.stop();
  
  y.print("y:");
  
  return 0;
}
