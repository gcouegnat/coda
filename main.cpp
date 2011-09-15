#include <iostream>
#include <coda/coda.h>

using namespace coda;
int
main (int argc, char const *argv[])
{

    set_log_level (WARNING);

    Vector x (10), y (10), z (10), u (10), v (10);

    x = 1.0;
    y = 2.0;
    z = 3.0;

    u = 2.0 * (x + y) - (x - 1.5 * z);

    u.print ();

    return 0;
}
