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
	:name(obj.name), grade_sign(obj.grade_sign), grade_execute(obj.grade_execute)
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
	this->s = obj.s;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (name);
}

bool		Form::getS(void) const
{
	return (s);
}

int	Form::getGrade_sign(void) const
{
	return (grade_sign);
}
int	Form::getGrade_exec(void) const
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

std::ostream	&operator<<(std::ostream &os, const Form &obj)
{
	os << obj.getName() << ", form sign is  " << obj.getGrade_sign() << " and execution grade " << obj.getGrade_exec() << ", this is the boolean sign " << obj.getS() << ".\n";
	return (os);
}

