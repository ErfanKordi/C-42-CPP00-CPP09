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
	std::string specialTypes[6] = {
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"};

	if (arg.size() == 1 && !std::isdigit(arg[0]))
	{
		char c = arg[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return;
	}

	if (arg.size() <= 3 && isAllNumbers(arg))
	{
		int decimal = std::atoi(arg.c_str());
		if (decimal <= 32 || decimal >= 127)
			std::cout << "char: Non displayable" << std::endl;
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
			std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: Non displayable" << std::endl;
			if (i <= 2)
			{
				std::cout << "float: " << specialTypes[i + 3] << std::endl;
				std::cout << "double: " << specialTypes[i] << std::endl;
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
	double d = std::strtod(arg.c_str(), &endptr);
	if (((size_t)(endptr - arg.c_str()) == arg.length()) || ((size_t)(endptr - arg.c_str()) == arg.length() - 1 && *endptr == 'f'))
	{
		float f = static_cast<float>(d);
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
		return;
	}

	std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << "0" << std::endl;
	std::cout << "float: " << "0.0f" << std::endl;
	std::cout << "double: " << "0.0" << std::endl;
}
