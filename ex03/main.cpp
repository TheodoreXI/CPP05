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
		B	j.signForm(*form);
		j.executeForm(*form);
		// ShrubberyCreationForm	A("target");
		// RobotomyRequestForm  	B("target");
		// PresidentialPardonForm	C("target");
		// j.signForm(A);
		// j.executeForm(A);
		// j.sigureaucrat				j(2, "Jeff");
		AForm* form = intern.makeForm("robotomy request", "Bender");
	nForm(B);
		// j.executeForm(B);
		// j.signForm(C);
		// j.executeForm(C);

		// std::cout << B.getGrade() << "\n";
	/* do some stuff with bureaucrats */
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	/* handle exception */
	}

}