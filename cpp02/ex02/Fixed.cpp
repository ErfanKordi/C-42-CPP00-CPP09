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

// ex01

Fixed::Fixed(const int intNum)
{
	std::cout << "int constructor called" << std::endl;
	this->_numBits = (intNum << _bits);
}
Fixed::Fixed(const float fNum)
{
	std::cout << "float constructor called" << std::endl;
	this->_numBits = roundf(fNum * (1 << Fixed::_bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->_numBits / (float)(1 << _bits));
}

int Fixed::toInt(void) const
{
	return (this->_numBits >> Fixed::_bits);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &f)
{
	stream << f.toFloat();
	return (stream);
}

// ex02

bool Fixed::operator>(Fixed const &f) const
{
	if (this->_numBits > f.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const &f) const
{
	if (this->_numBits < f.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const &f) const
{
	if (this->_numBits >= f.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const &f) const
{
	if (this->_numBits <= f.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const &f) const
{
	if (this->_numBits == f.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const &f) const
{
	if (this->_numBits != f.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(Fixed const &f)
{
	this->_numBits += f.getRawBits();
	return (*this);
}

Fixed Fixed::operator-(Fixed const &f)
{
	this->_numBits -= f.getRawBits();
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++(*this);
	return temp;
}

Fixed Fixed::operator++()
{
	this->_numBits++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--(*this);
	return (temp);
}

Fixed Fixed::operator--()
{
	this->_numBits--;
	return (*this);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

Fixed Fixed::operator*(Fixed const &f)
{
	this->_numBits = (this->toFloat() * f.toFloat()) * (1 << _bits);
	return (*this);
}

Fixed Fixed::operator/(Fixed const &f)
{
	this->_numBits = (this->toFloat() / f.toFloat()) * (1 << _bits);
	return (*this);
}
