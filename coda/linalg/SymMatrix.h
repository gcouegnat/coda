#ifndef CODA_LINALG_SYMMATRIX_H_
#define CODA_LINALG_SYMMATRIX_H_

namespace coda {

template <typename eT>
class SymMatrix : public Matrix<eT> {
  public:

    typedef eT elem_type;

    using Matrix<eT>::nrows;
    using Matrix<eT>::ncols;
    using Matrix<eT>::nelem;
        
    const eT* const mem;

  public:

    // constructor/destructor
    ~SymMatrix() {};
    SymMatrix() : Matrix<eT>() {}
    SymMatrix(uint in_rows) : Matrix<eT>(in_rows, in_rows), mem(mem) {}
    
    template<typename T1>
    SymMatrix(const MatrixBase<T1>& X) { Matrix<eT>::operator=(X.derived()); }

    template<typename T1>
    SymMatrix& operator= (const MatrixBase<T1>& X) { Matrix<eT>::operator=(X.derived()); return *this; }


   //  // operations with scalar
   //   inline const SymMatrix& operator+=(const eT val);
   //   inline const SymMatrix& operator-=(const eT val);
   //   inline const SymMatrix& operator*=(const eT val);
   //   inline const SymMatrix& operator/=(const eT val);
   // 
   //   // operations with another matrix
   //   inline SymMatrix(const SymMatrix& m);
   //   inline const SymMatrix& operator= (const SymMatrix& m);
   //   inline const SymMatrix& operator+=(const SymMatrix& m);
   //   inline const SymMatrix& operator-=(const SymMatrix& m);
   //   inline const SymMatrix& operator%=(const SymMatrix& m);
   //   inline const SymMatrix& operator/=(const SymMatrix& m);
   // 
   //   // element access
   //   inline eT& operator [](const uint i);
   //   inline eT  operator [](const uint i) const;
     inline eT& at(const uint i, const uint j);
     inline eT  at(const uint i, const uint j) const;
   //   inline eT& operator()(const uint i, const uint j);
   //   inline eT  operator()(const uint i, const uint j) const;
   // 
   //   // memory access
   //   inline          eT* memptr();
   //   inline const    eT* memptr() const;
   // 
   //   // size management
   //   inline void resize(const uint in_rows, const uint in_cols);
   //   inline void reshape(const uint in_rows, const uint in_cols);
   //   inline uint size();
   // 
   //   // value initialization
   //   inline const SymMatrix& fill(const eT val);
   //   inline const SymMatrix& zeros();
   //   inline const SymMatrix& ones();
   //   inline const SymMatrix& eyes();
   //   inline const SymMatrix& randu();
   // 
   //   // misc.
   //   inline const SymMatrix& symmetrize();
     inline void print(std::string text = "");
   // 
   //   // interface with expression template
   //   // component-wise operator
   //   template <typename T1,              typename op_type> inline       SymMatrix(const MatrixCwiseOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator= (const MatrixCwiseOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator+=(const MatrixCwiseOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator-=(const MatrixCwiseOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator%=(const MatrixCwiseOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator/=(const MatrixCwiseOp<T1, op_type>& op);
   //   // component-wise binary expression
   //   template <typename T1, typename T2, typename op_type> inline       SymMatrix(const MatrixCwiseExpr<T1, T2, op_type>& op);
   //   template <typename T1, typename T2, typename op_type> inline const SymMatrix& operator= (const MatrixCwiseExpr<T1, T2, op_type>& op);
   //   template <typename T1, typename T2, typename op_type> inline const SymMatrix& operator+=(const MatrixCwiseExpr<T1, T2, op_type>& op);
   //   template <typename T1, typename T2, typename op_type> inline const SymMatrix& operator-=(const MatrixCwiseExpr<T1, T2, op_type>& op);
   //   template <typename T1, typename T2, typename op_type> inline const SymMatrix& operator%=(const MatrixCwiseExpr<T1, T2, op_type>& op);
   //   template <typename T1, typename T2, typename op_type> inline const SymMatrix& operator/=(const MatrixCwiseExpr<T1, T2, op_type>& op);
   //   // operator
   //   template <typename T1,              typename op_type> inline       SymMatrix(const MatrixOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator= (const MatrixOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator+=(const MatrixOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator-=(const MatrixOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator%=(const MatrixOp<T1, op_type>& op);
   //   template <typename T1,              typename op_type> inline const SymMatrix& operator/=(const MatrixOp<T1, op_type>& op);
   //   // binary expression
   //   template <typename T1, typename T2, typename op_type> inline    SymMatrix(const MatrixExpr<T1, T2, op_type>& op);
   //   template <typename T1, typename T2, typename op_type> inline const SymMatrix& operator= (const MatrixExpr<T1, T2, op_type>& op);
   //   //optimization for matrix-matrix product
   //   template <typename T1, typename T2 > inline const SymMatrix& operator+= (const MatrixExpr<T1, T2, op_times>& op);
   // 
   // protected:
   //   inline void init(uint in_rows, uint in_cols);
};

}   // namespace coda
#endif  // CODA_LINALG_SYMMATRIX_H_

