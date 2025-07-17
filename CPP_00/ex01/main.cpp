#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phoneBook;
	std::string	input;

	while (true)
	{
		std::cout << "Type a command ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, input)) {
			std::cout << std::endl << "EOF detected. Exiting.\n" << std::endl;
			exit(1);
		}
		if (input == "ADD") {
			phoneBook.addContact();
		} else if (input == "SEARCH") {
			phoneBook.searchContact();
		} else if (input == "EXIT")
			break ;
	}
}