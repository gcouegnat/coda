#ifndef CODAPRETTYPRINT_H
#define CODAPRETTYPRINT_H

namespace coda
{


class prettyprint_state
{
private:

    const std::ios::fmtflags     orig_flags;
    const std::streamsize    orig_precision;
    const std::streamsize    orig_width;
    const char                orig_fill;

public:

    inline prettyprint_state(const std::ostream& o);
    inline void restore(std::ostream& o) const;

};


class prettyprint
{
public:

    template <typename eT> inline static std::streamsize modifiy_stream(std::ostream& o, const eT* data, const uint nelem);
    template <typename eT> inline static void print_elem(std::ostream& o, const eT& x);
    template <typename eT> inline static void print_zero(std::ostream& o);
    template <typename eT> inline static void print(std::ostream& o, Matrix<eT>& M);
    template <typename eT> inline static void print(std::ostream& o, Vector<eT>& V);
};

} /* namespace coda */

#endif
