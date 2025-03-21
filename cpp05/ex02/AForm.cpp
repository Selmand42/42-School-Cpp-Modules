#include "AForm.hpp"


AForm::AForm() : name("name"), sign(false), req_grade(60), req_exec(50) {}

AForm::AForm(std::string name, int grade, int exec) : name(name), req_grade(grade), req_exec(exec)
{
	if (grade > 150 || exec > 150)
		throw GradeTooLowException();
	if (grade < 1 || exec < 1)
		throw GradeTooHighException();
	setSign(false);
}

AForm::~AForm(){}

void AForm::beSigned(Bureaucrat& buro)
{
	if (buro.getGrade() > this->getReqGrade())
		throw GradeTooLowException();
	setSign(true);
}

std::string AForm::getName() const
{
	return this -> name;
}

int AForm::getReqGrade() const
{
	return this -> req_grade;
}

int AForm::getReqExec() const
{
	return this -> req_exec;
}

int AForm::getSign() const
{
	return this -> sign;
}

void AForm::setSign(int sign)
{
	this -> sign = sign;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Error: Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Error: Grade is too low!";
}

std::ostream& operator<<(std::ostream& cout, AForm& form)
{
	cout << "Name: " << form.getName() << std::endl
	<< "Grade to Sign: " << form.getReqGrade() << std::endl
	<< "Grade to Execute: " << form.getReqExec() << std::endl
	<< "Signed status: " << form.getSign() << std::endl;
	return(cout);
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form is Not Signed!");
}
