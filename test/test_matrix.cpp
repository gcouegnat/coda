#include <coda/coda.h>

using coda::Matrix;

int main (int argc, char const *argv[])
{
  Matrix<float> A(5,5), B(5,5), C(5,5);
  A.randu();
  B.randu();
  
  A.print("A:");
  B.print("B:");
 
  C=ramp(A+B-A-B+A+B-A-B+A+B-abs(A)-B);
  
  C.print("C=A+B:");
 
  
    
  return 0;
}