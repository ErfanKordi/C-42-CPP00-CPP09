#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(void) : _name("spy"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called-> " << this->getName() << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	std::cout << "Bureaucrat constructor called-> " << this->getName() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name)
{
	std::cout << "Bureaucrat copy constructor called-> " << this->getName() << std::endl;
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
	std::cout << "Bureaucrat destructor called-> " << this->getName() << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Exception: Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Exception: Grade is too low";
}

void Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::decrementGrade(void)
{
	this->_grade++;
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

int Bureaucrat::signForm(Form &form) const
{
	if (form.getGradeToSign() >= this->_grade)
	{
		std::cout << this->_name << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
		return 1;
	}
	else
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because his grade is too low" << std::endl;
		return 0;
	}
}

void Bureaucrat::executeForm(Form &form) const
{
	try
	{
		form.execute(*this);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << " for " << this->getName() << '\n';
	}
}
