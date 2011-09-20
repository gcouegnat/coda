#ifndef ACCESS_HPP
#define ACCESS_HPP

struct access
{
	template <typename T1>
	inline static T1& rw(const T1& x)
	{
		return const_cast<T1&>(x);
	}
};

#endif /* end of include guard: ACCESS_HPP */
