#pragma once

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void setName(const std::string& newName);
		void announce(void);
};
