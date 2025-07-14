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
