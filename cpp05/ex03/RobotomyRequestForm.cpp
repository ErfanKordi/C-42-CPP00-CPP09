#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form(other), target(other.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	this->target = other.target;
	return *this;
}

void RobotomyRequestForm::action() const
{
	std::cout << "Drilling noises... " << target << " has been robotomized successfully 50% of the time." << std::endl;
}
