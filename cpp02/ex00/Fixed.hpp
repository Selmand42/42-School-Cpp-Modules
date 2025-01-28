#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int raw;
		static const int fb = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif
