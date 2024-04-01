/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:11:53 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/13 17:40:13 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Calling Animal default constructor" << std::endl;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Calling Animal destructor" << std::endl;
	return;
}

void	Animal::makeSound(void) const
{
	std::cout << "Hoooo" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}
