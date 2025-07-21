#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon weapon;
	public:
		HumanA(const std::string& newName, class Weapon newWeapon);
		const std::string& getType() const;
		void attack();
};
