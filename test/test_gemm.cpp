#include <coda/coda.h>
using namespace coda;
int main(int argc, char const *argv[])
{
    Matrix<float> A(5,5), B(5,3), C(3,5);
    
    A.fill(1.0);
    B.fill(2.0);
    C.fill(3.0);
    A = B * C;
    // A.print("A:");

    Vector<float> x(A.nrows), y;
    x.randu();
    y.resize(x.nelem);
    y.randu();
    
    const uint nrepeat = 1000000;
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
