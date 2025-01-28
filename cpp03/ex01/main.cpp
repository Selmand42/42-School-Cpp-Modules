#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("Selman");
    claptrap.attack("Izzet");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);

    std::cout << "\n--- Creating a ScavTrap ---\n";
    ScavTrap scavtrap("Izzet");
    scavtrap.attack("Selman");
    scavtrap.takeDamage(40);
    scavtrap.beRepaired(20);
    scavtrap.guardGate();

    std::cout << "\n--- Destruction starts ---\n";
    return 0;
}
