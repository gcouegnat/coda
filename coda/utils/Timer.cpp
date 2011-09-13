#include <iostream>
#include <sys/time.h>
#include "Timer.h"

using namespace coda;

//-----------------------------------------------------------------------------
Timer::Timer(std::string task)
{
	_task = task;
	_t = coda::_time();
	start();
}
//-----------------------------------------------------------------------------
Timer::~Timer()
{
	if(!_stopped)
		stop();
}
//-----------------------------------------------------------------------------
void Timer::rename(std::string task)
{
  _task = task;
}
//-----------------------------------------------------------------------------
void Timer::start()
{
	_t = coda::_time();
	_stopped = false;
}
//-----------------------------------------------------------------------------
void Timer::stop()
{
	_t = coda::_time() - _t;
	_stopped = true;
	std::cout << "Elasped time ["<< _task << "]: " << value() << "s" << std::endl;
}
//-----------------------------------------------------------------------------
double Timer::value() const
{
	return _t;
}
//-----------------------------------------------------------------------------
double coda::_time()
{
  struct timeval tv;
  struct timezone tz;
	gettimeofday(&tv, &tz);
 return static_cast<double>(tv.tv_sec) + static_cast<double>(tv.tv_usec)*1e-6f;
}
//-----------------------------------------------------------------------------


