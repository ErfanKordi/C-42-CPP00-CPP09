#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main(void)
{
	try
	{
		ShrubberyCreationForm form("home");
		Bureaucrat b1("Erfan", 1);
		Bureaucrat b2("Ali", 138);
		form.beSigned(b2);
		b1.executeForm(form);
		b2.executeForm(form);
	}

	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
