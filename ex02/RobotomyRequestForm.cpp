#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	:AForm("robotomy", 72, 45), target("robotomy")
{
	std::cout << "RobotomyRequestForm Default Constructor called.\n";
}
RobotomyRequestForm::RobotomyRequestForm(const std::string t)
	:AForm("robotomy", 72, 45), target(t)
{
	std::cout << "RobotomyRequestForm Parametrized Constructor called.\n";
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called.\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
	:AForm(obj)
{
	std::cout << "RobotomyRequestForm copy constructor.\n";
	*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	this->target = obj.target;
	std::cout << "RobotomyRequestForm copy assignement operator.\n";
	return (*this);

}

void	RobotomyRequestForm::executeAction(void) const
{
	srand(time(NULL));
	std::cout << "Baaaaaaaaaa\n";
	if (rand() % 2)
	{
		std::cout << this->target <<  " has been robotomized successfully.\n";
	}
	else
	{
		std::cout << "the robotomy failed.\n";
	}
}

std::string	RobotomyRequestForm::getTarget(void)
{
	return (target);
}
