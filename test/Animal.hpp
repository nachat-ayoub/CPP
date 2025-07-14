#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
private:
    std::string name;

public:
    Animal(); // Default constructor
    Animal(const std::string& name); // Parameterized constructor

    void speak() const;
};

#endif
