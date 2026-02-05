#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	:name("Jeff"), grade(150)
{
	std::cout << "Bureaucrat Defaut Constructor.\n";
}

Bureaucrat::Bureaucrat(int val, const std::string n)
	:name(n)
{
	std::cout << "Bureaucrat Parametrized Constructor.\n";
	if (val <= 0)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	else if (val > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	grade = val;
}

Bureaucrat::Bureaucrat(Bureaucrat &obj)
	:name(obj.name)
{
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &obj)
{
	this->grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor.\n";
	throw -1;
}
const std::string	&Bureaucrat::getName(void) const
{
	return (name);
}

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

void	Bureaucrat::increment_grade(void)
{
	grade--;
	if (grade <= 0)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
}

void	Bureaucrat::decrement_grade(void)
{
	grade++;
	if (grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low.";
}