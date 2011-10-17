#include <coda/coda.h>

using coda::CooSparseMatrix;
typedef float T;

int main(int argc, char const* argv[]) {
  const uint nrows = 100000;
  const uint ncols = 100000;
  CooSparseMatrix<T> A(nrows, ncols);
  CooSparseMatrix<T> B(nrows, ncols);
  A.reserve(86 * nrows);
  coda::Timer t;

  coda::info("Assembling a %u by %u matrix with %u non-zero entries", A.nrows, A.ncols, A.nelem);
  t.start();
  for (uint i = 0; i < A.nelem; ++i) {
    const uint row = static_cast<uint>(coda::randu<T>() * nrows);
    const uint col = static_cast<uint>(coda::randu<T>() * ncols);
    const double val = 1;
    A.insert(row, col, val);
  }
  t.stop();

  coda::info("Sorting");
  t.start();
  A.sort_by_rows_and_cols();
  A.sum_up_duplicates();
  t.stop();

  A.sort_by_rows_and_cols(true);

  coda::info("Saving in text format");
  A.save("/Users/couegnat/Desktop/dumpA.txt");

  return 0;
}

