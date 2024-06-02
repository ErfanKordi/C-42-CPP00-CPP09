#include "AForm.hpp"
#include <iostream>
#include <fstream>
#pragma once


class ShrubberyCreationForm : public Form
{
private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string Target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	void action() const;
};
