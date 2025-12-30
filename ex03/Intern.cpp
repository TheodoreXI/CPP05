#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default constructor.\n";
}

Intern::~Intern(void)
{

	std::cout << "Intern Destructor called.\n";
}

AForm	*Intern::makeForm(const std::string &form_name, const std::string &form_target)
{
	std::string values[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm *(Intern::*func[3])(const std::string &t);
	func[0] = &Intern::form_president;
	func[1] = &Intern::form_robot;
	func[2] = &Intern::form_shrub;
	for (int i = 0; i < 3; i++)
	{
		if (form_name == values[i])
		{
			return ((this->*func[i])(form_target));
		}
	}
	return (NULL);
}

AForm	*Intern::form_president(const std::string &t)
{
	return (new PresidentialPardonForm(t));
}

AForm	*Intern::form_robot(const std::string &t)
{
	return (new RobotomyRequestForm(t));
}

AForm	*Intern::form_shrub(const std::string &t)
{
	return (new ShrubberyCreationForm(t));
}
