/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:29:10 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/13 17:39:55 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "Calling WrongAnimal default constructor" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Calling WrongAnimal destructor" << std::endl;
	return;
}


void	WrongAnimal::makeSound(void) const
{
	std::cout << "Hoooo" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}
