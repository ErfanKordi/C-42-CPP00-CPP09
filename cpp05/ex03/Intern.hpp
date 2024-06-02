#include <iostream>

#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
public:
	Intern();
	Intern(Intern const &other);
	~Intern();

	Intern &operator=(Intern const &other);

	Form *makeForm(std::string formName, std::string target);
};

typedef Form *(*FormCreator)(std::string const &target);

Form *createShrubberyForm(std::string const &target);
Form *createRobotomyForm(std::string const &target);
Form *createPresidentialForm(std::string const &target);
