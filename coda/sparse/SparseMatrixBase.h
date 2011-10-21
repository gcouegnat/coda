//
// Copyright 2011 Guillaume Couégnat <couegnat@lcts.u-bordeaux1.fr>
//

#ifndef CODA_SPARSE_SPARSEMATRIXBASE_H_
#define CODA_SPARSE_SPARSEMATRIXBASE_H_

namespace coda {

template < typename Derived >
class SparseMatrixBase {
 public:
  inline const Derived& derived() const {
    return static_cast<const Derived&>(*this);
  }
};

}  // namespace coda

#endif  // CODA_SPARSE_SPARSEMATRIXBASE_H_

