/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:00:01 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/25 09:31:02 by ekordi           ###   ########.fr       */
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
}

Harl::~Harl()
{
}
void Harl::complain(std::string level)
{
	int i = 0;
	while (Harl::comments[i].name != "" && level != Harl::comments[i].name)
		i++;
	if(i == 4)
	{
		std::cout << "'Complain doesnt exist'" <<  std::endl << std::endl;
		return;
	}
	(this->*comments[i].f)();
	std::cout << std::endl;
}
void Harl:: _debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
