#include <algorithm>

#include <coda/coda.h>
using namespace coda;

int main(int argc, char const* argv[]) {
  Array<int> rows;
  Array<int> cols;
  Array<double> values;
  const uint length = 5000000;
  values.resize(length);
  rows.resize(length);
  cols.resize(length);
  for (uint i = 0; i < rows.size() ; ++i) {
    rows[i] = static_cast<int>(10 * coda::randu<double>());
    cols[i] = static_cast<int>(10 * coda::randu<double>());
    values[i] = coda::randu<double>();
  }
  Array< tuple<int, int, double> > tmp;
  tmp.resize(length);
  for (uint i = 0; i < tmp.size(); ++i) {
    tmp[i] = make_tuple(rows[i], cols[i], values[i]);
  }
  info("before sorting:");
  for (uint i = 0; i < 10; ++i) {
    std::cout << "(" << tmp[i].first << ", ";
    std::cout << tmp[i].second << ") ";
    std::cout << tmp[i].third << "\n";
  }
  std::cout << "..." << std::endl;
  Timer timer("sorting");
  for (uint k = 0; k < 5; k++) {
    timer.start();
    std::sort(tmp.begin(), tmp.end());
    timer.stop();
  }
  info("after sorting:");
  for (uint i = 0; i < 10; ++i) {
    std::cout << "(" << tmp[i].first << ", ";
    std::cout << tmp[i].second << ") ";
    std::cout << tmp[i].third << "\n";
  }
  std::cout << "..." << std::endl;
  return 0;
}