#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <string>
#include <iostream>
#include <cctype>
#include "Contact.hpp"

void	print_person(int index, Contact person);
void	print_space(int index);

class PhoneBook{
	private:
		int	i;
		int	cur;
	public:
		PhoneBook();
		Contact contact[8];

		void	setI(int i);
		int		getI();
		void	setCur(int i);
		int		getCur();
		void	add();
		void	search();
};

#endif
