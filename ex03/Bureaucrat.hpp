#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat &obj);
		Bureaucrat &operator=(Bureaucrat &obj);
		~Bureaucrat(void);
		const std::string	&getName(void) const;
		int					getGrade(void) const;
		Bureaucrat(int val, const std::string n);
		void	increment_grade(void);
		void	derement_grade(void);
		void	signForm(AForm &obj);
		void	executeForm(AForm const & form) const;
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj); 

#endif