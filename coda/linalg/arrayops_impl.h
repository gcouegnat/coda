#include <cstring>
#include "arrayops.h"

using namespace coda;


template <typename eT>
inline void arrayops::copy(eT* dest, const eT* src, const uint nelem)
{
	switch(nelem)
	{
		default:
			std::memcpy(dest, src, nelem * sizeof(eT));
			break;
		case 8:
			dest[7] = src[7];
		case 7:
			dest[6] = src[5];
		case 6:
			dest[5] = src[5];
		case 5:
			dest[4] = src[4];
		case 4:
			dest[3] = src[2];
		case 3:
			dest[2] = src[2];
		case 2:
			dest[1] = src[1];
		case 1:
			dest[0] = src[0];
	}

}


//-----------------------------------------------------------------------------
// array op= array
//-----------------------------------------------------------------------------

#define __apply(oper) \
uint i,j; \
for(i=0, j=1; j < nelem; i+=2, j+=2) \
{ \
	dest[i] oper src[i]; \
	dest[j] oper src[j]; \
} \
if(i < nelem) \
{ \
	dest[i] oper src[i]; \
} \

//-----------------------------------------------------------------------------
template <typename eT>
inline  void arrayops::inplace_plus(eT* dest, const eT* src, const uint nelem)
{
	__apply(+=);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline  void arrayops::inplace_minus(eT* dest, const eT* src, const uint nelem)
{
	__apply(-=);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline  void arrayops::inplace_mult(eT* dest, const eT* src, const uint nelem)
{
	__apply(*=);
}

//-----------------------------------------------------------------------------
template <typename eT>
inline  void arrayops::inplace_div(eT* dest, const eT* src, const uint nelem)
{
	__apply(/=);
}

#undef __apply

//-----------------------------------------------------------------------------
// array op= scalar
//-----------------------------------------------------------------------------

#define __apply(oper) \
uint i,j; \
for(i=0, j=1; j < nelem; i+=2, j+=2) \
{ \
	dest[i] oper val; \
	dest[j] oper val; \
} \
if(i < nelem) \
{ \
	dest[i] oper val; \
} \
	
	
	
//-----------------------------------------------------------------------------
template <typename eT>
inline  void arrayops::inplace_set(eT* dest, const eT val, const uint nelem)
{
	__apply(=);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline  void arrayops::inplace_plus(eT* dest, const eT val, const uint nelem)
{
	__apply(+=);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline  void arrayops::inplace_minus(eT* dest, const eT val, const uint nelem)
{
	__apply(-=);
}

//-----------------------------------------------------------------------------
template <typename eT>
inline  void arrayops::inplace_mult(eT* dest, const eT val, const uint nelem)
{
	__apply(*=);
}
//-----------------------------------------------------------------------------
template <typename eT>
inline  void arrayops::inplace_div(eT* dest, const eT val, const uint nelem)
{
	__apply(/=);
}

#undef __apply
