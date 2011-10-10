#include <coda/coda.h>
using namespace coda;
int main(int argc, char const *argv[])
{
    Matrix<float> A(50,50), B(50,30), C(30,50);
    A.fill(1.0);
    B.fill(2.0);
    C.fill(3.0);
    A = B * C;
    A.print("A:");

    Vector<float> x(A.nrows), y;
    x.randu();
    x.print("x:");
    
    const uint nrepeat = 100000;
    Timer timer("matvec");
    
    info("(B*C)*x");
    timer.start();
    for(uint i=0;i<nrepeat;++i)
    {
        y=(B*C)*x;        
    }
    timer.stop();

    info("B*(C*x)");
    timer.start();
    for(uint i=0;i<nrepeat;++i)
    {
        y=B*(C*x);        
    }
    timer.stop();

    info("B*C*x");
    timer.start();
    for(uint i=0;i<nrepeat;++i)
    {
        y=B*C*x;        
    }
    timer.stop();

    return 0;
}
