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
	:name(obj.name), s(obj.s), grade_sign(obj.grade_sign), grade_execute(obj.grade_execute)
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
		throw(std::logic_error("AForm::GradeTooHighException"));
	}
	else if (grade_sign > 150 || grade_execute > 150)
	{
		throw (std::logic_error("AForm::GradeTooLowException"));
	}
}

AForm &AForm::operator=(const AForm &obj)
{
	(void)obj;
	return (*this);//still needs to check
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
		throw(std::logic_error("AForm::GradeTooLowException"));
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->s == 1 && executor.getGrade() <= this->grade_execute)
	{
		executeAction();
	}
	else
	{
		throw(std::logic_error("Bureaucrat::NoExecutionCapability"));
	}
}

