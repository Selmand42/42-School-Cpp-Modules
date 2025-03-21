#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("name"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int score) : name(name)
{
	if (score < 1)
		throw GradeTooHighException();
	if (score > 150)
		throw GradeTooLowException();
	setGrade(score);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade()
{
	return this -> grade;
}

void Bureaucrat::setGrade(int score)
{
	this -> grade = score;
}

void Bureaucrat::increaseScore()
{
	if (this -> grade == 1)
		throw GradeTooHighException();
	setGrade(this -> grade - 1);
}

void Bureaucrat::decreaseScore()
{
	if (this -> grade == 150)
		throw GradeTooLowException();
	setGrade(this -> grade + 1);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: Grade is too low!";
}

std::string Bureaucrat::getName()
{
	return this -> name;
}

std::ostream& operator<<(std::ostream& cout, Bureaucrat& buro)
{
	cout << buro.getName() << ", bureaucrat grade " << buro.getGrade() << "." << std::endl;
	return (cout);
}
