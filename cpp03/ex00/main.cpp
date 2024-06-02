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

int main()
{

	ClapTrap claptrapA("ClaptrapA");
	ClapTrap claptrapB("ClaptrapB");

	std::cout << std::endl;

	claptrapA.announce();
	claptrapB.announce();
	claptrapA.attack("ClaptrapB");
	claptrapB.takeDamage(claptrapA.getAtackDamage());

	std::cout << std::endl;
	claptrapA.announce();
	claptrapB.announce();

	claptrapB.beRepaired(5);

	std::cout << std::endl;

	claptrapA.announce();
	claptrapB.announce();
	return (0);
}
