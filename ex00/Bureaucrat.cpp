#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(std::string n, int g) : Name(n)
{
	if (g < 1)
		throw GradeTooHighException();
	else if (g > 150)
		throw GradeTooLowException();
	this->Grade = g;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : Name(other.Name)
{
	*this = other;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->Grade = other.Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

const std::string	Bureaucrat::getName() const
{
	return (this->Name);
}

int	Bureaucrat::getGrade() const
{
	return (this->Grade);
}

void	Bureaucrat::upgrade()
{
	if (Grade == 1)
		throw GradeTooHighException();
	this->Grade--;
}

void	Bureaucrat::downgrade()
{
	if (Grade == 150)
		throw GradeTooLowException();
	this->Grade++;
}

const char	*Bureaucrat::GradeTooHighException::exp() const throw()
{
	return ("Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::exp() const throw()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &other)
{
	o << other.getName() << " has a grade of: " << other.getGrade();
	return (o);
}
