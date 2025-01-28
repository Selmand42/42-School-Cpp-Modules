#include "Zombie.hpp"

int main()
{
	Zombie *izzet = newZombie("izzet");
	Zombie selman("selman");
	izzet->announce();
	delete izzet;
	selman.announce();
	randomChump("random izzet");
}
