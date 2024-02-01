/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:59:23 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/25 16:21:22 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << "Two arguments are required" << std::endl;
		exit(1);
	}
	harl.complain(argv[1]);
	return EXIT_SUCCESS;
}
