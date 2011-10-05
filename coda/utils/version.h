#define CODA_VERSION_MAJOR 0
#define CODA_VERSION_MINOR 1
#define CODA_VERSION_PATCH 0
#define CODA_VERSION_NAME  "dev"

namespace coda
{
	struct coda_version
	{
		static const unsigned int major = CODA_VERSION_MAJOR;
		static const unsigned int minor = CODA_VERSION_MINOR;	
		static const unsigned int patch = CODA_VERSION_PATCH;
		

		static inline std::string as_string()
		{
			const char* nickname = CODA_VERSION_NAME;	std::stringstream s;
			
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
}