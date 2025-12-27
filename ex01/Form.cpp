#include "Form.hpp"

Form::Form(void)
	:name("B_form"), s(0), grade_sign(0), grade_execute(0)
{
	std::cout << "Form Default Constructor called.\n";
}

Form::~Form(void)
{
	std::cout << "Form Default Destructor called.\n";
}

Form::Form(const Form &obj)
	:name("B_form"), s(0), grade_sign(0), grade_execute(0)
{
	std::cout << "Form copy constructor called.\n";
	*this = obj;
}

Form::Form(const std::string n, const int g_s, const int g_e)
	:name(n), grade_sign(g_s), grade_execute(g_e)
{
	std::cout << "Form Parametrized Constructor.\n";
	if (grade_sign <= 0 || grade_execute <= 0)
	{
		throw(Form::GradeTooHighException());
	}
	else if (grade_sign > 150 || grade_execute > 150)
	{
		throw(Form::GradeTooLowException());
	}
}

Form &Form::operator=(const Form &obj)
{
	(void)obj;
	return (*this);//still needs to check
}

std::string	Form::getName(void)
{
	return (name);
}

bool		Form::getS(void)
{
	return (s);
}

int	Form::getGrade_sign(void)
{
	return (grade_sign);
}
int	Form::getGrade_exec(void)
{
	return (grade_execute);
}

void		Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= grade_sign)
		s = 1;
	else
		throw(Form::GradeTooLowException());
}

