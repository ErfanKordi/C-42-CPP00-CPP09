#include <algorithm>
#include <iostream>
#include <vector>

class ElementNotFoundException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Element not found";
	}
};

template <typename T>

typename T::iterator easyFind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw ElementNotFoundException();
	return it;
}

