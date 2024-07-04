#include "Span.hpp"

Span::Span(int const n) : _vecSize(n)
{
}

Span::Span(const Span &other) : _vecSize(other._vecSize), _vector(other._vector)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return *this;
	_vecSize = other._vecSize;
	_vector = other._vector;
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
	if (_vector.size() < static_cast<long unsigned int>(_vecSize))
		_vector.push_back(num);
	else
		throw Span::SpanIsFullExceprion();
}

void Span::addManyNumbers(std::vector<int> vec)
{
	if ((vec.size() + _vector.size()) - 1 < static_cast<long unsigned int>(_vecSize))
		_vector.insert(_vector.begin(), vec.begin(), vec.end());
	else
		throw Span::SpanIsFullExceprion();
}

void Span::longestSpan()
{
	if (_vector.size() < 2)
		throw Span::SpanSizeTooSmallException();
	std::vector<int>::iterator min = std::min_element(_vector.begin(), _vector.end());
	std::vector<int>::iterator max = std::max_element(_vector.begin(), _vector.end());
	std::cout << "The longest span is: " << *max - *min << std::endl;
}

void Span::shortestSpan()
{
	if (_vector.size() < 2)
		throw Span::SpanSizeTooSmallException();
	std::sort(_vector.begin(), _vector.end());

	int shortestSpan = std::numeric_limits<int>::max();

	for (size_t i = 1; i < _vector.size(); ++i)
	{
		int span = _vector[i] - _vector[i - 1];
		if (span < shortestSpan)
			shortestSpan = span;
	}

	std::cout << "The shortest span is: " << shortestSpan << std::endl;
}

const char *Span::SpanIsFullExceprion::what() const throw()
{
	return "Span is full, can't add more numbers.";
}
const char *Span::SpanSizeTooSmallException::what() const throw()
{
	return "Span is too small, no span to find.";
}
