/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:34:33 by ekordi            #+#    #+#             */
/*   Updated: 2024/03/12 19:11:40 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class ClapTrap
{
private:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_atackDamage;

public:
	ClapTrap();
	ClapTrap(std::string Name);
	~ClapTrap();

	int getAtackDamage();

	ClapTrap &operator=(ClapTrap const &ClapTrap);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


// std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap2);
