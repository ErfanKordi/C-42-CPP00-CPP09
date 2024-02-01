/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:42:59 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/21 18:24:47 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
HumanA::HumanA(std::string name, Weapon &club) : _name(name), _weapon(club)
{
}

HumanA::~HumanA()
{
}
