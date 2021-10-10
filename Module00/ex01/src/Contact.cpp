//
// Created by Aaron Berry on 8/29/21.
//

#include "includes/Contact.hpp"

const std::string& Contact::GetFirstName() const
{
	return m_firstName;
}
void Contact::SetFirstName(const std::string& mFirstName)
{
	m_firstName = mFirstName;
}
const std::string& Contact::GetLastName() const
{
	return m_lastName;
}
void Contact::SetLastName(const std::string& mLastName)
{
	m_lastName = mLastName;
}
const std::string& Contact::GetNickname() const
{
	return m_nickname;
}
void Contact::SetNickname(const std::string& mNickname)
{
	m_nickname = mNickname;
}
const std::string& Contact::GetLogin() const
{
	return m_login;
}
void Contact::SetLogin(const std::string& mLogin)
{
	m_login = mLogin;
}
const std::string& Contact::GetPostalAddress() const
{
	return m_postalAddress;
}
void Contact::SetPostalAddress(const std::string& mPostalAddress)
{
	m_postalAddress = mPostalAddress;
}
const std::string& Contact::GetEmailAddress() const
{
	return m_emailAddress;
}
void Contact::SetEmailAddress(const std::string& mEmailAddress)
{
	m_emailAddress = mEmailAddress;
}
const std::string& Contact::GetPhoneNumber() const
{
	return m_phoneNumber;
}
void Contact::SetPhoneNumber(const std::string& mPhoneNumber)
{
	m_phoneNumber = mPhoneNumber;
}
const std::string& Contact::GetBirthdayDate() const
{
	return m_birthdayDate;
}
void Contact::SetBirthdayDate(const std::string& mBirthdayDate)
{
	m_birthdayDate = mBirthdayDate;
}
const std::string& Contact::GetFavorite() const
{
	return m_favorite;
}
void Contact::SetFavorite(const std::string& mFavorite)
{
	m_favorite = mFavorite;
}
const std::string& Contact::GetMeal() const
{
	return m_meal;
}
void Contact::SetMeal(const std::string& meal)
{
	m_meal = meal;
}
const std::string& Contact::GetUnderwearColor() const
{
	return m_underwearColor;
}
void Contact::SetUnderwearColor(const std::string& mUnderwearColor)
{
	m_underwearColor = mUnderwearColor;
}
const std::string& Contact::GetDarkestSecret() const
{
	return m_darkestSecret;
}
void Contact::SetDarkestSecret(const std::string& mDarkestSecret)
{
	m_darkestSecret = mDarkestSecret;
}
uint16_t Contact::GetIndex() const
{
	return m_index;
}
void Contact::SetIndex(uint16_t mIndex)
{
	m_index = mIndex;
}
Contact::Contact()
{
}
Contact::~Contact()
{

}
