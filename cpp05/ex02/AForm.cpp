#include "AForm.hpp"
#include <iostream>

// Default constructor
Form::Form() : _name("Unnamed"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

// Parameterized constructor
Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (gradeToSign > 150 || gradeToExecute > 150)
	{
		throw Form::GradeTooLowException();
	}
}

// Copy constructor
Form::Form(Form const &src)
	: _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {}

// Destructor
Form::~Form() {}

// Assignment operator
Form &Form::operator=(Form const &other)
{
	if (this != &other)
	{
		this->_isSigned = other._isSigned;
		// Note: _name, _gradeToSign, and _gradeToExecute are const, so we don't assign them
	}
	return *this;
}

// Getters
std::string Form::getName() const { return _name; }
bool Form::getIsSigned() const { return _isSigned; }
int Form::getGradeToSign() const { return _gradeToSign; }
int Form::getGradeToExecute() const { return _gradeToExecute; }

// beSigned method
void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		bureaucrat.signForm(*this);
		_isSigned = true;
	}
}

// Exception definitions
const char *Form::GradeTooHighException::what() const throw()
{
	return "Form grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form grade is too low!";
}

// Overloaded insertion operator
std::ostream &operator<<(std::ostream &o, Form const &obj)
{
	o << "Form: " << obj.getName() << ", signed: " << (obj.getIsSigned() ? "yes" : "no")
	  << ", grade to sign: " << obj.getGradeToSign()
	  << ", grade to execute: " << obj.getGradeToExecute();
	return o;
}

void Form::execute(Bureaucrat const &executor)
{
	if (this->getIsSigned() && this->getGradeToExecute() >= executor.getGrade())
	{
		this->action();
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}
