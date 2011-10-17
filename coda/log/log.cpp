#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstdarg>
#include <stdexcept>

#include "log.h"
#include <coda/utils/colors.h>
#include <coda/parameter/GlobalParameters.h>

using namespace coda;

static const int buffer_size = 256;
static char buffer[buffer_size];

#define read(buffer, msg) \
    va_list aptr; \
    va_start(aptr, msg); \
    vsnprintf(buffer, buffer_size, msg.c_str(), aptr); \
    va_end(aptr); \
 
//-----------------------------------------------------------------------------
void
coda::set_log_level(int log_level) {
  coda::parameters["log_level"] = log_level;
}

//-----------------------------------------------------------------------------
void coda::info(std::string msg, ...) {
  const int log_level = coda::parameters["log_level"];
  if (log_level <= INFO) {
    read(buffer, msg);
    std::string s = std::string("INFO: ") + buffer;
    std::cerr.flush();
    std::cerr << coda::colors::bold << s << coda::colors::nocolor << std::endl;
    std::cerr.flush();
  }
}

//-----------------------------------------------------------------------------
void coda::warning(std::string msg, ...) {
  const int log_level = coda::parameters["log_level"];
  if (log_level <= WARNING) {
    read(buffer, msg);
    std::string s = std::string("WARNING: ") + buffer;
    std::cerr.flush();
    std::cerr << "-----------------------------------------------------------------------------" << std::endl;
    std::cerr << coda::colors::yellow << s << coda::colors::nocolor << std::endl;
    std::cerr << "-----------------------------------------------------------------------------" << std::endl;
    std::cerr.flush();
  }
}

//-----------------------------------------------------------------------------
void coda::error(std::string msg, ...) {
  const int log_level = coda::parameters["log_level"];
  if (log_level <= ERROR) {
    read(buffer, msg);
    std::string s = std::string("ERROR: ") + buffer;
    std::cerr.flush();
    std::cerr << "-----------------------------------------------------------------------------" << std::endl;
    std::cerr << coda::colors::red << s << coda::colors::nocolor << '\n';
    std::cerr << "-----------------------------------------------------------------------------" << std::endl;
    std::cerr.flush();
    abort();
  }
}
//-----------------------------------------------------------------------------



