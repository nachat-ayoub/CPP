#include "Zombie.hpp"

Zombie::Zombie(std::string initial_name)
{
	name = initial_name;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
