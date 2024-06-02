#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main(void)
{    try
	{
        ShrubberyCreationForm SCF("home");
        Bureaucrat b1("Bob", 1);
        Bureaucrat b2("Jhon", 1);
        SCF.beSigned(b2);
        b1.executeForm(SCF);

        b2.executeForm(SCF);
    }

	catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
