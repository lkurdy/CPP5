#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>
# include <unistd.h>
# include <ctime>
# include "AForm.hpp"

class	AForm;

class	Bureaucrat
{
	const std::string	Name;
	int	Grade;

	public:
	Bureaucrat();
	Bureaucrat(std::string n, int g);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat	&operator=(const Bureaucrat &other);
	~Bureaucrat();
	const std::string	getName() const;
	int	getGrade() const;
	void	upgrade();
	void	downgrade();
	void	signAForm(const AForm &other) const;
	void	executeForm(const AForm &form) const;

	class	GradeTooHighException : public std::exception
	{
		public:
		const char *exp() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public:
		const char *exp() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &other);

#endif
