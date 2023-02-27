#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern()
{
	return ;
}

Intern::Intern(const Intern &other)
{
	*this = other;
	return ;
}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	return ;
}

const char	*Intern::InvalidForm::exp() const throw()
{
	return ("Please provide a valid form name");
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	int	i = 0;
	AForm *A;
	std::string msg[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	while (i < 3 && name != msg[i])
		i++;
	switch(i)
	{
		case 0:
			A = new ShrubberyCreationForm(target);
			break;
		case 1:
			A = new RobotomyRequestForm(target);
			break;
		case 2:
			A = new PresidentialPardonForm(target);
			break;
		default:
			throw InvalidForm();
	}
	std::cout << "Intern made a " << A->getName() << std::endl;
	this->B = A;
	return (A);
}
