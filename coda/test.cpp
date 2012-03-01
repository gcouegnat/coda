#include <coda/coda.h>
using namespace coda;

int main(int argc, const char *argv[])
{
  Matrix<double> A(5,5);
  A.fill(5);
  A.print();

  return 0;
}
