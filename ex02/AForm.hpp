#ifndef AFORM_H
# define AFORM_H

# include "Bureaucrat.hpp"

class	Bureaucrat;

class   AForm
{
	const std::string	Name;
	bool	A;
	const int	Sign;
	const int	Exec;

	public:
		AForm();
		AForm(const std::string name, const int sign, const int exec);
		AForm(const AForm &other);
		AForm	&operator=(const AForm &other);
		~AForm();
		void	beSigned(const Bureaucrat &other);
		std::string	getName() const;
		bool	getA() const;
		int	getSign() const;
		int	getExec() const;
		void	execute(const Bureaucrat &executor);
		virtual void	beExec() = 0;

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

std::ostream	&operator<<(std::ostream &o, const AForm &other);

#endif
