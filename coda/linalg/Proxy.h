#ifndef PROXY_H
#define PROXY_H

namespace coda {
template <typename T1>
class Proxy {
  public:
    inline Proxy(const T1& A) {
      coda_extra_debug_funcname();
    }
};

template <typename eT>
class Proxy< Matrix<eT> > {
  public:
    typedef eT             elem_type;
    const Matrix<eT>&     P;

    inline explicit Proxy(const Matrix<eT>& M) : P(M) {
      coda_extra_debug_funcname();
    }

    uint nrows() const {
      return P.nrows;
    }
    uint ncols() const {
      return P.ncols;
    }
    uint nelem() const {
      return P.nelem;
    }

    inline elem_type operator[](const uint i) const {
      return P[i];
    }
    inline elem_type at(const uint i, const uint j) const {
      return P.at(i, j);
    }

};


template <typename eT>
class Proxy< Vector<eT> > {
  public:
    typedef eT             elem_type;
    const Vector<eT>&     P;

    inline explicit Proxy(const Vector<eT>& V) : P(V) {
      coda_extra_debug_funcname();
    }

    uint nelem() const {
      return P.nelem;
    }

    inline elem_type operator[](const uint i) const {
      return P[i];
    }

};

// template <typename T1, typename op_type>
// class Proxy< MatrixCwiseOp<T1, op_type> > {
//   public:
//     typedef typename T1::elem_type    elem_type;
//     const MatrixCwiseOp<T1, op_type>&     P;
// 
//     inline explicit Proxy(const MatrixCwiseOp<T1, op_type>& O) : P(O) {
//       coda_extra_debug_funcname();
//     }
// 
//     uint nrows() const {
//       return P.nrows();
//     }
//     uint ncols() const {
//       return P.ncols();
//     }
//     uint nelem() const {
//       return P.nelem();
//     }
// 
//     inline elem_type operator[](const uint i) const {
//       return P[i];
//     }
//     inline elem_type at(const uint i, const uint j) const {
//       return P.at(i, j);
//     }
// 
// };
// 
// template <typename T1, typename op_type>
// class Proxy< VectorCwiseOp<T1, op_type> > {
//   public:
//     typedef typename T1::elem_type    elem_type;
//     const VectorCwiseOp<T1, op_type>&     P;
// 
//     inline explicit Proxy(const VectorCwiseOp<T1, op_type>& O) : P(O) {
//       coda_extra_debug_funcname();
//     }
// 
// 
//     uint nelem() const {
//       return P.nelem();
//     }
// 
//     inline elem_type operator[](const uint i) const {
//       return P[i];
//     }
// 
// 
// };
// 
// template <typename T1, typename T2, typename op_type>
// class Proxy< MatrixCwiseExpr<T1, T2, op_type> > {
//   public:
//     typedef typename T1::elem_type    elem_type;
//     const MatrixCwiseExpr<T1, T2, op_type>&     P;
// 
//     inline explicit Proxy(const MatrixCwiseExpr<T1, T2, op_type>& O) : P(O) {
//       coda_extra_debug_funcname();
//     }
// 
//     uint nrows() const {
//       return P.nrows();
//     }
//     uint ncols() const {
//       return P.ncols();
//     }
//     uint nelem() const {
//       return P.nelem();
//     }
// 
//     inline elem_type operator[](const uint i) const {
//       return P[i];
//     }
//     inline elem_type at(const uint i, const uint j) const {
//       return P.at(i, j);
//     }
// 
// };
// 
// 
// template <typename T1, typename T2, typename op_type>
// class Proxy< VectorCwiseExpr<T1, T2, op_type> > {
//   public:
//     typedef typename T1::elem_type    elem_type;
//     const VectorCwiseExpr<T1, T2, op_type>&     P;
// 
//     inline explicit Proxy(const VectorCwiseExpr<T1, T2, op_type>& O) : P(O) {
//       coda_extra_debug_funcname();
//     }
// 
// 
//     uint nelem() const {
//       return P.nelem();
//     }
// 
//     inline elem_type operator[](const uint i)       const {
//       return P[i];
//     }
// 
// };
// 
// 
// template <typename T1, typename op_type>
// class Proxy< MatrixOp<T1, op_type> > {
//   public:
//     typedef typename T1::elem_type    elem_type;
//     const Matrix<elem_type>     P;
// 
//     inline explicit Proxy(const MatrixOp<T1, op_type>& O) : P(O) {
//       coda_extra_debug_funcname();
//     }
// 
//     uint nrows() const {
//       return P.nrows;
//     }
//     uint ncols() const {
//       return P.ncols;
//     }
//     uint nelem() const {
//       return P.nelem;
//     }
// 
//     inline elem_type operator[](const uint i)       const {
//       return P[i];
//     }
//     inline elem_type at(const uint i, const uint j) const {
//       return P.at(i, j);
//     }
// 
// };
// 
// template <typename T1, typename T2, typename op_type>
// class Proxy< MatrixExpr<T1, T2, op_type> > {
//   public:
//     typedef typename T1::elem_type    elem_type;
//     const Matrix<elem_type>     P;
// 
//     inline explicit Proxy(const MatrixExpr<T1, T2, op_type>& O) : P(O) {
//       coda_extra_debug_funcname();
//     }
//     uint nrows() const {
//       return P.nrows;
//     }
//     uint ncols() const {
//       return P.ncols;
//     }
//     uint nelem() const {
//       return P.nelem;
//     }
// 
//     inline elem_type operator[](const uint i)             const {
//       return P[i];
//     }
//     inline elem_type at(const uint i, const uint j)    const {
//       return P.at(i, j);
//     }
// 
// };
// 
// template <typename T1, typename T2, typename op_type>
// class Proxy< VectorExpr<T1, T2, op_type> > {
//   public:
//     typedef typename T1::elem_type    elem_type;
//     const Vector<elem_type>     P;
// 
//     inline explicit Proxy(const VectorExpr<T1, T2, op_type>& O) : P(O) {
//       coda_extra_debug_funcname();
//     }
//     uint nelem() const {
//       return P.nelem;
//     }
// 
//     inline elem_type operator[](const uint i)             const {
//       return P[i];
//     }
// 
// };


}    // namespace coda


#endif /* PROXY_H */
