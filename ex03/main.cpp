#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern intern;
		Bureaucrat j(55, "jeff");
		AForm* form = intern.makeForm("robotomy request", "Bender");
		std::cout << *form;
		j.signForm(*form);
		j.executeForm(*form);
		form = intern.makeForm("presidential pardon", "Bender");
		std::cout << *form;
		j.signForm(*form);
		j.executeForm(*form);
		form = intern.makeForm("shrubbery creation", "Bender");
		std::cout << *form;
		j.signForm(*form);
		j.executeForm(*form);
	/* do some stuff with bureaucrats */
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	/* handle exception */
	}

}