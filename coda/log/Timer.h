#ifndef TIMER_H
#define TIMER_H

#include <string>

namespace coda {

class Timer {
  public:

    Timer(std::string task = "");
    ~Timer();

    void start();
    void stop();

    double value() const;

    void rename(std::string task);

  private:

    std::string _task;
    double _t;
    bool _stopped;

};

double _time();

} // namespace coda
#endif // TIMER_H
