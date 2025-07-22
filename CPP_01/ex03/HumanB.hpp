#pragma once

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(const std::string& newName);
		void setWeapon(Weapon& newWeapon);
		void attack();
};
