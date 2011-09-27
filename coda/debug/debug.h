#ifndef DEBUG_H
#define DEBUG_H

namespace coda
{

    inline void coda_print()
    {
        std::cerr << std::endl;
    }

    template <typename T1>
    inline void coda_print(const T1& msg)
    {
        std::cerr << coda::colors::cyan << msg << coda::colors::nocolor << std::endl;
    }
    

    inline void coda_assert(const bool state, std::string msg)
    {
        if (state == true)
        {
            error(msg);
        }
    }
    
    inline void coda_assert_same_size(const uint nrows1, const uint ncols1, const uint nrows2, const uint ncols2, std::string msg)
    {
        if ((nrows1 != nrows2) || (ncols1 != ncols2))
        {
            error("%s: Incompatible matrix dimensions: %d x %d vs. %d x %d", msg.c_str(), nrows1, ncols1, nrows2, ncols2);
        }
    }

    inline void coda_assert_mult_size(const uint nrows1, const uint ncols1, const uint nrows2, const uint ncols2, std::string msg)
    {
        if (ncols1 != nrows2)
        {
            error("Incompatible matrix dimensions: %d x %d vs. %d x %d", nrows1, ncols1, nrows2, ncols2);
        }
        
    }
        
    
    inline void coda_funcname(const char* x)
    {
    	std::cerr << coda::colors::yellow << "debug: " << x << coda::colors::nocolor;
    }

    inline void coda_endl()
    {
        std::cerr << std::endl;
    }

    inline void coda_dummy()
    {
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
    #define coda_debug_print                coda_print
    #define coda_debug_assert               coda_assert
    #define coda_debug_assert_same_size     coda_assert_same_size
    #define coda_debug_assert_mult_size     coda_assert_mult_size
#else
    #define coda_debug_print                true ? void(0) : coda_print
    #define coda_debug_assert               true ? void(0) : coda_assert
    #define coda_debug_assert_same_size     true ? void(0) : coda_assert_same_size
    #define coda_debug_assert_mult_size     true ? void(0) : coda_assert_mult_size
#endif

#if defined(CODA_EXTRA_DEBUG)
    #define coda_extra_debug_print          coda_print
    #define coda_extra_debug_funcname       coda_funcname(CODA_FUNCNAME); coda_endl
#else
    #define coda_extra_debug_print          true ? void(0) : coda_print
    #define coda_extra_debug_funcname       true ? void(0) : coda_print
#endif



    
    
    // void __debug(std::string file, unsigned long line, std::string function, std::string msg, ...);
    // 
    //    #if defined(CODA_DEBUG)
    //    #define debug(msg)                            do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg); } while (false)
    //    #define debug1(msg, arg0)                     do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg, arg0); } while (false)
    //    #define debug2(msg, arg0, arg1)           do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg, arg0, arg1); } while (false)
    //    #define debug3(msg, arg0, arg1, arg2)         do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg, arg0, arg1, arg2); } while (false)
    //    #define debug4(msg, arg0, arg1, arg2, arg3)   do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg, arg0, arg1, arg2, arg3); } while (false)
    //    #else
    //    #define debug(msg)                            coda_dummy
    //    #define debug1(msg, arg0)                     coda_dummy
    //    #define debug2(msg, arg0, arg1)           coda_dummy
    //    #define debug3(msg, arg0, arg1, arg2)         coda_dummy
    //    #define debug4(msg, arg0, arg1, arg2, arg3)   coda_dummy
    //    #endif
    // 
    // 
    //    #define coda_debug_function_not_implemented() \
    //    do { \
    //     error("The function '%s' has not been implemented (in %s line %d).", \
    //     __PRETTY_FUNCTION__, __FILE__, __LINE__); \
    //     } while (false)
    // 
    // 
    //    void coda_sigprint(const char* x);
    //    void coda_endl();
    //    void coda_dummy();
    // 
    // 
    //    #define CODA_FUNCSIG __PRETTY_FUNCTION__
    // 
    //    #if defined(CODA_EXTRA_DEBUG)
    //    #define coda_extra_debug_funcname    coda_sigprint(CODA_FUNCSIG); coda_endl
    //    #else
    //    #define coda_extra_debug_funcname    coda_dummy
    //    #endif



} /* end of namespace coda */

#endif /* end of include guard: DEBUG_H */
