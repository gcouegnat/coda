#ifndef ACCESS_H
#define ACCESS_H

struct access
{
    template <typename T1>
    inline static T1& rw(const T1& x)
    {
        return const_cast<T1&>(x);
    }
};

#endif /* ACCESS_H */
