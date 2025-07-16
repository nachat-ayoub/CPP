#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phoneBook;
	std::string	input;

	while (true)
	{
		std::cout << "type a command ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD") {
			phoneBook.addContact();
		} else if (input == "SEARCH") {
			phoneBook.searchContact();
		} else if (input == "EXIT")
			break ;
	}
}