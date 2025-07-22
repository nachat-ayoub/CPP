#pragma once

#include <iostream>

class Weapon {
	private:
		std::string type; 
	public:
		Weapon(const std::string& newType);
		const std::string& getType() const;
		void setType(const std::string& newType);
};
