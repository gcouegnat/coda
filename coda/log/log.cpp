#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstdarg>
#include <stdexcept>

#include "log.h"
#include <coda/utils/colors.h>
#include <coda/parameter/GlobalParameters.h>

using namespace coda;
using coda::colors::nocolor;
using coda::colors::bold;
using coda::colors::underline;
using coda::colors::red;
using coda::colors::yellow;

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
    //std::string s = std::string("INFO: ") + buffer;
    std::cerr.flush();
    std::cerr << bold << buffer << nocolor << std::endl;
    std::cerr.flush();
  }
}

//-----------------------------------------------------------------------------
void coda::warning(std::string msg, ...) {
  const int log_level = coda::parameters["log_level"];
  if (log_level <= WARNING) {
    read(buffer, msg);
    std::string s = std::string("*** Warning ***");
    std::cerr.flush();
    std::cerr << bold << yellow <<  s << coda::colors::nocolor << " " << buffer << std::endl;
    std::cerr.flush();
  }
}

//-----------------------------------------------------------------------------
void coda::error(std::string msg, ...) {
  const int log_level = coda::parameters["log_level"];
  if (log_level <= ERROR) {
    read(buffer, msg);
    std::string s = std::string("*** Error ***");
    std::cerr.flush();
    std::cerr << bold << red <<  s << coda::colors::nocolor << " " << buffer << std::endl;
    std::cerr.flush();
    abort();
  }
}
//-----------------------------------------------------------------------------



