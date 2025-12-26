#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat B(2, "bib");
		Bureaucrat A(6, "jeff");
		Form f("jeff", 5, 10);
		A.signForm(f);
		B.signForm(f);
		// std::cout << B.getGrade() << "\n";
	/* do some stuff with bureaucrats */
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	/* handle exception */
	}

}