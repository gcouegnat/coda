#ifndef TRAITS_H
#define TRAITS_H

namespace coda {
template<typename T1, typename T2>
struct is_same_type {
  static const bool value = false;
};


template<typename T1>
struct is_same_type<T1, T1> {
  static const bool value = true;
};

} /* namespace coda */

#endif /* TRAITS_H */
