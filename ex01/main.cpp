/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 03:02:46 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/17 18:50:27 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"
#include "Phonebook.hpp"

// boucle ADD demande a lutilisateur de mettre info par info verifier si pas vide 
// apres ajouter au repertoire 


int main()
{
		Contact instance;
		Phonebook tryt;
		std::string test;
		
		while (1)
		{
			std::getline(std::cin, test);
			if (test != "ADD" && test != "SEARCH" && test != "EXIT")
				std::cout << "should be ignored but wrong entry ... please try again" << std::endl;
		if (test == "ADD")
		{
				tryt.add_user();
				return (0);	
		}
		}	
		return (0);	
}