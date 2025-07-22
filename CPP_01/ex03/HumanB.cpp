#include "HumanB.hpp"

HumanB::HumanB(const std::string& newName): name(newName), weapon(nullptr) {}

void	HumanB::setWeapon(Weapon& newWeapon) {
	weapon = &newWeapon;
}


void HumanB::attack() {
	if (!weapon)
	{
		std::cout << name << " cannot attack without a weapon\n";	
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << "\n";
}
