#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("Robotomy Request Form", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	(void)other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	(void)other;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& buro) const
{
	if (buro.getGrade() > getReqExec())
		throw AForm::GradeTooLowException();
	if (!getSign())
		throw AForm::FormNotSignedException();

	std::cout << "NO-NO-NO-NO-NOISE" << std::endl;
	if (rand() % 2)
		std::cout << target + " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
}
