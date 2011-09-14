#include <iostream>
#include <coda/coda.h>

using namespace coda;

int main(int argc, char const *argv[])
{

    //  set_log_level(INFO);

    // Timer timer;
    //	system("sleep 1");
    //	timer.stop();

    // std::cout << "Elapsed time: " << timer.value() << " sec" << std::endl;
    //
    //  std::cout << coda::parameters.str() << std::endl;
    //  debug2("This is a debug %d/%d", 1, 2); // printing
    //  info("This an info"); // printing
    //  warning("This a warning"); // printing
    //
    //  info("init a vector of size 10");
    //  Vector x(10);
    //  std::cout << x.str() << std::endl;
    //  for (int i = 0; i < x.size(); ++i)
    //    std::cout << "x[" << i << "] = " << x[i] << std::endl;
    //
    //  info("put some values in it");
    //  x[0] = 0;
    //  x[1] = 1;
    //  x[2] = 2;
    //  x[3] = 3;
    //  x[4] = 4;
    //
    //  x *= 2.0;

    // std::cout << x.str() << std::endl;
    // for(int i=0; i<x.size(); ++i)
    // 	std::cout << "x["<<i<<"] = " << x[i] << std::endl;
    //
    // Vector y(10);
    // std::cout << y.str() << std::endl;
    // y=x;
    // std::cout << y.str() << std::endl;
    // for(int i=0; i<y.size(); ++i)
    // 	std::cout << "y["<<i<<"] = " << y[i] << std::endl;
    //
    //
    // info("resize it at 10");
    // x.resize(10);
    // std::cout << x.str() << std::endl;
    // for(int i=0; i<x.size(); ++i)
    // 	std::cout << "x["<<i<<"] = " << x[i] << std::endl;


    //  Timer timer("MAIN");
    //
    //  Vector y;
    //
    //  x.resize(1000);
    //  y.resize(1000);
    //
    //  x = 1.0;
    //  y = 2.0;
    //
    //  timer.start();
    //  for (int k = 0; k < 100000; ++k)
    //    x += y;
    //  timer.stop();
    //
    //  timer.start();
    //  for (int k = 0; k < 100000; ++k)
    //    x.add(1.0, y);
    //  timer.stop();
    //
    //
    //
    //  x.resize(36);
    //  y.resize(36);
    //
    //  info("Declare z");
    //  Vector z;
    //  Vector u(36);
    //  Vector v(36);
    //  Vector w(36);
    //
    //  x = 2.0;
    //  y = 1.0;
    //  u = v = w = x;
    //
    //  info("Operator style");
    //  timer.start();
    //  for (int k = 0; k < 1000000; ++k)
    //    z = x + y + u + v + w;
    //  timer.stop();
    //
    //  info("Add function");
    //  timer.start();
    //  for (int k = 0; k < 1000000; ++k)
    //  {
    //    z = x;
    //    z += y;
    //    z += u;
    //    z += v;
    //    z += w;
    //  }
    //  timer.stop();



    // for(int i=0; i<z.size(); ++i)
    // 		std::cout << "z["<<i<<"] = " << z[i] << std::endl;

    // coda::set_log_level(DEBUG);
    //
    //     const int N = 10000;
    //         const int NREPEAT = 10000;
    //
    //         Vector x(N), y(N), z(N), u(N), v(N), w(N);
    //
    //         coda::info("Create vectors");
    //
    //         x = 10.0;
    //         y = 2.0;
    //         u = 3.0;
    //         v = 4.0;
    //         w = 10.0;
    //
    //         Timer timer("Expression template ");
    //         timer.start();
    //         for (int i = 0; i < NREPEAT; ++i)
    //         {
    // 					z =x+y+u+v+w;
    //         }
    //         timer.stop();
    //         info(z.str());
    //         // for (int i = 0; i < z.size(); ++i)
    //         //     std::cout << "z[" << i << "] = " << z[i] << std::endl;
    //
    //
    //         timer.rename("C-style");
    //         timer.start();
    //         for (int i = 0; i < NREPEAT; ++i)
    //         {
    //             // for (int j = 0; j < z.size(); j++)
    //     	        for (int j = 0; j < z.size(); j+=4)
    //
    //     {
    //     		z[j] = 2.0* (x[j]+y[j]) - u[j]+v[j] -w[j];
    //         z[j+1] = 2.0* (x[j+1]+y[j+1]) - u[j+1]+v[j+1] -w[j+1];
    //            z[j+2] = 2.0* (x[j+2]+y[j+2]) - u[j+2]+v[j+2] -w[j+2];
    //            z[j+3] = 2.0* (x[j+3]+y[j+3]) - u[j+3]+v[j+3] -w[j+3];
    //
    //     }   }
    //         timer.stop();
    //         info(z.str());
    //         // for (int i = 0; i < z.size(); ++i)
    //         //      std::cout << "z[" << i << "] = " << z[i] << std::endl;
    //
    //
    //         timer.rename("In-place operator");
    //         z = 0.0;
    //         timer.start();
    //         for (int i = 0; i < NREPEAT; ++i)
    //         {
    //             z.eq(1.0, x, 1.0, y);
    //             z *= 2.0;
    //             z -= u;
    //             z += v;
    //             z -= w;
    //         }
    //         timer.stop();
    //
    //         info(z.str());
    // for (int i = 0; i < z.size(); ++i)
    //     std::cout << "z[" << i << "] = " << z[i] << std::endl;


// 		Vector a(10), x(10), y(10), z(10);
//
// 		a=0.0;
// 		x=1.0;
// 		y=2.0;
// 		z=3.0;
//
// 		a.assign(z);
// 		a=x+y+z;
//
// //		a = x + y + z;
//
// 		// x.eval(z);
//     for (int i = 0; i < a.size(); ++i)
//          std::cout << "a[" << i << "] = " << a[i] << std::endl;

    set_log_level(DEBUG);

    info("Create matrices");
    Matrix A(10,10);
    Matrix B(10,10);
    Matrix C(10,10);
    Matrix D(10,10);

    info("Create vectors");
    Vector x(10), y(10), z(10), u(10), v(10);

		A = B * D * C;


    return 0;
}
