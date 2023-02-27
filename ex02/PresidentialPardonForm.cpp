#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential pardon form", 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("Presidential pardon form", 25, 5)
{
	this->Target = t;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("Presidential pardon form", 25, 5)
{
	*this = other;
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->Target = other.Target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

void	PresidentialPardonForm::beExec()
{
	std::cout << this->Target << " has been Pardon by Sir Zaphod Beeblebrox himself\n";
}
