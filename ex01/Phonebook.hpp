/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:37:59 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/22 05:09:28 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"

class Phonebook
{
	public :

	
	Phonebook(void);
	~Phonebook(void);
	
	void add_user(void) ;	
	int print(void) const;
	std::string tronc(const std::string &test) const;
	void print_index(void) const;
	void clearInput();
		
	int i;	
	std::string put;
		

	private :
	Contact _tabo[8];
	int _idx;
	
	
};

#endif