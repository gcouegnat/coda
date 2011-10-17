#include <string>
#include <algorithm>

namespace coda {

//-----------------------------------------------------------------------------
template <typename eT>
CooSparseMatrix<eT>::~CooSparseMatrix() {
  coda_extra_debug_funcname();
}
//-----------------------------------------------------------------------------
template <typename eT>
CooSparseMatrix<eT>::CooSparseMatrix()
  : nrows(0), ncols(0) , nelem(0), nnz(0), rowidx(0), colidx(0), values(0) {
  coda_extra_debug_funcname();
}
//-----------------------------------------------------------------------------
template <typename eT>
CooSparseMatrix<eT>::CooSparseMatrix(uint in_nrows, uint in_ncols)
  : nrows(in_nrows), ncols(in_ncols) , nelem(0), nnz(0), rowidx(0), colidx(0), values(0) {
  coda_extra_debug_funcname();
}
//-----------------------------------------------------------------------------
template <typename eT>
inline eT CooSparseMatrix<eT>::operator()(const uint i, const uint j) const {
  coda_extra_debug_funcname();
  for (uint k = 0; k < nnz; ++k) {
    coda_debug_var(k);
    if ((rowidx[k] == i) && (colidx[k] == j)) {
      return values[k];
    }
  }
  return eT(0);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline eT& CooSparseMatrix<eT>::operator()(const uint i, const uint j) {
  coda_extra_debug_funcname();
  for (uint k = 0; k < nnz; ++k) {
    if ((rowidx[k] == i) && (colidx[k] == j)) {
      return access::rw(values[k]);
    }
  }
  error("CooSparseMatrix::operator(): trying to access to a null entry at (%d,%d)", i, j);
}

//-----------------------------------------------------------------------------
template <typename eT>
inline void CooSparseMatrix<eT>::insert(const uint i, const uint j, const eT val) {
  coda_extra_debug_funcname();
  access::rw(rowidx)[nnz] = i;
  access::rw(colidx)[nnz] = j;
  access::rw(values)[nnz] = val;
  access::rw(nnz)++;
}
//-----------------------------------------------------------------------------
/*
   template <typename eT>
inline void CooSparseMatrix<eT>::init(nrows, ncols)
*/
//-----------------------------------------------------------------------------
template <typename eT>
inline void CooSparseMatrix<eT>::reserve(const uint n) {
  coda_extra_debug_funcname();
  if (n > nelem) {
    access::rw(rowidx).resize(n);
    access::rw(colidx).resize(n);
    access::rw(values).resize(n);
    access::rw(nelem) = n;
    access::rw(nnz) = 0;
  }
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void CooSparseMatrix<eT>::print(std::string text) {
  coda_extra_debug_funcname();
  if (text.length() > 0) {
    std::cout << text << std::endl;
  }
  prettyprint::print(std::cout, *this);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void CooSparseMatrix<eT>::sort_by_rows_and_cols(const bool check) {
  coda_extra_debug_funcname();
  if ((check == true) && (is_sorted() == true)) {
    coda_debug_warning("Matrix is already sorted.");
    return;
  }
  Array< tuple<int, int, eT> > tmp;
  tmp.resize(nnz);
  for (uint i = 0; i < tmp.size(); ++i) {
    tmp[i] = make_tuple(rowidx[i], colidx[i], values[i]);
  }
  std::sort(tmp.begin(), tmp.end());
  for (uint i = 0; i < tmp.size(); ++i) {
    access::rw(rowidx)[i] = tmp[i].first;
    access::rw(colidx)[i] = tmp[i].second;
    access::rw(values)[i] = tmp[i].third;
  }
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void CooSparseMatrix<eT>::sum_up_duplicates() {
  coda_extra_debug_funcname();
  sort_by_rows_and_cols(false);   // force sorting ; we know that M is not sorted
  uint i = 0;
  uint j = 0;
  while (i < nnz) {
    const uint row = rowidx[i];
    const uint col = colidx[i];
    eT val = values[i];
    i++;
    while ((i < nnz) && (rowidx[i] == row) && (colidx[i] == col)) {
      val += values[i];
      i++;
    }
    access::rw(rowidx)[j] = row;
    access::rw(colidx)[j] = col;
    access::rw(values)[j] = val;
    j++;
  }
  access::rw(nnz) = j;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline bool CooSparseMatrix<eT>::is_sorted() {
  coda_extra_debug_funcname();
  for (uint i = 0; i < nnz - 1; ++i) {
    if ((rowidx[i + 1] < rowidx[i]) && (colidx[i + 1] < colidx[i])) {
      return false;
    }
  }
  return true;
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void CooSparseMatrix<eT>::save(std::string filename) {
  coda_extra_debug_funcname();
  std::ofstream fp;
  fp.open(filename.c_str());
  for (uint i = 0; i < nnz; ++i) {
    fp << rowidx[i] << '\t' << colidx[i] << '\t' << values[i] << '\n';
  }
  fp.close();
}
//-----------------------------------------------------------------------------


}   // namespace coda

