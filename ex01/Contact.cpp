/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:25:29 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/05 14:41:26 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Constructor
Contact::Contact()
	: firstName_(""), lastName_(""), nickname_(""), phoneNumber_(""), darkestSecret_("")
{
}

// Destructor
Contact::~Contact()
{
}

// Set functions (member function or a method of the "Contact" class)
void Contact::setFirstName(const std::string& firstName)
{
	this->firstName_ = firstName;
}

void Contact::setLastName(const std::string& lastName)
{
	this->lastName_ = lastName;
}

void Contact::setNickname(const std::string& nickname)
{
	this->nickname_ = nickname;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
	this->phoneNumber_ = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret)
{
	this->darkestSecret_ = darkestSecret;
}

// Get functions (member function or a method of the "Contact" class)
std::string Contact::getFirstName() const
{
	return firstName_;
}

std::string Contact::getLastName() const
{
	return lastName_;
}

std::string Contact::getNickname() const
{
	return nickname_;
}

std::string Contact::getPhoneNumber() const
{
	return phoneNumber_;
}

std::string Contact::getDarkestSecret() const
{
	return darkestSecret_;
}
