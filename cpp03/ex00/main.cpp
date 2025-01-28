#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Selman");

	claptrap.attack("Izzet");
	claptrap.takeDamage(3);
	claptrap.beRepaired(5);

	return 0;
}
