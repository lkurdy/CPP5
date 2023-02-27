#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	John("John", 1);
		ShrubberyCreationForm	A("Thomas");

		A.beSigned(John);
		A.execute(John);
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	John("John", 1);
		RobotomyRequestForm	A("Thomas");

		A.beSigned(John);
		A.execute(John);
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	John("John", 1);
		PresidentialPardonForm	A("Thomas");

		A.beSigned(John);
		A.execute(John);
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	return (0);
}
