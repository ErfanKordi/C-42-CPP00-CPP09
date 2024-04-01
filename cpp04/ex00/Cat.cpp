/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:12:27 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/13 17:40:20 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Calling Cat default constructor" << std::endl;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Calling Cat destructor" << std::endl;
	return;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
