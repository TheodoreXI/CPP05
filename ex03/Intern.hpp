#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &obj);
		Intern &operator=(const Intern &obj);
		AForm	*makeForm(const std::string &form_name, const std::string &form_target);
		AForm	*form_president(const std::string &t);
		AForm	*form_robot(const std::string &t);
		AForm	*form_shrub(const std::string &t);
		class InternExcept : public std::exception
		{
			public:
				const char *what() const throw();
		};

};


#endif