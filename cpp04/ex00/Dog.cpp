/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:12:15 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/13 17:40:26 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Calling Dog default constructor" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Calling Dog destructor" << std::endl;
	return;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
