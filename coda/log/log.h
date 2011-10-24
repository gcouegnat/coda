#ifndef LOG_H
#define LOG_H

#include <string>

namespace coda {

void info(std::string msg, ...);
void warning(std::string msg, ...);
void error(std::string msg, ...);

enum LogLevel {ERROR = 40, WARNING = 30, INFO = 20, PROGRESS = 15, DEBUG = 10, EXTRA_DEBUG = 5};
void set_log_level(int log_level);

}

#endif //  LOG_H
