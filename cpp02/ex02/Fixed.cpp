#include "Fixed.hpp"

Fixed::Fixed()
{
	setRawBits(0);
}

Fixed::Fixed(Fixed const & copy)
{
	if (this != &copy)
		*this = copy;
}

Fixed & Fixed::operator=(const Fixed & other) {
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

}

Fixed::Fixed(const int value)
{
	this->raw = value << fb;
}

Fixed::Fixed(const float value)
{
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

bool Fixed::operator>(const Fixed& fixed) const
{
	return this->raw > fixed.raw;
}

bool Fixed::operator<(const Fixed& fixed) const
{
	return this->raw < fixed.raw;
}

bool Fixed::operator>=(const Fixed& fixed) const
{
	return this->raw >= fixed.raw;
}

bool Fixed::operator<=(const Fixed& fixed) const
{
	return this->raw <= fixed.raw;
}

bool Fixed::operator==(const Fixed& fixed) const
{
	return this->raw == fixed.raw;
}

bool Fixed::operator!=(const Fixed& fixed) const
{
	return this->raw != fixed.raw;
}

Fixed Fixed::operator+(const Fixed& fixed) const
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed& fixed) const
{
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed& fixed) const
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed& fixed) const
{
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed& Fixed::operator++()
{
	this->raw++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->raw++;
	return temp;
}

Fixed& Fixed::operator--()
{
	this->raw--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->raw--;
	return temp;
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}
const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
