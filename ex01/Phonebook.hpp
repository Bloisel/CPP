/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:37:59 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/17 19:40:28 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"

class Phonebook
{
	public :

	Phonebook(void);
	~Phonebook(void);
	
	void add_user(void);	
	void print(Contact instance);
	std::string put;
	Contact instance;

	private :
	Contact _contact[8];
	int _idx;
	
	
};

#endif