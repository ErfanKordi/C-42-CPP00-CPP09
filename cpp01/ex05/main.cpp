/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:59:23 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/25 11:52:47 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(void)
{

	std::string input;
	Harl harl;

	while (1)
	{
		std::cout << "Enter a level: ";
		std::cin >> input;
		if (input == "exit")
			break;
		harl.complain(input);
	}
	return EXIT_SUCCESS;
}
// int main()
// {
// 	Harl harl;

// 	harl.complain("DEBUG");
// 	harl.complain("INFO");
// 	harl.complain("ERROR");
// 	harl.complain("ERRfOR");
// 	harl.complain("WARNING");
// 	return 0;
// }
