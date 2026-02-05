#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
void f()
{
	system("leaks -c Bureaucrat");
}

int main()
{
	// atexit(f);
	AForm* form;
	try
	{
		Intern intern;
		Bureaucrat j(55, "jeff");
		Bureaucrat A(55, "AAAA");
		form = intern.makeForm("robotomy request", "Bender");
		std::cout << *form;
		A.signForm(*form);
		j.executeForm(*form);
		// delete form;
		// form = intern.makeForm("presidential pardon", "Bender");
		// std::cout << *form;
		// j.signForm(*form);
		// j.executeForm(*form);
		// delete form;
		// form = intern.makeForm("shrubbery creation", "Bender");
		// std::cout << *form;
		// j.signForm(*form);
		// j.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
		// delete form;
	}

}