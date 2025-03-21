#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span& other) : N(other.N), numbers(other.numbers) {}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		N = other.N;
		numbers = other.numbers;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (numbers.size() >= N)
		throw std::overflow_error("Span is already full!");
	numbers.push_back(num);
}

int Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find a span!");
	std::vector<int> sortedNumbers = numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedNumbers.size(); ++i)
		minSpan = std::min(minSpan, sortedNumbers[i] - sortedNumbers[i - 1]);
	return minSpan;
}

int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find a span!");
	std::vector<int>::iterator minIt = std::min_element(numbers.begin(), numbers.end());
	std::vector<int>::iterator maxIt = std::max_element(numbers.begin(), numbers.end());
	return *maxIt - *minIt;
}
