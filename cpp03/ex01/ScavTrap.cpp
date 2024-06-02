/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:03:46 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/13 11:03:46 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default SCAVTRAP constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
{
	_name = name;
	_energyPoints = 50;
	_hitPoints = 100;
	_atackDamage = 20;
	std::cout << "ScavTrap " << _name << " created." << std::endl;
}
// void ScavTrap::attack(std::string const & target)
// {
// 	if (_energyPoints != 0 && _hitPoints != 0)
// 	{
// 		std::cout << _name << " robot atacked " << target << " cuasing "
// 				  << getAtackDamage() << " damage points." << std::endl;
// 		_energyPoints -= 1;
// 	}
// 	else
// 		std::cout << _name << " can't attack. not enoghe  energy or hitpoints." << std::endl;
// }

ScavTrap::~ScavTrap()
{
	std::cout << _name << " destroyed." << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << _name << " is guarding the gate." << std::endl;
}
