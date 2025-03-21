#include "Serializer.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

int main() {

    Data original;


    Data* originalPtr = &original;

    uintptr_t raw = Serializer::serialize(originalPtr);

    Data* deserializedPtr = Serializer::deserialize(raw);

    std::cout << "Original Pointer: " << originalPtr << std::endl;
    std::cout << "Deserialized Pointer: " << deserializedPtr << std::endl;

    std::cout << "Original Data: ID = " << originalPtr->int_data << ", Name = " << originalPtr->str_data << std::endl;
    std::cout << "Deserialized Data: ID = " << deserializedPtr->int_data << ", Name = " << deserializedPtr->str_data << std::endl;

    return 0;
}
