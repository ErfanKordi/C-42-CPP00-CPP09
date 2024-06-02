#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return *this;
}

Form *createShrubberyForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form *createRobotomyForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form *createPresidentialForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	std::string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"};

	FormCreator formCreators[] = {
		&createShrubberyForm,
		&createRobotomyForm,
		&createPresidentialForm};

	for (int i = 0; i < 3; ++i)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return formCreators[i](target);
		}
	}

	std::cerr << "Form name " << formName << " does not exist!" << std::endl;
	return NULL;
}
