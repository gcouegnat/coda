#ifndef DEBUG_H
#define DEBUG_H

namespace coda {

template <typename T1> 
inline void coda_print(const T1& msg) {
  std::cerr << coda::colors::yellow << "@" << msg  << coda::colors::nocolor << std::endl;
}

inline void coda_assert(const bool state, std::string msg) {
  if (state == false) {
    error(msg);
  }
}

inline void coda_assert_same_size(const uint nrows1, const uint ncols1, const uint nrows2, const uint ncols2, std::string msg) {
  if ((nrows1 != nrows2) || (ncols1 != ncols2)) {
    error("%s: Incompatible matrix dimensions: %d by %d and %d by %d", msg.c_str(), nrows1, ncols1, nrows2, ncols2);
  }
}
// template <typename eT>
// inline void coda_assert_same_size(const Matrix<eT>& A, const Matrix<eT>& B, std::string msg)
// {
//     if ((A.nrows1 != B.nrows) || (A.ncols != B.ncols))
//     {
//         error("%s: Incompatible matrix dimensions: %d by %d and %d by %d", msg.c_str(), A.nrows, A.ncols, B.nrows, B.ncols);
//     }
// }
//
inline void coda_assert_mult_size(const uint nrows1, const uint ncols1, const uint nrows2, const uint ncols2, std::string msg) {
  if (ncols1 != nrows2) {
    error("%s: Incompatible matrix dimensions: %d by %d and %d by %d", msg.c_str(), nrows1, ncols1, nrows2, ncols2);
  }
}

inline void coda_funcname(const char* x) {
  // std::cerr << "@" << x;
  coda_print(x);
}

inline void coda_endl() {
  std::cerr << std::endl;
}

inline void coda_dummy() {
  // do nothing
}
//
// macros
//
#define CODA_STR1(x) #x
#define CODA_STR2(x) CODA_STR1(x)
#define CODA_FILELINE __FILE__ ":" CODA_STR2(__LINE__)
#define CODA_FUNCNAME __PRETTY_FUNCTION__
#if defined(CODA_DEBUG)
#define coda_debug_print(msg)           coda_print(msg)
#define coda_debug_assert_same_size     coda_assert_same_size
#define coda_debug_assert_mult_size     coda_assert_mult_size
#define coda_debug_warning(msg)         warning("%s (%s in file <%s> at line %d).", msg, CODA_FUNCNAME,__FILE__, __LINE__);
#define coda_debug_error(msg)           error("%s (in file <%s> at line %d).", msg, __FILE__, __LINE__);
#define coda_debug_assert(state,msg)    if (state == false) coda_debug_error(msg)
#define coda_debug_var(x)               std::cerr << #x << " = " << x << std::endl;
#else
#define coda_debug_print(msg)
#define coda_debug_assert(state,msg)
#define coda_debug_assert_same_size     true ? void(0) : coda_assert_same_size
#define coda_debug_assert_mult_size     true ? void(0) : coda_assert_mult_size
#define coda_debug_warning(msg)
#define coda_debug_error(msg)
#define coda_debug_var(x)
#endif
#if defined(CODA_EXTRA_DEBUG)
#define coda_extra_debug_print(msg)     coda_print(msg)
#define coda_extra_debug_warning(msg)   warning("%s (in file <%s> at line %d).", msg, __FILE__, __LINE__);
#define coda_extra_debug_info(msg)      info("%s (in file <%s> at line %d).", msg, __FILE__, __LINE__);
#define coda_extra_debug_funcname       coda_funcname(CODA_FUNCNAME); coda_dummy
#else
#define coda_extra_debug_print(msg)
#define coda_extra_debug_warning(msg)
#define coda_extra_debug_info(msg)
#define coda_extra_debug_funcname       coda_dummy
#endif
}    // namespace coda
#endif /* DEBUG_H */

