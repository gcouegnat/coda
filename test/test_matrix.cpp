#include <coda/coda.h>

int main (int argc, char const *argv[])
{
  coda::Matrix<float> A(3,3);
  A.fill();
  A.print("A:");
  
  return 0;
}