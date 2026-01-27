#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main()
{
	AForm* form;
	try
	{
		Intern intern;
		Bureaucrat j(55, "jeff");
		form = intern.makeForm("robotomy request", "Bender");
		std::cout << *form;
		j.signForm(*form);
		j.executeForm(*form);
		delete form;
		form = intern.makeForm("presidential pardon", "Bender");
		std::cout << *form;
		j.signForm(*form);
		j.executeForm(*form);
		delete form;
		form = intern.makeForm("shrubbery creation", "Bender");
		std::cout << *form;
		j.signForm(*form);
		j.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
		// delete form;
	}

}