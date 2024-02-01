/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:32:12 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/21 16:06:54 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string str)
{
	this->_type = str;
}

const std::string &Weapon::getType() const
{
	return _type;
}

Weapon::Weapon(std::string weapon)
{
	this->setType(weapon);
}

Weapon::~Weapon()
{
}
