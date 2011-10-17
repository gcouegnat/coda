#ifndef VECTORBASE_H
#define    VECTORBASE_H

namespace coda {

template < typename Derived >
class VectorBase {
  public:
    inline const Derived& derived() const {
      return static_cast<const Derived&>(*this);
    }
};


}

#endif    /* VECTORBASE_H */

