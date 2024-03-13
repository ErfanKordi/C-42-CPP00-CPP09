/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:35:21 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/13 13:35:21 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default Frag Trap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string const &name)
{
	_name = name;
	_energyPoints = 50;
	_hitPoints = 100;
	_atackDamage = 30;
	std::cout << "ScavTrap " << _name << " created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name << " destroyed." << std::endl;
}

void FragTrap::highFiveGuys()
{
	std::cout << _name << " want's highfive." << std::endl;
}
