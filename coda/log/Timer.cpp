#include <iostream>
#include <sys/time.h>
#include "Timer.h"

namespace coda
{
  double  _tic;
}    // namespace coda 


using namespace coda;

//-----------------------------------------------------------------------------
Timer::Timer(std::string task) {
  _task = task;
  _t = coda::time();
  start();
}

//-----------------------------------------------------------------------------
Timer::~Timer() {
  if (!_stopped) {
    stop();
  }
}

//-----------------------------------------------------------------------------
void Timer::rename(std::string task) {
  _task = task;
}

//-----------------------------------------------------------------------------
void Timer::start() {
  _t = coda::time();
  _stopped = false;
}

//-----------------------------------------------------------------------------
void Timer::stop() {
  _t = coda::time() - _t;
  _stopped = true;
}

//-----------------------------------------------------------------------------
double Timer::elapsed() const {
  if (_stopped == true) {
    return _t;
  } else {
    return coda::time() - _t;
  }
  
}

//-----------------------------------------------------------------------------
double coda::time() {
  struct timeval tv;
  struct timezone tz;
  gettimeofday(&tv, &tz);
  return static_cast < double >(tv.tv_sec) + static_cast <
         double >(tv.tv_usec) * 1e-6f;
}

void coda::tic() {
  coda::_tic = coda::time();
}

double coda::toc() {
  return coda::time() - coda::_tic;
}




//-----------------------------------------------------------------------------
