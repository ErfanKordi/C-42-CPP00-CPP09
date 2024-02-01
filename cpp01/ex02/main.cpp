/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:01:58 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/21 16:05:58 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int main()
{
	std::string Hi = "HI THIS IS BRAIN";
	std::string *stringPTR = &Hi;
	std::string &stringREF = Hi;

	std::cout << "The memory address of the string variable is: " << &Hi << std::endl;
	std::cout << "The memory address held by stringPTR is: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is: " << &stringREF << std::endl;

	std::cout << "The value of the string variable is: " << Hi << std::endl;
	std::cout << "The value pointed to by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is: " << stringREF << std::endl;
}
