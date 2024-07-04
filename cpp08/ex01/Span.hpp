#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
	private:
	int _vecSize;
	Span();
	std::vector<int> _vector;

	public:
	Span(int const n);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	void addNumber(int num);
	void shortestSpan();
	void longestSpan();
	void addManyNumbers(std::vector<int> vec);

	class SpanIsFullExceprion : public std::exception
	{
		public: virtual const char *what() const throw();
	};
	class SpanSizeTooSmallException : public std::exception
	{
		public: virtual const char *what() const throw();
	};
};

