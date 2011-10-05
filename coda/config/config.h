#ifndef CONFIG_H
#define CONFIG_H

namespace coda
{

#if !defined(CODA_NO_DEBUG) && !defined(NDEBUG) && !defined(CODA_DEBUG)
#define CODA_DEBUG
#endif

#if defined(CODA_EXTRA_DEBUG) && !defined(CODA_DEBUG)
#define CODA_DEBUG
#endif

#if defined(CODA_DEBUG) && defined(CODA_NO_DEBUG)
#undef CODA_DEBUG
#endif

#if defined(CODA_EXTRA_DEBUG) && defined(CODA_NO_DEBUG)
#undef CODA_DEBUG
#undef CODA_EXTRA_DEBUG
#endif

} /* namespace coda */

#endif /* CONFIG_H */
