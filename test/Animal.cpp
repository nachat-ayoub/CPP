#include "Animal.hpp"
#include <iostream>

// Default constructor definition
Animal::Animal() {
    name = "Unnamed";
    std::cout << "Animal created (default)" << std::endl;
}

// Parameterized constructor definition
Animal::Animal(const std::string& name) {
    this->name = name;
    std::cout << "Animal created: " << name << std::endl;
}

// Method implementation
void Animal::speak() const {
    std::cout << name << " says hello!" << std::endl;
}




int main() {
    Animal animals[3];
    return 0;
}
