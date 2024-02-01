/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:00:01 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/25 16:23:10 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	Harl::comments[0] = (_comments){
		.name = "DEBUG",
		.f = &Harl::_debug};
	Harl::comments[1] = (_comments){
		.name = "INFO",
		.f = &Harl::_info};
	Harl::comments[2] = (_comments){
		.name = "WARNING",
		.f = &Harl::_warning};
	Harl::comments[3] = (_comments){
		.name = "ERROR",
		.f = &Harl::_error};
	Harl::comments[4] = (_comments){
		"", nullptr};
}

Harl::~Harl()
{
}
void Harl::complain(std::string level)
{
	int i = 0;
	while (Harl::comments[i].f != nullptr && level != Harl::comments[i].name)
		i++;
	switch (i)
	{
	case 0:
		this->_debug();
	case 1:
		this->_info();
	case 2:
		this->_warning();
	case 3:
		this->_error();
		break;
	default:
		std::cout << "[ Bad complain ]" << std::endl;
	}
}
void Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
