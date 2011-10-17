#ifndef BASE_H
#define BASE_H

namespace coda {
template < typename Derived >
class Base {
  public:
    inline const Derived& derived() const {
      return static_cast<const Derived&>(*this);
    }
};

} /* namespace coda */

#endif /* BASE_H */
