/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:39:33 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/21 16:06:38 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;

public:
	HumanA(std::string name, Weapon &club);
	~HumanA();
	void attack() const;
};

#endif
