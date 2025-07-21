#include "HumanA.hpp"

HumanA::HumanA(const std::string& newName, class Weapon newWeapon) {
	name = newName;
	weapon = newWeapon;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
