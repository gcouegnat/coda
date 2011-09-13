#include <iostream>
#include <coda/utils/log.h>
#include "Matrix.h"

using namespace coda;

//-----------------------------------------------------------------------------
Matrix::Matrix(int m,int n) : m_(m), n_(n)
{
    debug2("Create a Matrix of size %dx%d", m,n);
    values_ = new float[m*n];
}
//-----------------------------------------------------------------------------
Matrix::Matrix(const Matrix& mat)
{
	debug("Matrix::Matrix(const Matrix& mat)");
	m_=mat.m();
	n_=mat.n();
	// if(values_)
	// 	delete[] values_;
	values_ = new float[m_*n_];
	
	for(int i=0; i<m_*n_; i++)
      values_[i]=mat.values_[i];
}
//-----------------------------------------------------------------------------
const Matrix& Matrix::operator= (const Matrix& mat)
{
	debug("Matrix::operator = (const Matrix& mat)");

	m_=mat.m();
	n_=mat.n();
	delete[] values_;
	values_ = new float[m_*n_];
	
	for(int i=0; i<m_*n_; i++)
      values_[i]=mat.values_[i];

		return *this;
}
//-----------------------------------------------------------------------------
const Matrix& Matrix::operator= (float a)
{
	debug("Matrix::operator = (float a)");


	for(int i=0; i<m_*n_; i++)
      values_[i]=a;

		return *this;
}
//-----------------------------------------------------------------------------
void Matrix::print()
{
	for(int i=0;i<m_;i++)
	{
		std::cout << "[";
		for(int j=0; j<n_-1;j++)
		{
			std::cout << values_[i*n_+j] << ",";
		}
		std::cout << values_[i*n_+n_-1] << "]" << std::endl;
	}
}
//-----------------------------------------------------------------------------



