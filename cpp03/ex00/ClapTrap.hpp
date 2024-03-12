/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:34:33 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/12 18:13:42 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class ClapTrap
{
private:
	std::string _Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AtackDamage;

public:
	ClapTrap();
	ClapTrap(std::string Name);
	~ClapTrap();

	int GetAtackDamage();
	int Get();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


