/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:42:03 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/10 12:42:03 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	 FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _numBits;
	static const int Fixed_POINT_BASE = 8;

public:
	Fixed();
	Fixed(const Fixed &a);
	~Fixed();
	Fixed &operator=(const Fixed &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
