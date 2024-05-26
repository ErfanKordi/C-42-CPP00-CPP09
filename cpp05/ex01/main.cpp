#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat Ali("Ali", 1);
		Form form1("Top secret", 1, 1);
		form1.beSigned(Ali);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat Ali("Ali", 10);
		Form form1("Top secret", 1, 1);
		form1.beSigned(Ali);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
