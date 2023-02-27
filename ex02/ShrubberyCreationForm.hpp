#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.hpp"

class   ShrubberyCreationForm : public AForm
{
	std::string	Target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string t);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
		void	beExec();
};

#endif
