#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "./Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		len;
	public:
		PhoneBook();
		Contact *getContacts() const;
};

#endif