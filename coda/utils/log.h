#ifndef LOG_H
#define LOG_H

#include <string>

namespace coda
{
void set_log_level(int log_level);
void info(std::string msg, ...);
void warning(std::string msg, ...);
void error(std::string msg, ...);
void __debug(std::string file, unsigned long line, std::string function, std::string msg, ...);

#define debug(msg) 							do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg); } while (false)
#define debug1(msg, arg0) 					do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg, arg0); } while (false)
#define debug2(msg, arg0, arg1) 			do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg, arg0, arg1); } while (false)
#define debug3(msg, arg0, arg1, arg2) 		do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg, arg0, arg1, arg2); } while (false)
#define debug4(msg, arg0, arg1, arg2, arg3)	do { coda::__debug(__FILE__, __LINE__, __PRETTY_FUNCTION__, msg, arg0, arg1, arg2, arg3); } while (false)

#define coda_debug_function_not_implemented() \
do { \
 error("The function '%s' has not been implemented (in %s line %d).", \
 __PRETTY_FUNCTION__, __FILE__, __LINE__); \
 } while (false)


void coda_sigprint(const char* x);
void coda_endl();
void coda_dummy();


#define CODA_FUNCSIG __PRETTY_FUNCTION__

#if defined(DEBUG)
#define debug_sigprint	coda_sigprint(CODA_FUNCSIG); coda_endl
#else
#define debug_sigprint	coda_dummy
#endif


}				/* namespace coda */

#endif

// end of include guard: LOG_H
