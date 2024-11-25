#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <cctype>


class Contact {
	private:
		std::string	name;
		std::string	surname;
		std::string	nickname;
		std::string	darkest_secret;
		std::string number;
	public:
		Contact(std::string name, std::string surname, \
			std::string nickname, std::string darkest_secret, std::string number);
		Contact();
		void setName(std::string name);
		void setSurname(std::string surname);
		void setNickname(std::string nickname);
		void setNumber(std::string number);
		void setSecret(std::string darkest_secret);
		std::string getName();
		std::string getSurname();
		std::string getNickname();
		std::string getNumber();
		std::string getSecret();

};


#endif
