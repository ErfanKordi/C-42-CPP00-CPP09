#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form(other), target(other.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	this->target = other.target;
	return *this;
}

void ShrubberyCreationForm::action() const
{
	std::ofstream outFile((target + "_shrubbery").c_str());
	if (!outFile)
	{
		std::cerr << "Can't open/create " << target + "_shrubbery" << std::endl;
		return;
	}

	outFile << "       _-_\n";
	outFile << "    /~~   ~~\\\n";
	outFile << " /~~         ~~\\\n";
	outFile << "{               }\n";
	outFile << " \\  _-     -_  /\n";
	outFile << "   ~  \\\\ //  ~\n";
	outFile << "_- -   | | _- _\n";
	outFile << "  _ -  | |   -_\n";
	outFile << "      // \\\\ \n";

	outFile.close();
}
