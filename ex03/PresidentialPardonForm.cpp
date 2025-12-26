#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	:AForm("president", 25, 5), target("President")
{
	std::cout << "PresidentialPardonForm Default Constructor called.\n";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string t)
	:AForm("president", 25, 5), target(t)
{
	std::cout << "PresidentialPardonForm Parametrized Constructor called.\n";
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor called.\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
	:AForm(obj)
{
	std::cout << "PresidentialPardonForm copy constructor.\n";
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	(void)obj;//need to work on it later
	std::cout << "PresidentialPardonForm copy assignement operator.\n";
	return (*this);

}

void	PresidentialPardonForm::executeAction(void) const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.\n";
}

// void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
// {
	
// }