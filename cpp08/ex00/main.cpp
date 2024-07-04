#include "easyfind.hpp"
int main()
{
	std::vector<int> erfan;

	for (int i = 0; i < 10; ++i)
	{
		erfan.push_back(i * i);
	}

	try
	{
		// Try to find the value 5 in the vector
		std::vector<int>::iterator it = easyFind(erfan, 4);
		std::cout << *it << std::endl;
	}
	catch (const ElementNotFoundException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	//test2
	try
	{
		// Try to find the value 5 in the vector
		std::vector<int>::iterator it = easyFind(erfan, 5);
		std::cout << *it << std::endl;
	}
	catch (const ElementNotFoundException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
