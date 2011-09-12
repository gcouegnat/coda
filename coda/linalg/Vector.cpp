#include <sstream>
#include <cstring>
#include <cmath>

#include "Vector.h"
#include "cblas.h"

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
  _values = new double[size];
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
  std::memcpy(this->_values, v._values, _size * sizeof (double));
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator=(double a)
{
  for (uint i = 0; i < _size; ++i)
    _values[i] = a;

  return *this;
}
//-----------------------------------------------------------------------------

void Vector::zeros()
{
  std::memset(_values, 0, _size * sizeof (double));
}
//-----------------------------------------------------------------------------

void Vector::add(double a)
{
  for (uint i = 0; i < _size; ++i)
    _values[i] += a;
}
//-----------------------------------------------------------------------------

void Vector::add(double a, Vector& v)
{
  cblas_daxpy(_size, a, v._values, 1, _values, 1);
}
//-----------------------------------------------------------------------------

void Vector::add(double a, Vector&v, double b, Vector& w)
{
  cblas_daxpy(_size, a, v._values, 1, _values, 1);
  cblas_daxpy(_size, b, w._values, 1, _values, 1);
}
//-----------------------------------------------------------------------------

void Vector::eq(double a)
{
  function_not_implemented();
}
//-----------------------------------------------------------------------------

void Vector::eq(double a, Vector& v)
{
  *this = v;
  *this *= a;
}

//-----------------------------------------------------------------------------

void Vector::eq(double a, Vector&v, double b, Vector& w)
{
//  *this = v;
//  *this *= a;
//  cblas_daxpy(_size, b, w._values, 1, _values, 1);

  for (uint i = 0; i < _size; ++i)
   	_values[i] = a * v[i] + b * w[i];
  

}
//-----------------------------------------------------------------------------

const Vector& Vector::operator*=(double a)
{
  // for (uint i = 0; i < _size; ++i)
  // 	_values[i] *= a;
  cblas_dscal(_size, a, _values, 1);
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator/=(double a)
{
  *this *= (1.0 / a);
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator+=(double a)
{
  add(a);
  return *this;
}
//-----------------------------------------------------------------------------

const Vector& Vector::operator-=(double a)
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
   	
//     cblas_daxpy(_size, 1.0, v._values, 1, _values, 1);
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

std::string Vector::str() const
{
  std::stringstream s;
  s << "<Vector of size " << size() << ">";
  return s.str();
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

double Vector::dot(const Vector& x) const
{
  function_not_implemented();
}
//-----------------------------------------------------------------------------

double Vector::norm(std::string norm_type) const
{
  function_not_implemented();
}
//-----------------------------------------------------------------------------



