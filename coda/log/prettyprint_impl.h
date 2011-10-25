using namespace coda;

//-----------------------------------------------------------------------------
// prettyprint_state class implementation
//-----------------------------------------------------------------------------

inline prettyprint_state::prettyprint_state(const std::ostream& o)
  : orig_flags(o.flags()), orig_precision(o.precision()), orig_width(o.width()), orig_fill(o.fill()) {
}

inline void prettyprint_state::restore(std::ostream& o) const {
  o.flags(orig_flags);
  o.precision(orig_precision);
  o.width(orig_width);
  o.fill(orig_fill);
}

//-----------------------------------------------------------------------------
// prettyprint class implementation
//-----------------------------------------------------------------------------

template <typename eT>
inline std::streamsize prettyprint::modifiy_stream(std::ostream& o, const eT* data, const uint nelem) {
  std::streamsize width;
  o.unsetf(std::ios::showbase);
  o.unsetf(std::ios::uppercase);
  o.unsetf(std::ios::showpos);
  o.fill(' ');
  bool use_scientific_layout = false;
  for (uint i = 0; i < nelem; ++i) {
    const eT val = data[i];
    if ((val > eT(1000))
        || (val < eT(-1000))
        || ((val > eT(0)) && (val < eT(1e-4)))
        || ((val < eT(0)) && (val > eT(-1e-4)))) {
      use_scientific_layout = true;
      break;
    }
  }
  if (use_scientific_layout == true) {
    o.setf(std::ios::scientific);
    o.setf(std::ios::right);
    o.unsetf(std::ios::fixed);
    o.precision(4);
    width = 13;
  } else {
    o.unsetf(std::ios::scientific);
    o.setf(std::ios::right);
    o.setf(std::ios::fixed);
    o.precision(4);
    width = 10;
  }
  return width;
}

template <typename eT>
inline void prettyprint::print_elem(std::ostream& o, const eT& x) {
  if (x != eT(0)) {
    o << x;
  } else {
    prettyprint::print_zero<eT>(o);
  }
}
template <typename eT>
inline void prettyprint::print_zero(std::ostream& o) {
  const std::streamsize precision = o.precision();
  o.precision(0);
  o << eT(0);
  o.precision(precision);
}

template <typename eT>
inline void prettyprint::print(std::ostream& o, Matrix<eT>& M) {
  const prettyprint_state stream_state(o);
  const std::streamsize width = prettyprint::modifiy_stream(o, M.memptr(), M.nelem);
  const uint nrows = M.nrows;
  const uint ncols = M.ncols;
  for (uint i = 0; i < nrows; ++i) {
    for (uint j = 0; j < ncols; ++j) {
      o.width(width);
      prettyprint::print_elem(o, M.at(i, j));
      o << '\n';
    }
    o << '\n';
  }
  o.flush();
  stream_state.restore(o);
}

template <typename eT>
inline void prettyprint::print(std::ostream& o, SymMatrix<eT>& M) {
  const prettyprint_state stream_state(o);
  const std::streamsize width = prettyprint::modifiy_stream(o, M.memptr(), M.nelem);
  const uint nrows = M.nrows;
  const uint ncols = M.ncols;
  for (uint i = 0; i < nrows; ++i) {
    for (uint j = 0; j < ncols; ++j) {
      o.width(width);
      prettyprint::print_elem(o, M.at(i, j));
      o << ' ';
    }
    o << '\n';
  }
  o.flush();
  stream_state.restore(o);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void prettyprint::print(std::ostream& o, Vector<eT>& V) {
  const prettyprint_state stream_state(o);
  const std::streamsize width = modifiy_stream(o, V.memptr(), V.nelem);
  const uint nelem = V.nelem;
  for (uint i = 0; i < nelem; ++i) {
    o.width(width);
    print_elem(o, V[i]);
    o << ' ';
  }
  o << '\n';
  o.flush();
  stream_state.restore(o);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline void prettyprint::print(std::ostream& o, CooSparseMatrix<eT>& M) {
  const prettyprint_state stream_state(o);
  // const std::streamsize width = prettyprint::modifiy_stream(o, M.memptr(), M.nelem);
  const uint nnz = M.nnz;
  for (uint i = 0; i < nnz; ++i) {
    o << "(" << M.rows[i] << ", " << M.cols[i] << ") " << M.values[i] << '\n';
  }
  o.flush();
  stream_state.restore(o);
}

