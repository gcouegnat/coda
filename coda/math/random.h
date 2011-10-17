#ifndef CODA_MATH_RANDOM_H_
#define CODA_MATH_RANDOM_H_

namespace coda {

bool rand_seeded = false;

template <typename eT>
inline eT randu() {
  if (rand_seeded == false) {
    unsigned int s = static_cast<long int>(time(0));
    std::srand(s);
    rand_seeded = true;
  }
  return static_cast<eT>(std::rand()) / static_cast<eT>(RAND_MAX);
}

template <typename eT>
inline eT randu(eT x) {
  return x*randu<eT>();
}


}  // namespace coda
#endif  // CODA_MATH_RANDOM_H_
