#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	const Contact *contact = phoneBook.getContacts();
	std::cout << "FirstName: " << contact[0].getFirstName() << std::endl;
}