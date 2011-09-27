#ifndef GLOBALPARAMETER_H
#define GLOBALPARAMETER_H

#include "Parameters.h"
#include <coda/log/log.h>

namespace coda
{
class GlobalParameters:public Parameters
{
public:

    GlobalParameters();
    virtual ~ GlobalParameters();

    static Parameters default_parameters()
    {
        Parameters p("coda");
        p.add("log_level", INFO);
        p.add("default_solver", "mumps");
        return p;
    }
};

extern GlobalParameters parameters;

}				/* namespace coda */

#endif				/* end of include guard: GLOBALPARAMETER_H */

