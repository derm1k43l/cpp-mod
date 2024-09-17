/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:25:39 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/04 18:08:36 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	public:
		PhoneBook();				// Constructor
		~PhoneBook();				// Destructor
	
		void addContact();			// Add a contact to the phonebook
		void searchContact() const;	// Search for a contact in the phonebook

	private:
		Contact contacts_[8];		// Array of contacts max 8
		int currentIndex_;			// Index of the current contact

		std::string truncateString(const std::string& str, size_t width) const; // Truncate a string to a specific width
		std::string getDetails(const std::string &str);							// Get the details of a contact. if empty give error
};

#endif