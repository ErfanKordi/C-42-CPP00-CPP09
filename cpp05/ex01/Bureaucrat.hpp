#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form; // Forward declaration

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat();

    Bureaucrat &operator=(Bureaucrat const &obj);

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
    std::string getName(void) const;
    int getGrade(void) const;

    // Methods
    void incrementGrade(void);
    void decrementGrade(void);
    int signForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj);

#endif // BUREAUCRAT_HPP
