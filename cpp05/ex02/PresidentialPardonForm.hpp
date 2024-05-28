/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:31:44 by ekordi            #+#    #+#             */
/*   Updated: 2024/05/27 12:31:44 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
private:
	std::string Target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string Target);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
	void action() const;
};
