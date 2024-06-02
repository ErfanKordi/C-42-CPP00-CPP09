#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    try
    {
        Intern intern;
        Form *form;

        // Testing with ShrubberyCreationForm
        form = intern.makeForm("shrubbery creation", "home");
        if (form)
        {
            Bureaucrat bob("Bob", 136);
            Bureaucrat john("John", 145);

            john.signForm(*form);
            bob.executeForm(*form);
            delete form;
        }

        // Testing with RobotomyRequestForm
        form = intern.makeForm("robotomy request", "Bender");
        if (form)
        {
            Bureaucrat bob("Bob", 45);
            Bureaucrat john("John", 72);

            john.signForm(*form);
            bob.executeForm(*form);
            delete form;
        }

        // Testing with PresidentialPardonForm
        form = intern.makeForm("presidential pardon", "Ford Prefect");
        if (form)
        {
            Bureaucrat bob("Bob", 1);
            Bureaucrat john("John", 25);

            john.signForm(*form);
            bob.executeForm(*form);
            delete form;
        }

        // Testing with an invalid form name
        form = intern.makeForm("invalid form", "target");
        if (!form)
        {
            std::cerr << "Failed to create invalid form." << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
