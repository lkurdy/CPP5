#include "Form.hpp"

Form::Form() : Sign(-1), Exec(-1)
{
	this->A = false;
	return ;
}

Form::Form(const std::string name, const int sign, const int exec) : Name (name), Sign(sign), Exec(exec)
{
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	this->A = false;
	return ;
}

Form::Form(const Form &other) : Name(other.Name), Sign(other.Sign), Exec(other.Exec)
{
	*this = other;
	return ;
}

Form	&Form::operator=(const Form &other)
{
	this->A = other.getA();
	return (*this);
}

Form::~Form()
{
	return ;
}

void	Form::beSigned(const Bureaucrat &other)
{
	if (this->Sign >= other.getGrade())
		this->A = true;
	else
		throw GradeTooLowException();
}

std::string	Form::getName() const
{
	return (this->Name);
}

bool	Form::getA() const
{
	return (this->A);
}

int	Form::getSign() const
{
	return (this->Sign);
}

int	Form::getExec() const
{
	return (this->Exec);
}

const char	*Form::GradeTooHighException::exp() const throw()
{
	return ("Grade too high");
}

const char	*Form::GradeTooLowException::exp() const throw()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &o, const Form &other)
{
	o << other.getName() << " requires a grade of " << other.getSign() << " to be signed and a grade of " << other.getExec() << " to be executed\n";
	return (o);
}
