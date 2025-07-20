#include "Zombie.hpp"
#include "Zombie.h"

int main (int ac, char **av)
{
	(void)ac;
	Zombie *zombie = newZombie(av[1]);
	(void)zombie;
	randomChump(av[1]);
}