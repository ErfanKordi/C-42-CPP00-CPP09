/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:25:01 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/13 17:39:41 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Calling WrongCat default constructor" << std::endl;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Calling WrongCat destructor" << std::endl;
	return;
}


void WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
