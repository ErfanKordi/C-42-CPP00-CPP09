#include <iostream>


template <typename t>
void swap(t&a, t&b)
{
	t temp = a;
	a = b;
	b = temp;
}

template <typename t>
const t& max(const t&a, const t&b)
{
	if(a>b)
		return a;
	return b;
}

template <typename t>
const t& min(const t&a, const t&b)
{
	if (a<b)
		return a;
	return b;
}
