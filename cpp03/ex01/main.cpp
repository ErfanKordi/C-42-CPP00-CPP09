/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:48:08 by prossi            #+#    #+#             */
/*   Updated: 2024/03/12 19:12:53 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{

	ScavTrap ScavTrapA("ScavTrapA");
	ScavTrap ScavTrapB("ScavTrapB");

	std::cout << std::endl;

	ScavTrapA.announce();
	ScavTrapB.announce();
	ScavTrapA.attack("ScavtrapB");
	ScavTrapB.takeDamage(ScavTrapA.getAtackDamage());

	std::cout << std::endl;
	ScavTrapA.announce();
	ScavTrapB.announce();

	ScavTrapB.beRepaired(5);

	std::cout << std::endl;
	ScavTrapB.guardGate();

	ScavTrapA.announce();
	ScavTrapB.announce();
	return (0);
}
