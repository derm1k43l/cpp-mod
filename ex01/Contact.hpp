/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:25:32 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/06 16:27:21 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>


// Definition of the class "Contact", representing a contact in a phonebook
class Contact 
{
	public:
		Contact();
		~Contact();

	// set functions (modify the state of the object) 
		void setFirstName(const std::string& firstName);
		void setLastName(const std::string& lastName);
		void setNickname(const std::string& nickname);
		void setPhoneNumber(const std::string& phoneNumber);
		void setDarkestSecret(const std::string& darkestSecret);

	// get functions (do not modify the state of the object)
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;

	private:
		std::string firstName_;
		std::string lastName_;
		std::string nickname_;
		std::string phoneNumber_;
		std::string darkestSecret_;
};

#endif
