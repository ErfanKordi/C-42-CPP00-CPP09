/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:07:14 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/25 15:55:26 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
static void replace(std::string infileName, std::string s1, std::string s2)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string line;

	infile.open(infileName);
	if (!infile.is_open())
	{
		std::cout << "Error opening the file" << std::endl;
		std::exit(1);
	}
	if (infile.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "Input file is empty" << std::endl;
		infile.close();
		exit(1);
	}
	outfile.open(infileName + ".Replace");
	if (!outfile.is_open())
	{
		std::cout << "Error opening or creating the output file" << std::endl;
		std::exit(1);
	}
	std::string::size_type s1Pos;
	while (getline(infile, line))
	{
		while (1)
		{
			s1Pos = line.find(s1);
			if (s1Pos == std::string::npos)
				break;
			line.erase(s1Pos, s1.size());
			line.insert(s1Pos, s2);
		}
		outfile << line << std::endl;
	}
	std::cout << "Replacement completed. Output written to " << infileName + ".Replace" << std::endl;

	infile.close();
	outfile.close();
}

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (!argv[2][0] || !argv[3][0])
			std::cout << "Strings can't be empty" << std::endl;
		else
			replace(argv[1], argv[2], argv[3]);
	}
	else
		std::cout << "Wrong amount of arguments" << std::endl;
	return 0;
}
