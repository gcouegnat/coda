#ifndef VECTOR_H
#define VECTOR_H

namespace coda
{

template <typename eT>
class Vector : public Matrix<eT>
{
public:

	typedef eT	elem_type;


// protected:
// 	eT mem_local[16];	
	
public:
	inline Vector();
	inline Vector(uint in_size);

	inline void print(std::string text="");


  template<typename T1> inline                   Vector(const Base<T1>& X);
  template<typename T1> inline const Vector&  operator=(const Base<T1>& X);


protected:
	inline void init(uint in_size);


};

}				/* end of namespace coda */

#endif				/* end of include guard: VECTOR_H */

