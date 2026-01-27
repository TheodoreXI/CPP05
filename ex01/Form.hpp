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
		std::string			getName(void) const;
		bool				getS(void) const;
		int					getGrade_sign(void) const;
		int					getGrade_exec(void) const;
		void				beSigned(Bureaucrat &b);
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};


};

std::ostream	&operator<<(std::ostream &os, const Form &obj);

#endif