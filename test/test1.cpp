#include <coda/coda.h>
using namespace coda;

typedef Matrix<double> Matrixd;
typedef Matrix<float> Matrixf;

int main(int argc, char const *argv[])
{
    info("Coda "+coda_version::as_string());
    info("testing matrix");
    Matrixd A(4,4);
    A.fill(0.1);
    A(3,3)=0;
    A(2,3)=99.99999999;
    A.print("A:");
    
    info("testing matrix operations");
    A+=2;
    
    A.print("A+=2");
    Matrixd B;
    
    B=A;
    B.print("B=A");
    
    info("testing cwise_exp");
    Matrixd C;
    C=A+B;
    C.print("C=A+B");

    C=A%B;
    C.print("C=A%B");

    info("testing cwise_op");
    C=A+2;
    C.print("C=A+2");


    info("testing vector");
    Vector<double> x(10);
    //x.basis(2);
    //x.at(0)=10;
    x.fill(1.234);
    x[1]=-10.0001;
    x.print("x = ");
    
    info("testing operations");
    info("x+=2");
    x+=2;
    x.print("x+=2");
    
    Vector<double> y;
    y=x;
    y.print("y=x");
    
    y+=x;
    y.print("y=+x");
    
    info("testing cwiseop");
    y=x+2;
    y.print("y=x+2");

    y=abs(x);
    y.print("y=abs(x)");

    y=ramp(x);
    y.print("y=ramp(x)");

    info("testing cwiseop");
    Vector<double> z;
    x.print("x=");
    y.print("y=");
    
    z=x+y;
    z.print("z=x+y");
    
    z=x-y;
    z.print("z=x-y");        

    z=trans(x)*y;
    z.print("z=x*y");        
    error("Ohhh !");
    return 0;
}
