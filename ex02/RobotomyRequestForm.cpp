#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy request form", 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm("Robotomy request form", 72, 45)
{
	this->Target = t;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("Robotomy request form", 72, 45)
{
	*this = other;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->Target = other.Target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

void	RobotomyRequestForm::beExec()
{
	time_t	t;
	time(&t);
	srand(t);
	int	random = rand() % 10 + 1;

	std::cout << "BRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n";
	sleep(2);
	if (random % 2)
		std::cout << this->Target << "'s Robotomization is Successful!\n";
	else
		std::cout << "SORRY " << this->Target << " we failed\n";
}
