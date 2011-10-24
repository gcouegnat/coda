#ifndef ARRAYOPS_H
#define ARRAYOPS_H

#include <coda/config/typedef.h>

namespace coda {
class arrayops {
  public:

    template <typename eT>
    inline static void copy(eT* dest, const eT* src, const uint nelem);

    // array op= array
    template <typename eT>
    inline static void inplace_plus(eT* dest, const eT* src, const uint nelem);

    template <typename eT>
    inline static void inplace_minus(eT* dest, const eT* src, const uint nelem);

    template <typename eT>
    inline static void inplace_mult(eT* dest, const eT* src, const uint nelem);

    template <typename eT>
    inline static void inplace_div(eT* dest, const eT* src, const uint nelem);

    // array op= scalar
    template <typename eT>
    inline static void inplace_set(eT* dest, const eT val, const uint nelem);

    template <typename eT>
    inline static void inplace_plus(eT* dest, const eT val, const uint nelem);

    template <typename eT>
    inline static void inplace_minus(eT* dest, const eT val, const uint nelem);

    template <typename eT>
    inline static void inplace_mult(eT* dest, const eT val, const uint nelem);

    template <typename eT>
    inline static void inplace_div(eT* dest, const eT val, const uint nelem);

};

}    // namespace coda

#endif /* ARRAYOPS_H */
