/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:31:33 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/13 13:31:33 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HP
#define FRAGTRAP_HP

#include "ClapTrap.hpp"
#include <iostream>
#include <iomanip>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string const &name);
	~FragTrap();

	void highFiveGuys(void);
};

#endif
