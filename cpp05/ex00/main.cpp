#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat buro("KK", 0);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	Bureaucrat buro2("Izzet", 75);
	std::cout << buro2.getName() << " " << buro2.getGrade() << std::endl;
	while (buro2.getGrade() > 1)
		buro2.increaseScore();
	std::cout << buro2.getName() << " " << buro2.getGrade() << std::endl;
	while (buro2.getGrade() < 150)
		buro2.decreaseScore();
	std::cout << buro2.getName() << " " << buro2.getGrade() << std::endl;





	return (0);
}
