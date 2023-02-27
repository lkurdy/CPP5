#include "Bureaucrat.hpp"

int	main()
{
	int	i = 0;

	try
	{
		std::cout << i++ << "- ";
		Bureaucrat john = Bureaucrat("John", 0);
		std::cout << john << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	try
	{
		std::cout << i++ << "- ";
		Bureaucrat john = Bureaucrat("John", 200);
		std::cout << john << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	try
	{
		std::cout << i++ << "- ";
		Bureaucrat john = Bureaucrat("John", 1);
		std::cout << john << std::endl;
		john.upgrade();
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	try
	{
		std::cout << i++ << "- ";
		Bureaucrat john = Bureaucrat("John", 150);
		std::cout << john << std::endl;
		john.downgrade();
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	return (0);
}
