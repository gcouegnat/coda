#ifndef VECTOR_H
#define VECTOR_H

namespace coda
{

template <typename eT>
class Vector : public Base< Vector<eT> >
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
	inline ~Vector();
	inline Vector();
	
	inline Vector(uint in_size);

	inline const Vector& operator+=(const eT val);	
	inline const Vector& operator-=(const eT val);
	inline const Vector& operator*=(const eT val);
	inline const Vector& operator/=(const eT val);
	
	inline Vector(const Vector& v);
	inline const Vector& operator=(const Vector& v);
	inline const Vector& operator+=(const Vector& v);	
	inline const Vector& operator-=(const Vector& v);
	inline const Vector& operator%=(const Vector& v);
	inline const Vector& operator/=(const Vector& v);

	inline eT& operator [] (const uint i);
	inline eT  operator [] (const uint i) const;
	inline eT& at (const uint i);
	inline eT  at (const uint i) const;

	inline 		 eT* memptr();
	inline const eT* memptr() const;

	inline void resize(const uint in_rows);
	inline void reshape(const uint in_rows);
	inline uint size();

	inline const Vector& fill(const eT val);
	inline const Vector& zeros();
	inline const Vector& ones();

	inline void print(std::string text="");

	template <typename T1, typename T2, typename eop_type> inline				   Vector(const eBinaryOp<T1, T2, eop_type>& op);
	template <typename T1, typename T2, typename eop_type> inline const Vector& operator=(const eBinaryOp<T1, T2, eop_type>& op);
	template <typename T1, typename T2, typename eop_type> inline const Vector& operator+=(const eBinaryOp<T1, T2, eop_type>& op);
	template <typename T1, typename T2, typename eop_type> inline const Vector& operator-=(const eBinaryOp<T1, T2, eop_type>& op);
	template <typename T1, typename T2, typename eop_type> inline const Vector& operator%=(const eBinaryOp<T1, T2, eop_type>& op);
	template <typename T1, typename T2, typename eop_type> inline const Vector& operator/=(const eBinaryOp<T1, T2, eop_type>& op);		

protected:
	inline void init(uint in_size);


};

}				/* end of namespace coda */

#endif				/* end of include guard: VECTOR_H */

