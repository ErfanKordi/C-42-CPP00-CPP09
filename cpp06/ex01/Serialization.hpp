#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include "Data.hpp"
#include <iostream>

class Serialization
{
private:
	Serialization();
	Serialization(Serialization const &src);
	Serialization &operator=(Serialization const &other);
	~Serialization();

public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};

#endif
