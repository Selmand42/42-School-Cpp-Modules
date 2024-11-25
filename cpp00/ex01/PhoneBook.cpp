#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->i = 0;
	this->cur = 0;
}

void PhoneBook::setI(int i)
{
	this->i = i;
}

int PhoneBook::getI()
{
	return this->i;
}

void PhoneBook::setCur(int i)
{
	this->cur = i;
}

int PhoneBook::getCur()
{
	return this->cur;
}

void PhoneBook::add()
{
	std::string	name;
	std::string	surname;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	number;

	std::cout << "Name of new person:";
	std::getline(std::cin, name);
	std::cout << "Surname of new person:";
	std::getline(std::cin, surname);
	std::cout << "Nickname of new person:";
	std::getline(std::cin, nickname);
	std::cout << "Dark secret of new person:";
	std::getline(std::cin, darkest_secret);
	std::cout << "Phone number of new person:";
	std::getline(std::cin, number);
	Contact con = Contact(name, surname, nickname, darkest_secret, number);

	int i = getI();
	this->contact[i % 8] = con;
	if (cur < 8)
		setCur(i + 1);
	setI(i + 1);
}

void PhoneBook::search()
{
	int index;

	if (getCur() == 0)
	{
		std::cout << "There is not any person in this PhoneBook!" << std::endl;
		return ;
	}
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int j = 0; j < getCur(); j++)
		print_person(j + 1, this->contact[j]);
	std::cout << "Enter the index number: ";
	std::cin >> index;
	if (std::cin.fail() || index < 1 || index > getCur())
	{
		std::cout << "Please select an avaliable index!!!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	std::cout << this->contact[index - 1].getName() << std::endl;
	std::cout << this->contact[index - 1].getSurname() << std::endl;
	std::cout << this->contact[index - 1].getNickname() << std::endl;
	std::cout << this->contact[index - 1].getNumber() << std::endl;
	std::cout << this->contact[index - 1].getSecret() << std::endl;
	std::cin.ignore();
}

void	print_space(int index)
{
	for (int i = 0; i < index; i++)
		std::cout << " ";
}

void	print_info(std::string info)
{
	print_space(10 - info.length());
	std::cout << info.substr(0, 9);
	if (info.length() > 10)
		std::cout << ".";
	else if (info.length() == 10)
		std::cout << info[9];
}

void print_person(int index, Contact person)
{
	std::cout << "         " << index << "|";
	print_info(person.getName());
	std::cout << "|";
	print_info(person.getSurname());
	std::cout << "|";
	print_info(person.getNickname());
	std::cout << std::endl;
}

