#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::it it = mstack.begin();
	MutantStack<int>::it ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "Testing empty MutantStack:" << std::endl;
    MutantStack<int> emptyStack;
    std::cout << "Empty stack size: " << emptyStack.size() << std::endl;

    std::cout << "Pushing and popping multiple values:" << std::endl;
    emptyStack.push(42);
    emptyStack.push(100);
    emptyStack.push(-7);
    std::cout << "Top element after pushes: " << emptyStack.top() << std::endl;
    emptyStack.pop();
    std::cout << "Top element after one pop: " << emptyStack.top() << std::endl;

    std::cout << "Final stack elements:" << std::endl;
    MutantStack<int>::it it2 = emptyStack.begin();
    MutantStack<int>::it ite2 = emptyStack.end();
    while (it2 != ite2) {
        std::cout << *it2 << std::endl;
        ++it2;
    }
	return 0;
}
