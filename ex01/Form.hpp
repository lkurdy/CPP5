#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"

class	Bureaucrat;

class   Form
{
	const std::string	Name;
	bool	A;
	const int	Sign;
	const int	Exec;

	public:
		Form();
		Form(const std::string name, const int sign, const int exec);
		Form(const Form &other);
		Form	&operator=(const Form &other);
		~Form();
		void	beSigned(const Bureaucrat &other);
		std::string	getName() const;
		bool	getA() const;
		int	getSign() const;
		int	getExec() const;

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

std::ostream	&operator<<(std::ostream &o, const Form &other);

#endif
