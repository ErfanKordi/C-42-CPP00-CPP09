#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat mo("mo", 1);
		mo.inceamentGrade();
		std::cout << mo << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat erf("erf", 1);
		std::cout << erf << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
}
