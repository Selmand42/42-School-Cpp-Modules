#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data
{
	public:
		Data();
		Data(const Data&);
		Data& operator=(const Data&);
		~Data();

		int int_data;
		std::string str_data;

};


#endif
