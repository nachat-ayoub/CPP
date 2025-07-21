#include <iostream>

int main ()
{
	std::string msg = "HI THIS IS BRAIN";
	std::string* stringPTR = &msg;
	std::string& stringREF = msg;

	std::cout << "String Address: " << &msg << "\n";
	std::cout << "Address held by stringPTR: " << stringPTR << "\n";
	std::cout << "Address held by stringREF: " << &stringREF << "\n";


	std::cout << "\nString value: " << msg << "\n";
	std::cout << "stringPTR value: " << *stringPTR << "\n";
	std::cout << "stringREF value: " << stringREF << "\n";
}
