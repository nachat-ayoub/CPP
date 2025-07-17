#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"
#include <iomanip>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		len;
	public:
		PhoneBook();
		
		int		getContactsLen() const;
		const Contact *getContacts() const;

		void	updateContactsLen();
		void	setContactsLen(int newLen);
		void	setContact(int index, Contact contact);

		void	addContact();
		void	searchContact();

		void	readLine(std::string val);
		int		validate_index();
		void	printCell(const std::string& str) const;
		void	printContact(Contact contact, int index) const;

};

#endif