#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#pragma once
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat; // Forward declaration

class Form
{
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;

public:
    Form();                                                      // Default constructor
    Form(std::string name, int gradeToSign, int gradeToExecute); // Parameterized constructor
    Form(Form const &src);                                       // Copy constructor
    virtual ~Form();                                             // Virtual destructor
    Form &operator=(Form const &other);                          // Assignment operator

    virtual void action() const = 0; // Pure virtual function

    // Exceptions
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

    // Getters
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    // Methods
    void beSigned(Bureaucrat const &bureaucrat); // Sign the form
    void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &o, Form const &obj);

#endif // FORM_HPP
