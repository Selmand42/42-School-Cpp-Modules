#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form F("Shy Form", 999, 999);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Form F("Crazy Form", 0, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    Form f1("Easy Form", 150, 150);
    Form f2("Normal Form", 42, 42);
    Form f3("FForm", 1, 1);

    std::cout << std::endl << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl;


    std::cout << std::endl << "----------Poor Bureaucrat------------" << std::endl;
    Bureaucrat b1("Poor man", 150);

    b1.signForm(f1);
    b1.signForm(f2);
    b1.signForm(f3);

    std::cout << std::endl << "----------Ordinary Bureaucrat------------" << std::endl;
    Bureaucrat b2("Ordinary man", 42);

    b2.signForm(f1);
    b2.signForm(f2);
    b2.signForm(f3);

    std::cout << std::endl << "----------Rich Bureaucrat------------" << std::endl;
    Bureaucrat b3("Rich man", 1);

    b3.signForm(f1);
    b3.signForm(f2);
    b3.signForm(f3);

    std::cout << std::endl << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl;

    return 0;
}
