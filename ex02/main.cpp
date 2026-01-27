#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat				j(89, "Jeff");
		ShrubberyCreationForm	A("target");
		RobotomyRequestForm  	B("target");
		PresidentialPardonForm	C("target");
		std::cout << j;
		std::cout << A;
		std::cout << B;
		std::cout << C;
		j.signForm(A);
		j.executeForm(A);
		j.signForm(B);
		j.executeForm(B);
		j.signForm(C);
		j.executeForm(C);

		// std::cout << B.getGrade() << "\n";
	/* do some stuff with bureaucrats */
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	/* handle exception */
	}

}