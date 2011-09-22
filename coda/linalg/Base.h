#ifndef BASE_H
#define BASE_H

namespace coda
{
template < typename Derived >
class Base
{
public:
    inline const Derived& get_ref() const
    {
        return static_cast<const Derived&> (*this);
    }
};

} /* end of namespace coda */

#endif /* end of include guard: BASE_H */
