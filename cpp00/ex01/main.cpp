#include "PhoneBook.hpp"

int main()
{
	PhoneBook	book;
	std::string	input;

	while (31)
	{
		std::cout << "1 - ADD" <<  std::endl;
		std::cout << "2 - SEARCH" << std::endl;
		std::cout << "3 - EXIT" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		else if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			book.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Please enter a valid input!" << std::endl;
	}
	return (0);
}
