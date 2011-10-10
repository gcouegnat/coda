#ifndef RANDOM_H
#define RANDOM_H
namespace coda
{
bool rand_seeded = false;
template <typename eT>
inline eT randu()
{
    if (rand_seeded == false)
    {
        unsigned int s = static_cast<long int>(time(0));
        std::srand(s);
        rand_seeded = true; 
    }
    return static_cast<eT>(std::rand())/static_cast<eT>(RAND_MAX);
}
} // namespace coda
#endif // RANDOM_H
