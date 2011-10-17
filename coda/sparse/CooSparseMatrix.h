#ifndef CODA_SPARSE_COOSPARSEMATRIX_H_
#define CODA_SPARSE_COOSPARSEMATRIX_H_

#include <string>

namespace coda {

template <typename eT>
class CooSparseMatrix : public SparseMatrixBase< CooSparseMatrix<eT> > {
 public:
  typedef eT elem_type;
  const uint nrows;   // number of rows
  const uint ncols;   // number of cols
  const uint nelem;   // number of entries
  const uint nnz;     // number of non-zero entries
  const Array<uint> rowidx;
  const Array<uint> colidx;
  const Array<eT>   values;

 public:
  // constructor/desctructor
  ~CooSparseMatrix();
  CooSparseMatrix();
  CooSparseMatrix(uint in_nrows, uint in_cols);
  // access operator
  eT  operator()(const uint i, const uint j) const;
  eT& operator()(const uint i, const uint j);
  inline void reserve(const uint n);
  inline void insert(const uint i, const uint j, const eT val);
  // utility routines
  inline void sort_by_rows_and_cols(const bool check = true);
  inline void sum_up_duplicates();
  // i/o routines
  inline void print(std::string text = "");
  inline void save(std::string filename);

 private:
  inline void init(const uint in_nrows, const uint in_ncols);
  inline bool is_sorted();
};
}    // namespace coda
#endif  // CODA_SPARSE_COOSPARSEMATRIX_H_
