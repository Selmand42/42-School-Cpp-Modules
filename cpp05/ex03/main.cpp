#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Intern intern;

	try
	{
		intern.makeForm("There is nothing sth like this!", "???");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}



	AForm *S1 = intern.makeForm("shrubbery creation", "S1");
	AForm *S2 = intern.makeForm("shrubbery creation", "S2");
	AForm *R = intern.makeForm("robotomy request", "R");
	AForm *P = intern.makeForm("presidential pardon", "P");




	std::cout << std::endl << *S1 << std::endl;
	std::cout << *S2 << std::endl;
	std::cout << *R << std::endl;
	std::cout << *P << std::endl;


	std::cout << std::endl << "----------Poor Bureaucrat------------" << std::endl;
	Bureaucrat b1("Poor man", 150);

	b1.signForm(*S1);
	b1.executeForm(*S1);
	std::cout << std::endl;
	b1.signForm(*S1);
	b1.executeForm(*R);
	std::cout << std::endl;
	b1.signForm(*S1);
	b1.executeForm(*P);

	std::cout << std::endl << "----------Ordinary Bureaucrat------------" << std::endl;
	Bureaucrat b2("Ordinary man", 42);

	b2.executeForm(*S1);
	std::cout << std::endl;
	b2.executeForm(*R);
	std::cout << std::endl;
	b2.executeForm(*P);

	std::cout << std::endl << "----------Rich Bureaucrat------------" << std::endl;
	Bureaucrat b3("Rich man", 1);

	b3.signForm(*S2);
	b3.executeForm(*S2);
	std::cout << std::endl;
	b3.signForm(*R);
	b3.executeForm(*R);
	std::cout << std::endl;
	b3.executeForm(*P);


	delete S1;
	delete S2;
	delete R;
	delete P;
	return (0);
}
