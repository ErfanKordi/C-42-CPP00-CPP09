#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_size = 0;
	_array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array &other) : _size(other._size), _array(new T[other._size]())
{
	for (size_t i = 0; i < other._size; i++)
	{
		_array[i] = other._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] _array;
		_size = other._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
		{
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("invalid index");
	return _array[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("invalid index");
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
