#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(void) : _name("spy"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called -> " << this->getName() << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	std::cout << "Bureaucrat constructor called -> " << this->getName() << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = obj.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called -> " << this->getName() << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Exception: Grade is too high(grade < 1)";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Exception: Grade is too low(grade > 150)";
}

void Bureaucrat::increamentGrade(void)
{
	this->_grade--;
	std::cout << "grade increased" << std::endl;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::decreaseGrade(void)
{
	this->_grade++;
	std::cout << "grade decreased" << std::endl;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj)
{
	o << obj.getName() << ", bureaucrat grade is " << obj.getGrade() << ".";
	return o;
}
