/*
 * File:   VectorETession.h
 * T1uthor: couegnat
 *
 * Created on 8 septembre 2011, 10:49
 */

#ifndef EXPRESSION_H
#define	EXPRESSION_H

// #include <coda/linalg/Vector.h>
// #include <coda/linalg/Matrix.h>

namespace coda
{

template <typename T>
class VectorET
{
public:
    inline VectorET() {};

    const T& operator~() const
    {
        return *static_cast<const T*> (this);
    }
};

// template <typename Expression>
// class VectorEvalTrait
// {
// public:
//     typedef const Vector ET;
// };
//
// template<>
// class VectorEvalTrait<Vector>
// {
// public:
//     typedef const Vector& ET;
// };

//-----------------------------------------------------------------------------

template <typename T>
class MatrixET
{
public:
    inline MatrixET() {};

    const T& operator~() const
    {
        return *static_cast<const T*> (this);
    }
};

// template <typename Expression>
// class MatrixEvalTrait
// {
// public:
//     typedef const Matrix ET;
// };
//
// template<>
// class MatrixEvalTrait<Matrix>
// {
// public:
//     typedef const Matrix& ET;
// };


}

#endif	/* EXPRESSION_H */

