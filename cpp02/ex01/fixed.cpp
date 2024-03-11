/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:41:55 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/10 12:41:55 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

fixed::fixed() : _fixedPointNum(0)
{
	std::cout << "Default constructor called" << std::endl;
}
fixed::fixed(const fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(a.getRawBits());
}

int fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointNum);
}

fixed &fixed::operator=(const fixed &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(b.getRawBits());
	return (*this);
}

void fixed::setRawBits(int const raw)
{
	this->_fixedPointNum = raw;
}

fixed::~fixed()
{
	std::cout << "Destructor called" << std::endl;
}
