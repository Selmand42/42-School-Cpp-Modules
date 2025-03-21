#include "iter.hpp"

template <typename T>
void printElement(const T &elem)
{
	std::cout << elem << " ";
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	double arrD[] = {1.1, 2.2, 3, 4.4, 5.5};

	std::cout << "Array elements (int): ";
	iter(arr, 5, printElement<int>);
	std::cout << std::endl;

	std::cout << "Array elements (double): ";
	iter(arrD, 5, printElement<double>);
	std::cout << std::endl;

	return 0;
}
