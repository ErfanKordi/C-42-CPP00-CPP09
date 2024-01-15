/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:25:30 by ekordi            #+#    #+#             */
/*   Updated: 2024/01/15 13:32:32 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Phonebook_Class_hpp
# define Phonebook_Class_hpp

#include "Contact.Class.hpp"

class Phonebook
{
private:
	Contact _contacts[8];

public:
	Phonebook();
	~Phonebook();
	void welcome(void) const;
	void addContact(void);
	void printBook(void) const;
	void search(void) const;
};


#endif
