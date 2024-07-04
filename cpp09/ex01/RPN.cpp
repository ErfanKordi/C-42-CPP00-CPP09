#include "RPN.hpp"

void error(const std::string &message)
{
	std::cerr << "Error: " << message << std::endl;
	std::exit(1);
}

bool isOperator(const std::string &token)
{
	return token == "+" || token == "-" || token == "*" || token == "/";
}

int applyOperator(const std::string &op, int a, int b)
{
	if (op == "+")
		return a + b;
	if (op == "-")
		return a - b;
	if (op == "*")
		return a * b;
	if (op == "/")
	{
		if (b == 0)
			error("Division by zero");
		return a / b;
	}
	error("Invalid operator");
	return 0;
}
