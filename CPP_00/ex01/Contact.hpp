#ifndef CONTACT_HPP
#define CONTACT_HPP
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

		const std::string getFirstName() const;
		const std::string getLastName() const;
		const std::string getNickName() const;
		const std::string getPhoneNumber() const;
		const std::string getDarkestSecret() const;

		void setFirstName(const std::string& firstName);
		void setLastName(const std::string& lastName);
		void setNickName(const std::string& nickName);
		void setPhoneNumber(const std::string& phoneNumber);
		void setDarkestSecret(const std::string& darkestSecret);
};

#endif