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
    double elapsed() const;

    void rename(std::string task);

  private:

    std::string _task;
    double _t;
    bool _stopped;

};

double time();
void tic();
double toc();

}   // namespace coda
#endif // TIMER_H
