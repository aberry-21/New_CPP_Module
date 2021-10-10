//
// Created by Aaron Berry on 8/29/21.
//

#include "includes/PhoneBook.hpp"

#include <iostream>
#include <iomanip>
#include <string>

char const PhoneBook::m_message[12][32] =
	{ "first_name: ",
	  "last_name: ", "nickname: ", "login: ", "postal_address: ",
	  "email_address: ", "phone_number: ", "birthday_date: ",
	  "favorite: ", "meal: ", "underwear_color: ",
	  "darkest_secret: " };

PhoneBook::setterContactField const PhoneBook::m_setterFunc[12] =
	{ &Contact::SetFirstName, &Contact::SetLastName, &Contact::SetNickname,
	  &Contact::SetLogin, &Contact::SetPostalAddress, &Contact::SetEmailAddress,
	  &Contact::SetPhoneNumber, &Contact::SetBirthdayDate,
	  &Contact::SetFavorite,
	  &Contact::SetMeal, &Contact::SetUnderwearColor,
	  &Contact::SetDarkestSecret };

PhoneBook::getterContactField const PhoneBook::m_getterFunc[12] =
	{ &Contact::GetFirstName, &Contact::GetLastName, &Contact::GetNickname,
	  &Contact::GetLogin, &Contact::GetPostalAddress, &Contact::GetEmailAddress,
	  &Contact::GetPhoneNumber, &Contact::GetBirthdayDate,
	  &Contact::GetFavorite,
	  &Contact::GetMeal, &Contact::GetUnderwearColor,
	  &Contact::GetDarkestSecret };

PhoneBook::PhoneBook()
{
	m_size = 0;
	for (int i = 0; i < 8; ++i)
	{
		m_contacts[i].SetIndex(i + 1);
	}
}
PhoneBook::~PhoneBook()
{
}
void PhoneBook::CallContactAddField(int contactIndex, int fieldIndex,
	const std::string& data)
{
	(m_contacts[contactIndex].*m_setterFunc[fieldIndex])(data);
}
int PhoneBook::AddContact()
{
	if (m_size >= MAX_COUNT_CONTACT)
	{
		std::cout << "Phonebook is full" << std::endl;
		return 0;
	}
	++m_size;
	std::string input_data;
	for (int i = 0; i < 12; ++i)
	{
		std::cout << m_message[i];
		if (!getline(std::cin, input_data))
		{
			return 1;
		}
		CallContactAddField(m_size - 1, i, input_data);
	}
	return 0;
}
void PhoneBook::PrintInfoAboutContact(int index) const
{
	for (int i = 0; i < 12; ++i)
	{
		std::cout << m_message[i]
				  << (m_contacts[index].*m_getterFunc[i])() << std::endl;
	}
}
void PrintHeaderListContact()
{
	std::cout << std::setw(11);
	std::cout << "index|";
	std::cout << std::setw(11);
	std::cout << "first name|";
	std::cout << std::setw(11);
	std::cout << "last name|";
	std::cout << std::setw(12);
	std::cout << "nickname|\n";
}
void PrintInfoListContact(const std::string& data)
{
	std::string outString(data);
	if (outString.length() > 10)
	{
		outString.resize(10);
		outString[9] = '.';
	}
	outString.insert(outString.length(), 1, '|');
	std::cout << std::setw(11);
	std::cout << outString;
}
bool IsNumber(const std::string& str)
{
	size_t len = str.length();
	for (size_t i = 0; i < len; ++i)
	{
		if (std::isdigit(str[i]) == 0)
		{
			return false;
		}
	}
	return true;
}
int PhoneBook::SearchContact() const
{
	PrintHeaderListContact();
	for (int i = 0; i < m_size; ++i)
	{
		PrintInfoListContact(std::to_string(m_contacts[i].GetIndex()));
		PrintInfoListContact(m_contacts[i].GetFirstName());
		PrintInfoListContact(m_contacts[i].GetLastName());
		PrintInfoListContact(m_contacts[i].GetNickname());
		std::cout << std::endl;
	}
	std::string inputData;
	std::cout << "Write index contact: ";
	if (!getline(std::cin, inputData))
	{
		return 1;
	}
	if (IsNumber(inputData))
	{
		const int index = static_cast<int>(strtol(inputData.data(),
			static_cast<char**>(nullptr),
			10));
		if (index > 0 && index <= m_size)
		{
			PrintInfoAboutContact(index - 1);
		}
	}
	return 0;
}
