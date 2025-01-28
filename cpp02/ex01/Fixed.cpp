#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Fixed & Fixed::operator=(const Fixed & other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->raw = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	return (this->raw);
}

void	Fixed::setRawBits(const int raw)
{
	this->raw = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = value << fb;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw = roundf(value * (1 << fb));
}

float	Fixed::toFloat() const
{
	return (float)raw / (1 << fb);
}

int	Fixed::toInt() const
{
	return raw >> fb;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
