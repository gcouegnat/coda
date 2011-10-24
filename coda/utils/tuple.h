#ifndef TUPLE_H
#define TUPLE_H

namespace coda {
template <typename T1, typename T2, typename T3>
struct tuple {
  typedef T1 first_type;
  typedef T2 second_type;
  typedef T3 third_type;

  T1 first;
  T2 second;
  T3 third;

  tuple() : first(T1()), second(T2()), third(T3()) {}
  tuple(const T1& x, const T2& y, const T3& z) : first(x), second(y), third(z) {}

  template <typename U, typename V, typename W>
  tuple(const tuple<U, V, W> &t) : first(t.first), second(t.second), third(t.third) {}

};


template <typename T1, typename T2, typename T3>
tuple<T1, T2, T3> make_tuple(T1 x, T2 y, T3 z) {
  return (tuple<T1, T2, T3>(x, y, z));
}


template <typename T1, typename T2, typename T3>
bool operator<(const tuple<T1, T2, T3>& x, const tuple<T1, T2, T3>& y) {
  if (x.first < y.first) {
    return true;
  } else if ((x.first == y.first) && (x.second < y.second)) {
    return true;
  } else {
    return false;
  }
}


}    // namespace coda

#endif /* TUPLE_H */
