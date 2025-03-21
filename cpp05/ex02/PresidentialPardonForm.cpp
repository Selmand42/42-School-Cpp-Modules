#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("Presidential Pardon Form", 25, 5), target(target) {}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	(void)other;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	(void)other;
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &buro) const
{
	if (buro.getGrade() > getReqExec())
		throw AForm::GradeTooLowException();
	if (!getSign())
		throw AForm::FormNotSignedException();

	std::cout << target + " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
