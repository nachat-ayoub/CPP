#include "Zombie.hpp"
#include "Zombie.h"

int main ()
{
	int N = 5;
	Zombie *zombie = zombieHorde(N, "ZombiesHorde");
	for (int i=0; i < N; i++) {
		zombie[i].announce();
	}
	delete[] zombie;
}