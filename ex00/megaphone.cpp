/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:25:23 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/06 10:59:15 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char *av[])
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str = av[i];
			for (std::string::size_type j = 0; j < str.size(); j++)
				std::cout << static_cast<char>(std::toupper(str[j]));
			if (i + 1 < ac)
				std::cout << " ";
		}
		std::cout << "\n";
	}
	return (0);
}

// v.2 using the range-based future of c++11
// a more elegant way to iterate through the string for c++11
// int main(int ac, char *av[])
// {
// 	if (ac == 1)
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
// 	else
// 	{
// 		for (int i = 1; i < ac; i++)
// 		{
// 			std::string str = av[i];
// 			for (char c : str)
// 				std::cout << static_cast<char>(std::toupper(c));
// 			if (i + 1 < ac)
// 				std::cout << " ";
// 		}
// 		std::cout << "\n";
// 	}
// 	return (0);
// }
