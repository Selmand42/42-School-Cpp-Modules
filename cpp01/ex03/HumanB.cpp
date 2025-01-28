#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->weapon = 0;
	this->name = name;
}

void HumanB::attack()
{
	if (!weapon)
		std::cout << this->name << " his hands. " << std::endl;
	else
		std::cout << this->name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
