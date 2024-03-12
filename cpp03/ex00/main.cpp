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

#include "ClapTrap.hpp"

int	main()
{
	std::cout << "---- CLAPTRAP MAIN ----\n" << std::endl;

	ClapTrap	ClaptrapA("ClaptrapA");
	ClapTrap	ClaptrapB("ClaptrapB");

	// ClapTrap	ClapTrapC(ClaptrapA);
	// std::cout << ClapTrapC << std::endl;

	std::cout << std::endl;

	// std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;

	ClaptrapA.attack("ClaptrapB");
	ClaptrapB.takeDamage(ClaptrapA.getAtackDamage());

	std::cout << std::endl;

	// std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;

	ClaptrapB.beRepaired(5);

	std::cout << std::endl;

	// std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;
	return (0);
}

