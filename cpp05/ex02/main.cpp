#include <iostream>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"


int main()
{

	ShrubberyCreationForm S1("S1");
	ShrubberyCreationForm S2("S2");

	RobotomyRequestForm R("R");
	PresidentialPardonForm P("P");


	std::cout << std::endl << S1 << std::endl;
	std::cout << S2 << std::endl;
	std::cout << R << std::endl;
	std::cout << P << std::endl;


	std::cout << std::endl << "----------Poor Bureaucrat------------" << std::endl;
	Bureaucrat b1("Poor man", 150);

	b1.signForm(S1);
	b1.executeForm(S1);
	std::cout << std::endl;
	b1.signForm(S1);
	b1.executeForm(R);
	std::cout << std::endl;
	b1.signForm(S1);
	b1.executeForm(P);

	std::cout << std::endl << "----------Ordinary Bureaucrat------------" << std::endl;
	Bureaucrat b2("Ordinary man", 42);

	b2.executeForm(S1);
	std::cout << std::endl;
	b2.executeForm(R);
	std::cout << std::endl;
	b2.executeForm(P);

	std::cout << std::endl << "----------Rich Bureaucrat------------" << std::endl;
	Bureaucrat b3("Rich man", 1);

	b3.signForm(S2);
	b3.executeForm(S2);
	std::cout << std::endl;
	b3.signForm(R);
	b3.executeForm(R);
	std::cout << std::endl;
	b3.executeForm(P);

	return (0);
}
