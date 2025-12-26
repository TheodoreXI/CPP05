#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat B(9, "jeffy");
		Bureaucrat A(1, "alyssa");
		std::cout << A.getGrade() << "\n";	
		std::cout << B.getGrade() << "\n";
		B.increment_grade();
		std::cout << B.getGrade() << "\n";
	/* do some stuff with bureaucrats */
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	/* handle exception */
	}

}