#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery creation form", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm("Shrubbery creation form", 145, 137)
{
	this->Target = t;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("Shrubbery creation form", 145, 137)
{
	*this = other;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->Target = other.Target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

void	ShrubberyCreationForm::beExec()
{
	std::ofstream outfile;

	outfile.open((Target + "_shrubbery").c_str());
	outfile << "    A    \n";
	outfile << "  /   \\  \n";
	outfile << " B     C  \n";
}
