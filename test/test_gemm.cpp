#include <coda/coda.h>
using namespace coda;
int main(int argc, char const* argv[]) {
  Matrix<float> A(50, 50), B(50, 150), C(150, 50);

  B.fill(2.0);
  C.fill(3.0);

  Vector<float> x(A.nrows), y;
  x.ones();
  
  y.resize(x.nelem);
  
  const uint nrepeat = 5000;
  
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
