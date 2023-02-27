#include "AForm.hpp"

AForm::AForm() : Sign(-1), Exec(-1)
{
	this->A = false;
	return ;
}

AForm::AForm(const std::string name, const int sign, const int exec) : Name (name), Sign(sign), Exec(exec)
{
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	this->A = false;
	return ;
}

AForm::AForm(const AForm &other) : Name(other.Name), Sign(other.Sign), Exec(other.Exec)
{
	*this = other;
	return ;
}

AForm	&AForm::operator=(const AForm &other)
{
	this->A = other.getA();
	return (*this);
}

AForm::~AForm()
{
	return ;
}

void	AForm::beSigned(const Bureaucrat &other)
{
	if (this->Sign >= other.getGrade())
		this->A = true;
	else
		throw GradeTooLowException();
	other.signAForm(*this);
}

std::string	AForm::getName() const
{
	return (this->Name);
}

bool	AForm::getA() const
{
	return (this->A);
}

int	AForm::getSign() const
{
	return (this->Sign);
}

int	AForm::getExec() const
{
	return (this->Exec);
}

void	AForm::execute(const Bureaucrat &executor)
{
	if (!this->A)
	{
		std::cout << "Please sign the Form first\n";
		return ;
	}
	if (this->Exec >= executor.getGrade())
		this->beExec();
	else
		throw GradeTooLowException();
	executor.executeForm(*this);
}

const char	*AForm::GradeTooHighException::exp() const throw()
{
	return ("Grade too high");
}

const char	*AForm::GradeTooLowException::exp() const throw()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &o, const AForm &other)
{
	o << other.getName() << " requires a grade of " << other.getSign() << " to be signed and a grade of " << other.getExec() << " to be executed\n";
	return (o);
}
