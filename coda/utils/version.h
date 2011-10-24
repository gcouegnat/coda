#ifndef CODA_CONFIG_VERSION_H_
#define CODA_CONFIG_VERSION_H_

#define CODA_VERSION 100
#define CODA_VERSION_MAJOR (CODA_VERSION / 100000)
#define CODA_VERSION_MINOR (CODA_VERSION / 100 % 1000)
#define CODA_VERSION_PATCH (CODA_VERSION % 100)
#define CODA_VERSION_NAME  "development"

namespace coda {
struct coda_version {
  static const unsigned int major = CODA_VERSION_MAJOR;
  static const unsigned int minor = CODA_VERSION_MINOR;
  static const unsigned int patch = CODA_VERSION_PATCH;

  static inline std::string as_string() {
    const char* nickname = CODA_VERSION_NAME;
    std::stringstream s;
    s << coda_version::major
      << '.'
      << coda_version::minor
      << '.'
      << coda_version::patch
      << " ("
      << nickname
      << ')';
    return s.str();
  }

};

std::string version() {
  std::stringstream s;
  s << "CODA " << coda_version::as_string() << std::endl;
  return s.str();
}

} //  namespace coda

#endif  // CODA_CONFIG_VERSION_H_


