#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "AForm.hpp"

class   RobotomyRequestForm : public AForm
{
	std::string	Target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string t);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);
		~RobotomyRequestForm();
		void	beExec();
};

#endif
