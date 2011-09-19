#include <coda/coda.h>
using namespace coda;

#include <armadillo>
// #include <eigen3/Eigen/Dense>

#define GCCVERSION (__GNUC__ * 100 + __GNUC_MINOR__ * 10 + __GNUC_PATCHLEVEL__)


template <int N, int R>
inline void run_benchmark (void)
{
    Timer timer ("template");
    timer.start ();
    for (int i = 0; i <R; ++i)
    {
        Vector x (N), y (N), z (N), u (N);
        x = 1.0;
        y = 2.0;
        z = 3.0;
        u = 2.0 * (x + y) - (x/2.0 - 1.5 * z);
    }
    timer.stop ();
}

template <int N, int R>
inline void run_benchmark_C (void)
{
    Timer timer ("plain C");
    timer.start ();
    for (int i = 0; i <R; ++i)
    {
        Vector x (N), y (N), z (N), u (N);
        x = 1.0;
        y = 2.0;
        z = 3.0;
        for (int k = 0; k <N; ++k)
            u[k] = 2.0 * (x[k] + y[k]) - (x[k]/2.0 - 1.5 * z[k]);
    }
    timer.stop ();
}

template <int N, int R>
inline void run_benchmark_arma (void)
{
    Timer timer ("arma");
    timer.start ();
    for (int i = 0; i <R; ++i)
    {
        arma::vec x(N), y(N), z(N), u(N);
        x.fill (1.0);
        y.fill (2.0);
        z.fill (3.0);
        u = 2.0 * (x + y) - (x/2.0 - 1.5 * z);
    }
    timer.stop ();
}


int
main (int argc, char const *argv[])
{
    set_log_level (INFO);

	info("Compiled with gcc %d", GCCVERSION);

    info("ARMA");
    run_benchmark_arma <16, 10000000> ();
    run_benchmark_arma <100, 1000000> ();
    run_benchmark_arma <1000, 100000> ();
    run_benchmark_arma <10000, 10000> ();
    run_benchmark_arma <100000, 1000> ();
    run_benchmark_arma <1000000, 100> ();
    run_benchmark_arma <10000000, 10> ();
    info("C");
    // run_benchmark_C <10, 10000000> ();
    // run_benchmark_C <100, 1000000> ();
    // run_benchmark_C <1000, 100000> ();
    // run_benchmark_C <10000, 10000> ();
    // run_benchmark_C <100000, 1000> ();
    // run_benchmark_C <1000000, 100> ();
    // run_benchmark_C <10000000, 10> ();
    info("Template");
    run_benchmark <20, 10000000> ();
    run_benchmark <100, 1000000> ();
    run_benchmark <1000, 100000> ();
    run_benchmark <10000, 10000> ();
    run_benchmark <100000, 1000> ();
    run_benchmark <1000000, 100> ();
    run_benchmark <10000000, 10> ();

//-----------------------------------------------------------------------------
    return 0;
}
