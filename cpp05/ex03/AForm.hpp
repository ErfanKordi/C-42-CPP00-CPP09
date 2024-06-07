#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#pragma once
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;

public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const &src);
	virtual ~Form();
	Form &operator=(Form const &other);

	virtual void action() const = 0; // Pure virtual function

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat const &bureaucrat);
	void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &o, Form const &obj);

#endif
