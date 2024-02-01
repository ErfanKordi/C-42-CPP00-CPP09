/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:25:11 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/21 14:59:47 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iomanip>
#include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string weapon);
	~Weapon();
	const std::string &getType() const;
	void setType(std::string);
};

#endif // WEAPON_HPP
