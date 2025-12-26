#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string 	name;
		bool				s;
		const int			grade_sign;
		const int			grade_execute;
	public:
		AForm(void);
		AForm(const std::string n, const int g_s, const int g_e);
		virtual ~AForm(void);
		AForm(const AForm &obj);
		AForm &operator=(const AForm &obj);
		std::string			getName(void) const;
		bool				getS(void) const;
		int					getGrade_sign() const;
		int					getGrade_exec() const;
		void				beSigned(Bureaucrat &b);
		void				execute(Bureaucrat const & executor) const;
		virtual void		executeAction(void) const = 0 ;


};

std::ostream	&operator<<(std::ostream &os, const AForm &obj);

#endif