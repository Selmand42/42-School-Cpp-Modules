#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "--- Creating ClapTrap ---\n";
    ClapTrap claptrap("Selman");
    claptrap.attack("Izzet");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);

    std::cout << "\n--- Creating ScavTrap ---\n";
    ScavTrap scavtrap("Izzet");
    scavtrap.attack("Selman");
    scavtrap.takeDamage(40);
    scavtrap.beRepaired(20);
    scavtrap.guardGate();

    std::cout << "\n--- Creating FragTrap ---\n";
    FragTrap fragtrap("Dogu");
    fragtrap.attack("Selman ve Izzet");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(30);
    fragtrap.highFivesGuys();

    std::cout << "\n--- Destruction starts ---\n";
    return 0;
}
