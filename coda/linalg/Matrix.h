#ifndef MATRIX_HPP
#define MATRIX_HPP

namespace coda
{

class Matrix
{
public:

    Matrix() {};
    explicit Matrix(int m,int n) : m_(m), n_(n)
		{
			values_ = new double[m*n];
		};
		
    ~Matrix() {};

    inline double operator() (const int i, const int j) const
    {
        return _values[i*n_+j];
    };

    inline double& operator() (const int i, const int j)
    {
        return _values[i*n_+j];
    };


private:
	int m_, n_;
	double* values_;
};

} /* namespace coda */


#endif /* end of include guard: MATRIX_HPP */
