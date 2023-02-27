#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>

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
