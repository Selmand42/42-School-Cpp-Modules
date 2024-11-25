
#include "Contact.hpp"

Contact::Contact(std::string name, std::string surname, \
		std::string nickname, std::string darkest_secret, std::string number)
{
	setName(name);
	setSurname(surname);
	setNickname(nickname);
	setSecret(darkest_secret);
	setNumber(number);
}

Contact::Contact() {};

void Contact::setName(std::string name)
{
	this->name = name;
}

void Contact::setSurname(std::string surname)
{
	this->surname = surname;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setNumber(std::string number)
{
	this->number = number;
}

void Contact::setSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string Contact::getName()
{
	return (this->name);
}

std::string Contact::getSurname()
{
	return (this->surname);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getNumber()
{
	return (this->number);
}

std::string Contact::getSecret()
{
	return (this->darkest_secret);
}
