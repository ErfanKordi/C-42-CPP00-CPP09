/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:53:14 by ekordi            #+#    #+#             */
/*   Updated: 2023/11/15 13:56:05 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if(argc == 1)
		std::cout << "Invalid number of arguments" << std::endl;
	else
	{
		for (size_t i = 1; i < argc; i++)
		{
			for (size_t n = 0; argv[i][n]; n++)
				std::cout << (char)toupper(argv[i][n]);
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
