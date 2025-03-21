#include <iostream>
#include <cstdlib>
#include "Array.hpp"

int main()
{
    try
    {

        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        Array<int> intArray(5);
        std::cout << "Created an integer array of size: " << intArray.size() << std::endl;

        for (size_t i = 0; i < intArray.size(); ++i)
        {
            intArray[i] = static_cast<int>(i * 10);
        }

        std::cout << "Array elements: ";
        for (size_t i = 0; i < intArray.size(); ++i)
        {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        Array<int> copiedArray = intArray;
        std::cout << "Copied array elements: ";
        for (size_t i = 0; i < copiedArray.size(); ++i)
        {
            std::cout << copiedArray[i] << " ";
        }
        std::cout << std::endl;

        const Array<int> constArray = intArray;
        std::cout << "Accessing const array elements: ";
        for (size_t i = 0; i < constArray.size(); ++i)
        {
            std::cout << constArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Trying to access an out-of-bounds index..." << std::endl;
        std::cout << intArray[10] << std::endl;

    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}