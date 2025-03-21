#include "easyfind.hpp"

int main()
{
	std::vector<int> vec(5);
	for (int i = 1; i < 5; i++)
		vec.push_back(i);

	std::list<int> lst(5);
	std::list<int>::iterator it = lst.begin();
	*it++ = 10; *it++ = 20; *it++ = 30; *it++ = 40; *it++ = 50;


	std::cout << "Found in vector: " << easyfind(vec, 3) << std::endl;

	std::cout << "Found in list: " << easyfind(lst, 40) << std::endl;

	std::cout << "Couldn't found in list: " << easyfind(vec, 100) << std::endl;
	return 0;
}
