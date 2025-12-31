#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat B(9, "jeffy");
		Bureaucrat A(1, "alyssa");
		std::cout << A.getGrade() << "\n";	
		std::cout << A;	
		std::cout << B.getGrade() << "\n";
		B.increment_grade();
		std::cout << B.getGrade() << "\n";
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}

}