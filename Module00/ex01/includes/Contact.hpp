//
// Created by Aaron Berry on 8/29/21.
//

#ifndef PHONEBOOK__CONTACT_HPP_
#define PHONEBOOK__CONTACT_HPP_

#include <string>

class Contact
{
 public:
	Contact();
	virtual ~Contact();

	const std::string& GetFirstName() const;
	void SetFirstName(const std::string& mFirstName);
	const std::string& GetLastName() const;
	void SetLastName(const std::string& mLastName);
	const std::string& GetNickname() const;
	void SetNickname(const std::string& mNickname);
	const std::string& GetLogin() const;
	void SetLogin(const std::string& mLogin);
	const std::string& GetPostalAddress() const;
	void SetPostalAddress(const std::string& mPostalAddress);
	const std::string& GetEmailAddress() const;
	void SetEmailAddress(const std::string& mEmailAddress);
	const std::string& GetPhoneNumber() const;
	void SetPhoneNumber(const std::string& mPhoneNumber);
	const std::string& GetBirthdayDate() const;
	void SetBirthdayDate(const std::string& mBirthdayDate);
	const std::string& GetFavorite() const;
	void SetFavorite(const std::string& mFavorite);
	const std::string& GetMeal() const;
	void SetMeal(const std::string& meal);
	const std::string& GetUnderwearColor() const;
	void SetUnderwearColor(const std::string& mUnderwearColor);
	const std::string& GetDarkestSecret() const;
	void SetDarkestSecret(const std::string& mDarkestSecret);
	uint16_t GetIndex() const;
	void SetIndex(uint16_t mIndex);

 private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_login;
	std::string m_postalAddress;
	std::string m_emailAddress;
	std::string m_phoneNumber;
	std::string m_birthdayDate;
	std::string m_favorite;
	std::string m_meal;
	std::string m_underwearColor;
	std::string m_darkestSecret;
	uint16_t m_index;
};

#endif //PHONEBOOK__CONTACT_HPP_
