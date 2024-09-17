/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:25:34 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/06 14:39:18 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	PhoneBook phonebook;
	std::string cmd;

	while (42)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::flush;
		if (!std::getline(std::cin, cmd))
		{
			std::cout << "\nEXIT because EOF.\n";
			break;
		}
		if (cmd.empty())
			std::cout << "Please enter a command.\n";
		else if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Invalid command!\n";
	}
	return (0);
}