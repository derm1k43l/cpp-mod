/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:25:32 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/04 12:00:58 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact 
{
	public:
		Contact();
		Contact(
				const std::string& firstName,
				const std::string& lastName,
				const std::string& nickname,
				const std::string& phonenumber,
				const std::string& darkestSecret);
		~Contact();
	// set functions 
		void setFirstName(const std::string& firstName);
		void setLastName(const std::string& lastName);
		void setNickname(const std::string& nickname);
		void setPhoneNumber(const std::string& phonenumber);
		void setDarkestSecret(const std::string& darkestSecret);

	// get functions
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;

	private:
		std::string firstName_;
		std::string lastName_;
		std::string nickname_;
		std::string phonenumber_;
		std::string darkestSecret_;
};

#endif
