/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:34:36 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/12 19:12:18 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(),
					   _hitPoints(10),
					   _energyPoints(10),
					   _atackDamage(0)
{
	std::cout << "ClapTrap" << _name << " created." << std::endl;
}
ClapTrap::ClapTrap(std::string const &Name) : _name(Name),
											  _hitPoints(10),
											  _energyPoints(10),
											  _atackDamage(2)
{
	std::cout << "ClapTrap " << Name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ClapTrap)
{
	std::cout << "CLAPTRAP assignation operator called" << std::endl;
	this->_name = ClapTrap._name;
	this->_hitPoints = ClapTrap._hitPoints;
	this->_energyPoints = ClapTrap._energyPoints;
	this->_atackDamage = ClapTrap._atackDamage;
	return (*this);
}

int ClapTrap::getAtackDamage()
{
	return (this->_atackDamage);
}
void ClapTrap::attack(std::string const &target)
{
	if (_energyPoints != 0 && _hitPoints != 0)
	{
		std::cout << _name << " atacked " << target << " cuasing "
				  << getAtackDamage() << " damage points." << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << _name << " can't attack. not enoghe  energy or hitpoints." << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " took " << amount << " damage points." << std::endl;
	_hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints != 0 && _hitPoints != 0)
	{
		std::cout << _name << " repaired it self and recieved " << amount
				  << " point." << std::endl;
		_hitPoints += amount;
		_energyPoints -= 1;
	}
	else
		std::cout << _name << " can't repair. not enoghe  energy or hitpoints." << std::endl;
}

void ClapTrap::announce(void) const
{
	std::cout << "Name status: " << _name << " Hitpoints: " << _hitPoints << " Energy Points: " << _energyPoints << " Attack Damage: " << _atackDamage << std::endl;
}
