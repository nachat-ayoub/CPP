#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

int PhoneBook::getContactsLen() const {
	return len;
}
const Contact *PhoneBook::getContacts() const {
	return contacts;
}

// int		getContactsLen() const;
// Contact *getContacts() const;

// void	updateContactsLen();
// Contact *setContact(int index);