/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:31:20 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/15 15:34:19 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.Class.hpp"

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::welcome(void) const
{
	std::cout << std::endl;
	std::cout << "📞 Welcome to PhoneBook of secrets 📖" << std::endl;
	std::cout << std::endl;
	std::cout << "--------------USAGE---------------" << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To search for a contact." << std::endl;
	std::cout << "EXIT\t: to close the PhoneBook." << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}

void Phonebook::addContact(void)
{
	static int i;
	this->_contacts[i].fillOutForm();
	this->_contacts[i].changeIndex(i);
	i++;
}

void Phonebook::printBook(void) const
{
	std::cout << "------------- PHONBOOK CONTACTS -------------" << std::endl;
	for (size_t i = 0; i < 8; i++)
		this->_contacts[i].view(i, false);
	std::cout << std::endl;
}

void Phonebook::search() const
{
	int input;
	bool valid = false;
	while (42)
	{
		std::cout << "Please enter the contact index: " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input <= 8))
			break;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index; please enter a new number." << std::endl;
	}
	this->_contacts[input].view(input, true);
}
