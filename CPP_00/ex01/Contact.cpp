#include "Contact.hpp"

Contact::Contact() {}

const std::string Contact::getFirstName() const {
	return firstName;
}
const std::string Contact::getLastName() const {
	return lastName;
}
const std::string Contact::getNickName() const {
	return nickName;
}
const std::string Contact::getPhoneNumber() const {
	return phoneNumber;
}
const std::string Contact::getDarkestSecret() const {
	return darkestSecret;
}

void Contact::setFirstName(const std::string& newFirstName) {
	firstName = newFirstName;
}
void Contact::setLastName(const std::string& newLastName) {
	lastName = newLastName;
}
void Contact::setNickName(const std::string& newNickName) {
	nickName = newNickName;
}
void Contact::setPhoneNumber(const std::string& newPhoneNumber) {
	phoneNumber = newPhoneNumber;
}
void Contact::setDarkestSecret(const std::string& newDarkestSecret) {
	darkestSecret = newDarkestSecret;
}


bool	Contact::validate_str(const std::string& str) const
{
	bool hasSpacesOnly = true;

	if (str.empty())
		return (false);
	for (size_t i = 0; i < str.length(); ++i) {
		unsigned char c = static_cast<unsigned char>(str[i]);
		if (!std::isprint(c))
			return (false);
		if (!std::isspace(c))
			hasSpacesOnly = false;
	}
	if (hasSpacesOnly)
		return (false);
	return (true);
}


void Contact::print() const {
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickName << std::endl;
	std::cout << phoneNumber << std::endl;
	std::cout << darkestSecret << std::endl;
}