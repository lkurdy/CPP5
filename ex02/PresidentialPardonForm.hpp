#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "AForm.hpp"

class   PresidentialPardonForm : public AForm
{
	std::string	Target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string t);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);
		~PresidentialPardonForm();
		void	beExec();
};

#endif
