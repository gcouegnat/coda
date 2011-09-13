#include <sstream>
#include <cstring>
#include <cmath>

#include "cblas.h"
#include "Matrix.h"
#include "Vector.h"


#include <coda/utils/log.h>

using namespace coda;

//-----------------------------------------------------------------------------

Vector::Vector(const uint size) : _size(0), _values(0)
{
  debug1("Create a Vector of size %d", size);
  resize(size);
}
//-----------------------------------------------------------------------------
Vector::Vector(const Vector& v) : _size(0), _values(0)
{
  debug1("Copy a Vector of size %d", v.size() );
	*this = v;
}

//-----------------------------------------------------------------------------

Vector::~Vector()
{
  debug("");
  delete [] _values;
}
//-----------------------------------------------------------------------------

void Vector::resize(uint size)
{
  if (_size == size) return;

  debug2("Resize a Vector from %d to  %d", _size, size);
  delete[] _values;
  _values = new float[size];
  _size = size;
  zeros();
}
//-----------------------------------------------------------------------------

uint Vector::size() const
{
  return _size;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator=(const Vector& v)
{
  resize(v.size());
  std::memcpy(this->_values, v._values, _size * sizeof (float));
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator=(float a)
{
  for (uint i = 0; i < _size; ++i)
    _values[i] = a;

  return *this;
}
//-----------------------------------------------------------------------------

void Vector::zeros()
{
  std::memset(_values, 0, _size * sizeof (float));
}
//-----------------------------------------------------------------------------

void Vector::add(float a)
{
  for (uint i = 0; i < _size; ++i)
    _values[i] += a;
}
//-----------------------------------------------------------------------------

void Vector::add(float a, Vector& v)
{
  cblas_saxpy(_size, a, v._values, 1, _values, 1);
}
//-----------------------------------------------------------------------------

void Vector::add(float a, Vector&v, float b, Vector& w)
{
  cblas_saxpy(_size, a, v._values, 1, _values, 1);
  cblas_saxpy(_size, b, w._values, 1, _values, 1);
}
//-----------------------------------------------------------------------------

void Vector::eq(float a)
{
  function_not_implemented();
}
//-----------------------------------------------------------------------------

void Vector::eq(float a, Vector& v)
{
  *this = v;
  *this *= a;
}

//-----------------------------------------------------------------------------

void Vector::eq(float a, Vector&v, float b, Vector& w)
{
//  *this = v;
//  *this *= a;
//  cblas_saxpy(_size, b, w._values, 1, _values, 1);

  for (uint i = 0; i < _size; ++i)
   	_values[i] = a * v[i] + b * w[i];
  

}
//-----------------------------------------------------------------------------

const Vector& Vector::operator*=(float a)
{
  // for (uint i = 0; i < _size; ++i)
  // 	_values[i] *= a;
  cblas_sscal(_size, a, _values, 1);
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator/=(float a)
{
  *this *= (1.0 / a);
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator+=(float a)
{
  add(a);
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator-=(float a)
{
  add(-a);
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator+=(const Vector& v)
{
  for (uint i = 0; i < _size; ++i)
  {
    _values[i] += v._values[i];
  }
   	
//     cblas_saxpy(_size, 1.0, v._values, 1, _values, 1);
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator-=(const Vector& v)
{
  for (uint i = 0; i < _size; ++i)
    _values[i] -= v._values[i];
  return *this;
}
//-----------------------------------------------------------------------------

void Vector::abs()
{
  for (uint i = 0; i < _size; ++i)
    _values[i] = std::abs(_values[i]);
}
//-----------------------------------------------------------------------------
void Vector::matvec(Matrix& A, Vector& x)
{
	const int m = A.m();
	const int n = A.n();
	
	// for(int i=0; i<m; ++i)
	// {
	// 	float tmp = 0.0;
	// 	for (int j=0; j<n; ++j)
	// 	{
	// 		tmp += A(i,j)*x[j];
	// 	}
	// 	_values[i]=tmp;	
	// }

	cblas_sgemv(CblasRowMajor,CblasNoTrans, m, n, 1.0, &A(0,0), m, &x[0], 1, 0.0, _values, 1);

}
//-----------------------------------------------------------------------------
std::string Vector::str() const
{
  std::stringstream s;
  s << "<Vector of size " << size() << ">";
  return s.str();
}
//-----------------------------------------------------------------------------
void Vector::print() const
{
	std::cout << "[ ";
	for(int i=0; i < size()-1; ++i)
		std::cout << _values[i] <<", ";
	std::cout << _values[size()-1] << "]" << std::endl;	
}

//-----------------------------------------------------------------------------

//const Vector Vector::operator+(const Vector& v) const
//{
//  Vector u;
//  u = *this;
//  u += v;
//  return u;
//}
////-----------------------------------------------------------------------------
//
//const Vector Vector::operator-(const Vector& v) const
//{
//  Vector u;
//  u = *this;
//  u -= v;
//  return u;
//}
//-----------------------------------------------------------------------------

float Vector::dot(const Vector& x) const
{
  function_not_implemented();
}
//-----------------------------------------------------------------------------

float Vector::norm(std::string norm_type) const
{
  function_not_implemented();
}
//-----------------------------------------------------------------------------



