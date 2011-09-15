#include <coda/coda.h>
using namespace coda;

#include <armadillo>
// #include <eigen3/Eigen/Dense>

template < int N, int R > void
run_benchmark (void)
{
    Timer timer ("template");
    Vector x (N), y (N), z (N), u (N);
    x = 1.0;
    y = 2.0;
    z = 3.0;
    timer.start ();
    for (int i = 0; i < R; ++i)
    {
        u = 2.0 * (x + y) - (x - 1.5 * z);
    }
    timer.stop ();
}

template < int N, int R > void
run_benchmark_C (void)
{
    Timer timer ("plain C");
    Vector x (N), y (N), z (N), u (N);
    x = 1.0;
    y = 2.0;
    z = 3.0;
    timer.start ();
    for (int i = 0; i < R; ++i)
    {
        for (int k = 0; k < N; ++k)
            u[k] = 2.0 * (x[k] + y[k]) - (x[k] - 1.5 * z[k]);
    }
    timer.stop ();
}

template < int N, int R > void
run_benchmark_arma (void)
{
    Timer timer ("arma");
    arma::vec x (N), y (N), z (N), u (N);
    x.fill (1.0);
    y.fill (2.0);
    z.fill (3.0);
    timer.start ();
    for (int i = 0; i < R; ++i)
    {
        u = 2.0 * (x + y) - (x - 1.5 * z);
    }
    timer.stop ();
}


int
main (int argc, char const *argv[])
{
    set_log_level (ERROR);
    run_benchmark < 10, 10000000 > ();
    run_benchmark < 100, 1000000 > ();
    run_benchmark < 1000, 100000 > ();
    run_benchmark < 10000, 10000 > ();
    run_benchmark < 100000, 1000 > ();
    run_benchmark < 1000000, 100 > ();
    run_benchmark < 10000000, 10 > ();
    run_benchmark_C < 10, 10000000 > ();
    run_benchmark_C < 100, 1000000 > ();
    run_benchmark_C < 1000, 100000 > ();
    run_benchmark_C < 10000, 10000 > ();
    run_benchmark_C < 100000, 1000 > ();
    run_benchmark_C < 1000000, 100 > ();
    run_benchmark_C < 10000000, 10 > ();
    run_benchmark_arma < 10, 10000000 > ();
    run_benchmark_arma < 100, 1000000 > ();
    run_benchmark_arma < 1000, 100000 > ();
    run_benchmark_arma < 10000, 10000 > ();
    run_benchmark_arma < 100000, 1000 > ();
    run_benchmark_arma < 1000000, 100 > ();
    run_benchmark_arma < 10000000, 10 > ();
    return 0;
}
