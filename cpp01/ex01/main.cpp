/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:47:23 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/20 20:07:26 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombieHordeArray = zombieHorde(3, "killer");
	for (size_t i = 0; i < 3; i++)
	{
		zombieHordeArray->announce();
	}
	delete[] zombieHordeArray;
}
