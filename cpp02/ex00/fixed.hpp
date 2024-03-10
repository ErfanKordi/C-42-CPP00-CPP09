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
};
