#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <map>
#include "Parameter.h"

namespace       coda
{

class           Parameters
{
public:

    explicit Parameters(std::string key = "parameters");
    virtual ~ Parameters();

    void            clear();

    std::string name() const;
    void            rename(std::string key);

    void            add(std::string key, int value);
    void            add(std::string key, double value);
    void            add(std::string key, std::string value);
    void            add(std::string key, const char *value);
    void            add(std::string key, bool value);

    Parameter & operator[] (std::string key);
    const           Parameter & operator[] (std::string key) const;
    const           Parameters & operator=(const Parameters &
                                           parameters);

    bool            has_key(std::string key) const;

    std::string str(bool verbose = true) const;

private:

    Parameter * find_parameter(std::string key) const;
    std::string _key;
    std::map < std::string, Parameter * >_parameters;

};

}				/* namespace coda */
#endif				/* end of include guard: PARAMETERS_H */
