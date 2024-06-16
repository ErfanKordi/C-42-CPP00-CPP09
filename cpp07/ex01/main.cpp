#include "inter.hpp"
#include <iostream>

void printx5(const int &num)
{
	std::cout << num * 5 << std::endl;
}

int main()
{
	int array[] = {1, 2, 3, 4};
	int len = sizeof(array) / sizeof(array[0]);

	iter(array, len, printx5);
	return 0;
}
