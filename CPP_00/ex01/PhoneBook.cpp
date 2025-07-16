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

	// contact.print();
	setContact(getContactsLen(), contact);
	updateContactsLen();
}

int		PhoneBook::validate_index()
{
	std::string	val;
	int			index;

	std::getline(std::cin, val);
	if (val.length() != 1 || !std::isdigit(static_cast<unsigned char>(val[0])))
		return (-1);
	index = val[0] - '0';
	if (index >= 0 && index <= 7)
		return (index);
	else
		return (-1);
}

void	PhoneBook::searchContact() {

	std::cout << "[x] Type an index to search for the contact!" << std::endl;
	int index = validate_index();

	if (index == -1)
	{
		std::cout << "==============[ Invalid Index ]===========" << std::endl;
		return ;
	}

	const Contact *contacts = getContacts();
	int len = getContactsLen();
	if (len == 0)
		std::cout << "==============[ No Contacts ]===========" << std::endl;

	for (int i = 0; i < len; i++) {
		std::cout << "============================================";
		contacts[i].print();
		std::cout << "============================================" << std::endl << std::endl;
	}

	if (index < len)
	{
		std::cout << "--------------------------------------------";
		contacts[index].print();
		std::cout << "--------------------------------------------" << std::endl << std::endl;
	}
	else
		std::cout << "==============[ Contact not found ]===========" << std::endl;
}