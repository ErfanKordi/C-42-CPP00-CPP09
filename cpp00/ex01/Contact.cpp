/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:27:30 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/17 10:13:54y ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_getInput(std::string str) const
{
	std::string input;

	while (42)
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			break;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input; please try again." << std::endl;
		}
	}
	return (input);
}

void Contact::fillOutForm(void)
{
	this->_firstName = this->_getInput("Please enter you first name: ");
	this->_lastName = this->_getInput("Please enter your last name: ");
	this->_nickname = this->_getInput("Please enter your nickname: ");
	this->_phoneNumber = this->_getInput("Please enter your phone number: ");
	this->_darkestSecret = this->_getInput("Please enter your darkest secret: ");
	std::cout << std::endl;
}

void Contact::changeIndex(int i)
{
	this->_index = i;
}

void Contact::view(int index, bool fullView) const
{
	if (this->_firstName.empty())
		return;
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) << this->_firstName.substr(0, 9) + "." << std::flush;
	std::cout << "|" << std::setw(10) << this->_lastName.substr(0, 9) + "." << std::flush;
	std::cout << "|" << std::setw(10) << this->_nickname.substr(0, 9) + "." << std::flush;
	if (fullView)
	{
		std::cout << "|" << std::setw(10) << this->_phoneNumber.substr(0, 9) + "." << std::flush;
		std::cout << "|" << std::setw(10) << this->_darkestSecret.substr(0, 9) + "." << std::flush;
	}
	std::cout << "|" << std::endl;
}
