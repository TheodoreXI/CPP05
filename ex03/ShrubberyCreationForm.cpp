#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	:AForm("Shrubby", 145, 137), target("President")
{
	std::cout << "ShrubberyCreationForm Default Constructor called.\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string t)
	:AForm("Shrubby", 145, 137), target(t)
{
	std::cout << "ShrubberyCreationForm Parametrized Constructor called.\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Destructor called.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
	:AForm(obj)
{
	std::cout << "ShrubberyCreationForm copy constructor.\n";
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm copy assignement operator.\n";
	this->target = obj.target;
	return (*this);

}

void	ShrubberyCreationForm::executeAction(void) const
{
	std::string		f;
	f = this->target + "_shrubbery";
	std::ofstream	my_out(f);
	my_out << "	              v .   ._, |_  .,\n";
	my_out << "           `-._//  .  / /    |/_\n";
	my_out << "               \\  _/, y | ///\n";
	my_out << "         _/_.___\\, \\/ -./||\n";
	my_out << "           `7-,--.`._||  / / ,\n";
	my_out << "           /'     `-. `./ / |/_.'\n";
	my_out << "                     |    |//\n";
	my_out << "                     |_    /\n";
	my_out << "                     |-   |\n";
	my_out << "                     |   =|\n";
	my_out << "                     |    |\n";
	my_out << "--------------------/ ,  . /--------._\n";

}

std::string	ShrubberyCreationForm::getTarget(void)
{
	return (target);
}
