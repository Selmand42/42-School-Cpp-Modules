#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span
{
	private:
		unsigned int N;
		std::vector<int> numbers;

	public:
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();

		template <typename Iterator>
		void addNumbers(Iterator begin, Iterator end)
		{
			if (std::distance(begin, end) > static_cast<int>(N - numbers.size()))
				throw std::overflow_error("Not enough space to add all numbers!");
			numbers.insert(numbers.end(), begin, end);
		}
};

#endif
