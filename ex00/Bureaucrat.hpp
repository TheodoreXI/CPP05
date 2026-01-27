#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		void	decrement_grade(void);
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

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj); 

#endif