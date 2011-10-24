#include <coda/coda.h>

using coda::Matrix;


typedef double scalar;

int main (int argc, char const *argv[])
{
  Matrix<scalar> A(5,5), B(5,5), C(5,5);
  A.eye();
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
 
  C=0.5*(trans(A)+A);
  C.print("0.5*(trans(A)+A)");
   
  B.resize(3,3);
  
  B.fill();
  B.print("B:");
  
  for(uint i=0; i < B.nelem; ++i)
  {
    std::cout << i << ": " << B[i] << std::endl;
  }

  
  B.zeros();
  B(0,0)=100.0;
  B(1,1)=200.0;
  B(0,1)=20.0;
  B(1,0)=30.0;
  B(1,2)=-10.0;
  B(2,2)=40.0;
  
  
  Matrix<scalar> D(3,3);
  info("Inverse");
  D=inv(B);
  D.print("D = inv(B):");
  
  info("LU");
  D=lu(B);
  D.print("D = lu(B):");
  
  
  D=lu(trans(B));
  D.print("D = lu(trans(B)):");
      
  Vector<scalar> x(3), y(3);
  x[0]=1;  x[1]=2;   x[2]=3;
  y=B*x;
  y.print("y=B*x:");
  y=trans(B)*x;
  y.print("y=B'*x:");
  
      
      
  return 0;
}
