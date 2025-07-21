#include "Zombie.hpp"
#include "Zombie.h"

int main ()
{
	Zombie *zombie = newZombie("ZombieFromHeap");
	delete zombie;
	randomChump("ZombieFromStack");
}