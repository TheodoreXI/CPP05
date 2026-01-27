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
		throw(Bureaucrat::GradeTooLowException());
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

void	Bureaucrat::derement_grade(void)
{
	grade++;
	if (grade > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (os);
}


void	Bureaucrat::signForm(AForm &obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout <<  this->getName()<< " signed " << obj.getName() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << obj.getName() << " bcause "<<  e.what() << '\n';
	}
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout <<  this->getName()<< " executed " << form.getName() << ".\n";
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because "<<  e.what() << ".\n";
	}

}