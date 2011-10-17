#ifndef CODA_SPARSE_CSRSPARSEMATRIX_H_
#define CODA_SPARSE_CSRSPARSEMATRIX_H_

#include <string>

namespace coda {

template <typename eT>
class CsrSparseMatrix : public SparseMatrixBase < CsrSparseMatrix<eT> > {
 public:
  typedef eT elem_type;
  
  const uint nrows;   // number of rows
  const uint ncols;   // number of cols
  const uint nnz;     // number of non-zero entries
  
  const Array<uint> rows;
  const Array<uint> cols;
  const Array<eT>   values;

 public:
  // constructor/desctructor
  ~CsrSparseMatrix();
  CsrSparseMatrix();
  CsrSparseMatrix(uint in_nrows, uint in_cols);
  // access operator
  eT  operator()(const uint i, const uint j) const;
  eT& operator()(const uint i, const uint j);
  // i/o routines
  inline void print(std::string text = "");
  inline void save(std::string filename);
};

}  // namespace coda
#endif  // CODA_SPARSE_CSRSPARSEMATRIX_H_

