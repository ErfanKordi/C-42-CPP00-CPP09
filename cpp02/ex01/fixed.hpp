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
# define FIXED_HPP

#include <iostream>

class fixed
{
private:
	int _fixedPointNum;
	static const int FIXED_POINT_BASE = 8;

public:
	fixed();
	fixed(const fixed &a);
	~fixed();
	fixed &operator=(const fixed &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	fixed(const int integer);
	fixed(const float floating_point);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream	&operator<<(std::ostream &stream, fixed const &f);

#endif
