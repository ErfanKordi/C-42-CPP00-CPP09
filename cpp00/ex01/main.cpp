/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:31:29 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/23 17:16:39 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"
#include "Phonebook.Class.hpp"

int main()
{
	Phonebook book;
	std::string input;
	bool exit = false;
	book.welcome();
	while (!exit)
	{
		std::cout << "> ";
		std::cin >> input;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (input.compare("ADD") == 0)
			book.addContact();
		if (input.compare("SEARCH") == 0)
		{
			book.printBook();
			book.search();
		}
		if (input.compare("EXIT") == 0)
			exit = true;
	}
	return 0;
}
