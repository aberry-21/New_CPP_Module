//
// Created by Aaron Berry on 8/29/21.
//

#ifndef PHONEBOOK__PHONEBOOK_HPP_
#define PHONEBOOK__PHONEBOOK_HPP_

#include <string>
#include "Contact.hpp"

static const int MAX_COUNT_CONTACT(8);

class PhoneBook
{
 public:
	PhoneBook();
	virtual ~PhoneBook();

	int AddContact();
	int SearchContact() const;
 private:
	void CallContactAddField(int contactIndex, int fieldIndex,
		const std::string& data);
	void PrintInfoAboutContact(int index) const;

	typedef void (Contact::*setterContactField)(const std::string& data);
	typedef const std::string& (Contact::*getterContactField)() const;

	int m_size;
	Contact m_contacts[MAX_COUNT_CONTACT];

	static const char m_message[12][32];
	static const setterContactField m_setterFunc[12];
	static const getterContactField m_getterFunc[12];
};

#endif //PHONEBOOK__PHONEBOOK_HPP_
