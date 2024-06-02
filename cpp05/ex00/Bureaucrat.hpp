#include <iostream>

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

	std::string getName(void) const;
	int getGrade(void) const;

	void inceamentGrade(void);
	void decreaseGrade(void);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj);
