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

#include "FragTrap.hpp"

int main()
{

	FragTrap FragTrapA("FragTrapA");
	FragTrap FragTrapB("FragTrapB");

	std::cout << std::endl;

	FragTrapA.announce();
	FragTrapB.announce();
	FragTrapA.attack("FragTrapB");
	FragTrapB.takeDamage(FragTrapA.getAtackDamage());

	std::cout << std::endl;
	FragTrapA.announce();
	FragTrapB.announce();

	FragTrapB.beRepaired(5);

	std::cout << std::endl;
	FragTrapB.highFiveGuys();

	FragTrapA.announce();
	FragTrapB.announce();
	return (0);
}
