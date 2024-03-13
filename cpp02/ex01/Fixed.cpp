/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:41:55 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/10 12:41:55 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _numBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(a.getRawBits());
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_numBits);
}

Fixed &Fixed::operator=(const Fixed &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(b.getRawBits());
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->_numBits = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//ex01

Fixed::Fixed(const int intNum)
{
	std::cout << "Default constructor called" << std::endl;
	this->_numBits = (intNum << _bits);
}
Fixed::Fixed(const float fNum)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_numBits = roundf(fNum * (1 << Fixed::_bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_numBits / (float)(1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (this->_numBits >> Fixed::_bits);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &f)
{
	stream << f.toFloat();
	return (stream);
}
