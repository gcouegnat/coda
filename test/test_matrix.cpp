#include <coda/coda.h>

using coda::Matrix;

int main (int argc, char const *argv[])
{
  Matrix<float> A(5,5), B(5,5), C(5,5);
  A.randu();
  A.print("A:");
  
  // B=trans(A);
  //  B.print("trans(A):");
  // 
  //  B= -A;
  //  B.print("-A:");
 
  B.randu();
  B.print("B:");
 
  C=A+B;
  C.print("C=A+B:");
 
  // C=0.5*(trans(A)+A);
  // C.print("0.5*(trans(A)+A)");
  // 
  // B=inv(C);
  // B.print("inv(C):");
  
  SymMatrix<float> D(5);
  D.randu();
  
  
  
  D.print("D:");
  
    
  return 0;
}