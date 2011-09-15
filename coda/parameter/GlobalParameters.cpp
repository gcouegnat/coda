#include "GlobalParameters.h"

using namespace coda;

GlobalParameters
coda::parameters;

//-----------------------------------------------------------------------------
GlobalParameters::GlobalParameters ():Parameters ("coda")
{
    *static_cast < Parameters * >(this) = default_parameters ();
}

//-----------------------------------------------------------------------------
GlobalParameters::~GlobalParameters ()
{
    // Do nothing
}

//-----------------------------------------------------------------------------
