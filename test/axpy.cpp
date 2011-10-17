#include <coda/coda.h>
#include <armadillo>

#define N 100
#define R 10000000

int main(int argc, char const* argv[]) {
  float* x = new float[N];
  float* y = new float[N];
  float a = 1.0f;
  coda::info("Runing plain c test");
  for (unsigned int i = 0; i < N; ++i) {
    x[i] = 1.0f;
  }
  coda::Timer timer("plain c");
  timer.start();
  for (unsigned int j = 0; j < R; ++j) {
    for (unsigned int i = 0; i < N; ++i) {
      y[i] = a * x[i];
    }
    // cblas_saxpy(N,a,x,1,y,1);
  }
  timer.stop();
  coda::info("Runing cblas test");
  timer.rename("cblas");
  timer.start();
  for (unsigned int j = 0; j < R; ++j) {
    for (unsigned int i = 0; i < N; ++i) {
      y[i] = a * x[i];
    }
    // cblas_saxpy(N,a,x,1,y,1);
  }
  timer.stop();
  // for(unsigned int i=0; i<N; ++i) std::cout<<y[i]<<std::endl;
  delete[] x;
  delete[] y;
  coda::info("Runing coda test");
  coda::Vector<float> A(N);
  coda::Vector<float> B(N);
  A.fill(1.0);
  B.fill(0.0);
  timer.rename("coda");
  timer.start();
  for (unsigned int j = 0; j < R; ++j) {
    B = 2.0 * A;
  }
  timer.stop();
  // for(unsigned int i=0; i<N; ++i) std::cout<<B[i]<<" ";
  // std::cout<<std::endl;
  // B.print();
  coda::info("Running armadillo test");
  arma::fvec X(N), Y(N);
  X.fill(1.0);
  Y.fill(0.0);
  timer.rename("arma");
  timer.start();
  for (unsigned int j = 0; j < R; ++j) {
    Y = 2.0 * X;
  }
  timer.stop();
  coda::warning("Hey! This is a warning dumbass!");
  coda::error("Too bad...");
  return 0;
}

