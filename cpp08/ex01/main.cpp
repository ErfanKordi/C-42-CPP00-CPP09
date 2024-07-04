#include <iostream>
#include <vector>
#include "Span.hpp"

int main()
{
	// test1
	try
	{
		Span sp(10);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.shortestSpan();
		sp.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	// test 2
	try
	{
		Span sp(1000);
		std::vector<int> moreNumbers(1000);
		for (size_t i = 0; i < 1000; i++)
			moreNumbers[i] = i * i;
		sp.addManyNumbers(moreNumbers);
		sp.shortestSpan();
		sp.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	// test 3
	try
	{
		Span sp(10);
		std::vector<int> moreNumbers(1000);
		for (size_t i = 0; i < 1000; i++)
			moreNumbers[i] = i * i;
		sp.addManyNumbers(moreNumbers);
		sp.shortestSpan();
		sp.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	// test 4
	try
	{
		Span sp(1);
		sp.shortestSpan();
		sp.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
