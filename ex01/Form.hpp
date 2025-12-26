#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string 	name;
		bool				s;
		const int			grade_sign;
		const int			grade_execute;
	public:
		Form(void);
		Form(const std::string n, const int g_s, const int g_e);
		~Form(void);
		Form(const Form &obj);
		Form &operator=(const Form &obj);
		std::string			getName(void);
		bool				getS(void);
		int			getGrade_sign();
		int			getGrade_exec();
		void				beSigned(Bureaucrat &b);
		class GradeTooHighException : public std::exception
		{
			const char *what() const throw()
			{
				return "Grade too high.";
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw()
			{
				return "Grade too low.";
			}
		};


};

std::ostream	&operator<<(std::ostream &os, const Form &obj);

#endif