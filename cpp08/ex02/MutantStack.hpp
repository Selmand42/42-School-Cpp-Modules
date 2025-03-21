#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator it;
		typedef typename std::deque<T>::const_iterator cit;

		MutantStack() {}
		MutantStack(const MutantStack& other) : std::stack<T>(other) {}
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return *this;
		}
		~MutantStack() {}

		it begin()
		{
			return this->c.begin();
		}
		it end()
		{
			return this->c.end();
		}
		cit begin() const
		{
			return this->c.begin();
		}
		cit end() const
		{
			return this->c.end();
		}
};

#endif
