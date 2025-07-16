#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	len = 0;
}

int PhoneBook::getContactsLen() const {
	return len;
}

const Contact *PhoneBook::getContacts() const {
	return contacts;
}

void	PhoneBook::setContactsLen(int newLen) {
	len = newLen;
}
void	PhoneBook::updateContactsLen() {
	len = (len + 1) % 8;
}

void	PhoneBook::setContact(int i, Contact contact) {
	contacts[i] = contact;
}

void	PhoneBook::addContact() {
	Contact contact;
	std::string val;

	std::cout << "Type firstname: " << std::endl;
	std::getline(std::cin, val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	contact.setFirstName(val);

	std::cout << "Type lastname: " << std::endl;
	std::getline(std::cin, val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	contact.setLastName(val);

	std::cout << "Type nickname: " << std::endl;
	std::getline(std::cin, val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	contact.setNickName(val);

	std::cout << "Type phone number: " << std::endl;
	std::getline(std::cin, val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	contact.setPhoneNumber(val);

	std::cout << "Type your darkest secret: " << std::endl;
	std::getline(std::cin, val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	contact.setDarkestSecret(val);

	contact.print();
}

void	PhoneBook::searchContact(int index) {
	(void)index;
}