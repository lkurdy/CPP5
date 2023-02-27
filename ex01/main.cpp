#include "Form.hpp"

int	main()
{
	int	i = 0;

	try
	{
		std::cout << i++ << "- ";
		Bureaucrat A = Bureaucrat("A", 1);
		std::cout << A << std::endl;
		std::cout << i++ << "- ";
		Form B("B", 5, 5);
		std::cout << B;
		B.beSigned(A);
		A.signForm(B);
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Form::GradeTooLowException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Form::GradeTooHighException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat john = Bureaucrat("John", 7);
		Form C("C", 5, 5);

		std::cout << i++ << "- ";
		std::cout << C;
		C.beSigned(john);
		john.signForm(C);
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Form::GradeTooHighException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Form::GradeTooLowException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cerr << error.exp() << std::endl;
	}
	return (0);
}
