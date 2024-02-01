/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 07:57:45 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/25 15:39:48 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <cstring>


class Harl
{
private:
	struct _comments
	{
		std::string name;
		void (Harl::*f)(void);
	};
	struct _comments comments[5];
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

public:

	Harl();
	~Harl();
	void complain(std::string level);
};


