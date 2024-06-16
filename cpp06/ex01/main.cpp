#include <iostream>
#include "Data.hpp"
#include "Serialization.hpp"

int main()
{
	Data originalData;
	originalData.intValue = 42;
	originalData.floatValue = 42.2f;
	originalData.stringValue = "Im Erfan!";

	uintptr_t raw = Serialization::serialize(&originalData);

	Data *deserializedData = Serialization::deserialize(raw);

	if (deserializedData == &originalData)
		std::cout << "passed!" << std::endl;
	else
		std::cout << "failed!" << std::endl;

	std::cout << "Int value: " << deserializedData->intValue << std::endl;
	std::cout << "Float value: " << deserializedData->floatValue << std::endl;
	std::cout << "String value: " << deserializedData->stringValue << std::endl;

	return 0;
}
