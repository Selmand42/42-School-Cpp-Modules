#include "Data.hpp"

Data::Data() : int_data(10), str_data("Izzet") {}
Data::Data(const Data  &copy)
{
	if (this != &copy)
		*this = copy;
}
Data& Data::operator=(const Data& copy)
{
	if (this == &copy)
	{
		this -> int_data = copy.int_data;
		this -> str_data = copy.str_data;
	}
	return *this;
}
Data::~Data() {}

