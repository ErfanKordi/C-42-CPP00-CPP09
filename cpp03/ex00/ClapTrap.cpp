/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:34:36 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/12 18:23:03 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name(),
					   _HitPoints(10),
					   _EnergyPoints(10),
					   _AtackDamage(0)
{
	std::cout << "ClapTrap created." << std::endl;
}
ClapTrap::ClapTrap(std::string Name) : _Name(Name),
									   _HitPoints(10),
									   _EnergyPoints(10),
									   _AtackDamage(0)
{
	std::cout << "ClapTrap " << Name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destroyed." << std::endl;
}

int ClapTrap::GetAtackDamage()
{
	return (this->_AtackDamage);
}
void ClapTrap::attack(std::string const &target)
{
	std::cout << _Name << " atacked " << target << " cuasing "
	<< GetAtackDamage() << " damage points."<< std::endl;
	_EnergyPoints -= 1;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _Name << " took " << amount << " damage points." << std::endl;
	_HitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
}
