/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:42:03 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/10 12:42:03 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _numBits;
	static const int _bits = 8;

public:
	Fixed();
	Fixed(const Fixed &f);
	Fixed(const int intNum);
	Fixed(const float fNum);
	~Fixed();

	float toFloat(void) const;
	int toInt(void) const;

	Fixed &operator=(const Fixed &b);
	bool operator>(Fixed const &f) const;
	bool operator<(Fixed const &f) const;
	bool operator>=(Fixed const &f) const;
	bool operator<=(Fixed const &f) const;
	bool operator==(Fixed const &f) const;
	bool operator!=(Fixed const &f) const;

	Fixed operator+(Fixed const &f);
	Fixed operator-(Fixed const &f);
	Fixed operator*(Fixed const &f);
	Fixed operator/(Fixed const &f);

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &stream, Fixed const &f);

#endif
