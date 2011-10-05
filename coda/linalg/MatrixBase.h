#ifndef MATRIXBASE_H
#define MATRIXBASE_H

namespace coda
{

template < typename Derived >
class MatrixBase
{
public:
    inline const Derived& derived() const
    {
        return static_cast<const Derived&> (*this);
    }
};

} /* namespace coda */

#endif /* MATRIXBASE_H */
