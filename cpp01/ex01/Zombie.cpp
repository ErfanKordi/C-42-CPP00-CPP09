/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:05:45 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/20 20:18:39 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << _name << " is destroyed." << std::endl;
}
void Zombie::announce()
{
	std::cout << _name << ": waaah..." << std::endl;
}
void Zombie::setName(std::string name)
{
	this->_name = name;
}
