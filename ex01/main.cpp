#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat B(2, "bib");
		Bureaucrat A(6, "jeff");
		Form f("ragg", 5, 10);
		// Form k("kate", -1, 10);
		std::cout << A;
		std::cout << B;
		std::cout << f;
		A.signForm(f);
		B.signForm(f);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}

}