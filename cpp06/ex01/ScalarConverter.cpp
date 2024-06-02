#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) { *this = other; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return *this;
}

bool isAllNumbers(const std::string &str)
{
	if (str.empty())
		return false;
	for (std::string::size_type i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

void ScalarConverter::convert(std::string arg)
{
	std::string specialTypes[6] =
		{
			"-inff", "+inff", "nanf",
			"-inf", "+inf", "nan"};

	if (arg.size() <= 3 && arg != "nan" && (isAllNumbers(arg) || (arg.size() == 1 && std::isdigit(arg[0]))))
	{
		int decimal = std::atoi(arg.c_str());
		if (decimal <= 32 || decimal >= 127)
			std::cout << "char: " << "Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(decimal) << std::endl;
		std::cout << "int: " << decimal << std::endl;
		std::cout << "float: " << decimal << ".0f" << std::endl;
		std::cout << "double: " << decimal << ".0" << std::endl;
		return;
	}
	for (size_t i = 0; i < 6; i++)
	{
		if (arg == specialTypes[i])
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " <<  "impossible" << std::endl;
			if (i <= 2)
			{
				std::cout << "float: " << specialTypes[i] << std::endl;
				std::cout << "double: " << specialTypes[i + 3] << std::endl;
			}
			else
			{
				std::cout << "float: " << specialTypes[i - 3] << std::endl;
				std::cout << "double: " << specialTypes[i] << std::endl;
			}
			return;
		}
	}
	char *endptr;
	double d = 0;
	d = std::strtod(arg.c_str(), &endptr);
	if ((size_t)(endptr - arg.c_str()) != arg.length())
		d = std::strtof(arg.c_str(), &endptr);
	if (endptr == arg.c_str() + arg.length() || *endptr == 'f')
	{
		if (d <= 32 || d >= 127)
			std::cout << "char: " << "Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << d << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
		return;
	}
	std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << "0" << std::endl;
	std::cout << "float: " << "0.0f" << std::endl;
	std::cout << "double: " << "0.0" << std::endl;
}
