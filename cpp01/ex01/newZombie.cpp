#include "Zombie.hpp"

Zombie* newZombie( std::string Name )
{
	return new Zombie(Name);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
