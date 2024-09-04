/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:25:29 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/04 10:15:31 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Constructor
Contact::Contact()
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

void Contact::setPhoneNumber(const std::string& phonenumber)
{
	this->phonenumber_ = phonenumber;
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
	return phonenumber_;
}

std::string Contact::getDarkestSecret() const
{
	return darkestSecret_;
}

