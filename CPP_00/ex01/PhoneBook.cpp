#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() {
	len = 0;
	idx = 0;
}

int PhoneBook::getContactsLen() const {
	return len;
}
int PhoneBook::getIdx() const {
	return idx;
}

const Contact *PhoneBook::getContacts() const {
	return contacts;
}

void	PhoneBook::setContactsLen(int newLen) {
	len = newLen;
}
void	PhoneBook::setIdx(int newIndex) {
	idx = newIndex;
}
void	PhoneBook::updateContactsLen() {
	if (len < 8)
		len++;
	idx = (idx + 1) % 8;
}

void	PhoneBook::setContact(int i, Contact contact) {
	contacts[i] = contact;
}


void	PhoneBook::readLine(std::string& val) {
	if (!std::getline(std::cin, val))
	{
		std::cout << std::endl << "EOF detected. Exiting.\n" << std::endl;
		exit(1);
	}
}

void	PhoneBook::addContact() {
	Contact contact;
	std::string val;

	std::cout << "Type firstname: " << std::endl;
	readLine(val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl << std::endl;
		return ;
	}
	contact.setFirstName(val);

	std::cout << "Type lastname: " << std::endl;
	readLine(val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	contact.setLastName(val);

	std::cout << "Type nickname: " << std::endl;
	readLine(val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	contact.setNickName(val);

	std::cout << "Type phone number: " << std::endl;
	readLine(val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	contact.setPhoneNumber(val);

	std::cout << "Type your darkest secret: " << std::endl;
	readLine(val);
	if (!contact.validate_str(val))
	{
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	contact.setDarkestSecret(val);

	setContact(getIdx(), contact);
	updateContactsLen();
}

int		PhoneBook::validate_index() {
	std::string	val;
	int			index;

	readLine(val);
	if (val.length() != 1 || !std::isdigit(static_cast<unsigned char>(val[0])))
		return (-1);
	index = val[0] - '0';
	if (index >= 0 && index <= 7)
		return (index);
	else
		return (-1);
}

void PhoneBook::printCell(const std::string& str) const {
	std::string printed_str;
	if (str.length() > 10)
		printed_str = str.substr(0, 9) + ".";
	else 
		printed_str = str;
	std::cout << std::setw(10) << printed_str << "|";
}


void PhoneBook::printContact(Contact contact, int index) const {
	printCell(std::to_string(index));
	printCell(contact.getFirstName());
	printCell(contact.getLastName());
	printCell(contact.getNickName());
}


void	PhoneBook::searchContact() {
	const Contact *contacts = getContacts();
	printCell("Index");
	printCell("FirstName");
	printCell("LastName");
	printCell("NickName");
	std::cout <<  std::endl;

	int len = getContactsLen();
	if (len > 0)
	{
		for (int i = 0; i < len; i++) {
			printContact(contacts[i], i);
			std::cout << std::endl;
		}
	}

	std::cout << std::endl << "Enter an index: ";
	int index = validate_index();
	if (index == -1) {
		std::cout << "==============[ Invalid Index ]===========" << std::endl << std::endl;
		return ;
	}

	if (index < len) {
		std::cout << std::endl;
		contacts[index].print();
		std::cout << std::endl;
	}
	else
		std::cout << "==========[ Contact not found ]==========" << std::endl << std::endl;
}
