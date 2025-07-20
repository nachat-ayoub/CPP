#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		len;
		int		idx;
	public:
		PhoneBook();
		
		const Contact *getContacts() const;
		int		getContactsLen() const;
		int		getIdx() const;

		void	updateContactsLen();
		void	setContactsLen(int newLen);
		void	setContact(int index, Contact contact);
		void	setIdx(int newIndex);

		void	addContact();
		void	searchContact();

		void	readLine(std::string& val);
		int		validate_index();
		void	printCell(const std::string& str) const;
		void	printContact(Contact contact, int index) const;
};

#endif