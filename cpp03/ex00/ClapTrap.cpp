#include "ClapTrap.hpp"

int	ClapTrap::getHitPoints(void) const
{
	return this -> hitPoints;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return this -> energyPoints;
}

int	ClapTrap::getAttackDamage(void) const
{
	return this -> attackDamage;
}

std::string ClapTrap::getName(void) const
{
	return this-> name;
}

ClapTrap::ClapTrap(): name("Default Izzet"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called\n";
    *this = other; 
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.getName();
		this->hitPoints = copy.getHitPoints();
		this->attackDamage = copy.getAttackDamage();
		this->energyPoints = copy.getEnergyPoints();
	}
		
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " has no energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Remaining HP: " << hitPoints << "" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " repairs itself for " << amount << " points! Remaining HP: " << hitPoints
				<< ", Energy: " << energyPoints << "" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " cannot repair due to lack of energy or health!" << std::endl;
}
