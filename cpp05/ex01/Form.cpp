#include "Form.hpp"


Form::Form() : name("name"), sign(false), req_grade(60), req_exec(50) {}

Form::Form(std::string name, int grade, int exec) : name(name), req_grade(grade), req_exec(exec)
{
	if (grade > 150 || exec > 150)
		throw GradeTooLowException();
	if (grade < 1 || exec < 1)
		throw GradeTooHighException();
	setSign(false);
}

Form::Form(const Form& form) : name(form.name), sign(form.sign), req_grade(form.req_grade), req_exec(form.req_exec) {}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		sign = other.sign;
	return *this;
}

Form::~Form(){}

void Form::beSigned(Bureaucrat& buro)
{
	if (buro.getGrade() > this->getReqGrade())
		throw GradeTooLowException();
	setSign(true);
}

std::string Form::getName()
{
	return this -> name;
}

int Form::getReqGrade()
{
	return this -> req_grade;
}

int Form::getReqExec()
{
	return this -> req_exec;
}

int Form::getSign()
{
	return this -> sign;
}

void Form::setSign(int sign)
{
	this -> sign = sign;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Error: Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Error: Grade is too low!";
}

std::ostream& operator<<(std::ostream& cout, Form& form)
{
	cout << "Name: " << form.getName() << std::endl
	<< "Grade to Sign: " << form.getReqGrade() << std::endl
	<< "Grade to Execute: " << form.getReqExec() << std::endl
	<< "Signed status: " << form.getSign() << std::endl;
	return(cout);
}
