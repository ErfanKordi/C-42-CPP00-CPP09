#include <iostream>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <cctype>
class ScalarConverter
{
	private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);
	~ScalarConverter();

	public:
	void static convert(std::string arg);

};
