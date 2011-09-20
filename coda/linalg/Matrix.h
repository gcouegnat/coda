#ifndef MATRIX_H
#define MATRIX_H

namespace coda
{

template <typename eT>
class Matrix : public Base< Matrix<eT> >
{
public:

	typedef eT	elem_type;
	
	const uint nrows;
	const uint ncols;
	const uint nelem;
	
	const eT* const mem;
	
// protected:
// 	eT mem_local[16];	
	
public:
	inline ~Matrix();
	inline Matrix();
	
	inline Matrix(uint in_rows, uint in_cols);

	inline const Matrix& operator+=(const eT val);	
	inline const Matrix& operator-=(const eT val);
	inline const Matrix& operator*=(const eT val);
	inline const Matrix& operator/=(const eT val);
	
	inline Matrix(const Matrix& m);
	inline const Matrix& operator=(const Matrix& m);
	inline const Matrix& operator+=(const Matrix& m);	
	inline const Matrix& operator-=(const Matrix& m);
	inline const Matrix& operator%=(const Matrix& m);
	inline const Matrix& operator/=(const Matrix& m);

	inline eT& operator [] (const uint i);
	inline eT  operator [] (const uint i) const;
	inline eT& at (const uint i, const uint j);
	inline eT  at (const uint i, const uint j) const;
	inline eT& operator() (const uint i, const uint j);
	inline eT  operator() (const uint i, const uint j) const;

	inline 		 eT* memptr();
	inline const eT* memptr() const;

	inline void resize(const uint in_rows, const uint in_cols);
	inline void reshape(const uint in_rows, const uint in_cols);
	inline uint size();

	inline const Matrix& fill(const eT val);
	inline const Matrix& zeros();
	inline const Matrix& ones();
	inline const Matrix& eyes();

	inline void print(std::string text="");

protected:
	inline void init(uint in_rows, uint in_cols);


};

}				/* end of namespace coda */

#endif				/* end of include guard: MATRIX_H */

