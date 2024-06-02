/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:17:53 by ekordi            #+#    #+#             */
/*   Updated: 2024/05/27 12:17:53 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>
#pragma once

class RobotomyRequestForm : public Form
{
private:
	std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string Target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	void action() const;
};
