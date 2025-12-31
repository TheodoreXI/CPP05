#include "AForm.hpp"

AForm::AForm(void)
	:name("B_Aform"), s(0), grade_sign(0), grade_execute(0)
{
	std::cout << "AForm Default Constructor called.\n";
}

AForm::~AForm(void)
{
	std::cout << "AForm Default Destructor called.\n";
}

AForm::AForm(const AForm &obj)
	:name(obj.name), grade_sign(obj.grade_sign), grade_execute(obj.grade_execute)
{
	std::cout << "AForm copy constructor called.\n";
	*this = obj;
}

AForm::AForm(const std::string n, const int g_s, const int g_e)
	:name(n), grade_sign(g_s), grade_execute(g_e)
{
	std::cout << "AForm Parametrized Constructor.\n";
	if (grade_sign <= 0 || grade_execute <= 0)
	{
		throw(AForm::GradeTooHighException());
	}
	else if (grade_sign > 150 || grade_execute > 150)
	{
		throw(AForm::GradeTooLowException());
	}
}

AForm &AForm::operator=(const AForm &obj)
{
	this->s = obj.s;
	return (*this);
}

std::string	AForm::getName(void) const
{
	return (name);
}

bool		AForm::getS(void) const
{
	return (s);
}

int	AForm::getGrade_sign(void) const
{
	return (grade_sign);
}
int	AForm::getGrade_exec(void) const
{
	return (grade_execute);
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= grade_sign)
		s = 1;
	else
		throw(AForm::GradeTooLowException());
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->s == 1 && executor.getGrade() <= this->grade_execute)
	{
		executeAction();
	}
	else
	{
		throw(AForm::GradeTooLowException());
	}
}

std::ostream	&operator<<(std::ostream &os, const AForm &obj)
{
	os << obj.getName() << ", form sign is  " << obj.getGrade_sign() << " and execution grade " << obj.getGrade_exec() << ", this is the boolean sign " << obj.getS() << ".\n";
	return (os);
}
