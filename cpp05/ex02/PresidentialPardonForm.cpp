#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), Target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), Target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form(other), Target(other.Target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	Target = other.Target;
	return *this;
}

void PresidentialPardonForm::action() const
{
	std::cout << Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
