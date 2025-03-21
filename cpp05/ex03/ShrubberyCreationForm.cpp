#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("Shrubbery Creation Form", 145, 137), target(target) {}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	(void)other;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return *this;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& buro) const
{
	if (buro.getGrade() > getReqExec())
		throw AForm::GradeTooLowException();
	if (!getSign())
		throw AForm::FormNotSignedException();


	std::string str = target + "_shrubbery";
	std::ofstream out(str.c_str());

	if (out)
	{

		for (int i = 1; i <= 30; i += 2)
			out << std::string((30 - i) / 2, ' ') << std::string(i, '*') << std::endl;

		for (int i = 0; i < 30 / 5; ++i)
			out << std::string((30 - 3) / 2, ' ') << "|||" << std::endl;
	}
	else
	{
		throw std::runtime_error("Failed to create shrubbery file for " + target + ".");
	}
	out.close();
}
