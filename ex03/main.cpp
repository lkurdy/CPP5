#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern	Gabriel;

	Gabriel.B = NULL;
	try
	{
		Bureaucrat	John("John", 70);
		AForm *A = Gabriel.makeForm("robotomy request", "Jonas");

		A->beSigned(John);
		A->execute(John);
		delete A;
	}
	catch (Intern::InvalidForm &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	John("John", 150);
		AForm *A = Gabriel.makeForm("shrubbery creation", "Thomas");

		A->beSigned(John);
		A->execute(John);
		delete A;
	}
	catch (Intern::InvalidForm &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;	
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;	
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;	
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	John("John", -1000);
		AForm *A = Gabriel.makeForm("presidential pardon", "Fred");

		A->beSigned(John);
		A->execute(John);
		delete A;
	}
	catch (Intern::InvalidForm &e)
	{
		std::cerr << e.exp() << std::endl;
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;	
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.exp() << std::endl;	
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.exp() << std::endl;
		if (Gabriel.B)
		{
			delete Gabriel.B;
			Gabriel.B = NULL;
		}
	}
	return (0);
}
