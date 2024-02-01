/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:42:59 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/21 18:31:57 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack() const
{
	if (this->_weapon->getType() != "")
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their arms" << std::endl;
}

void HumanB::setWeapon(Weapon& club)
{
	this->_weapon = &club;
}
HumanB::HumanB(std::string Name)
{
	this->_name = Name;
}

HumanB::~HumanB()
{
}
