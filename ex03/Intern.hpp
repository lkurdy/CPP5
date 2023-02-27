#ifndef INTERN_H
# define INTERN_H

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class   Intern
{
	public:
		Intern();
		Intern(const Intern &other);
		Intern	&operator=(const Intern &other);
		~Intern();
		AForm	*B;

		class	InvalidForm : public std::exception
		{
			public:
			const char *exp() const throw();
		};

		AForm	*makeForm(std::string name, std::string target);
};

#endif
