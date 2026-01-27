#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

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
		void	signForm(Form &obj);
		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj); 

#endif