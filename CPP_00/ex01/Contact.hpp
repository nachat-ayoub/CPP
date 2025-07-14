#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "./Contact.hpp"
#include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		Contact(
			const std::string& firstName,
			const std::string& lastName,
			const std::string& nickName,
			const std::string& phoneNumber,
			const std::string& darkestSecret
		);
};

// first name, last name, nickname, phone number, and darkest secret

#endif