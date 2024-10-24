/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 03:02:46 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/22 05:11:08 by bloisel          ###   ########.fr       */
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
		Phonebook tryt;
		// Contact			to;
		std::string test;
		
		std::cout << "Enter ADD or SEARCH or EXIT " << std::endl;
		while (true)
		{
			std::getline(std::cin, test);
			//if (test != "ADD" && test != "SEARCH" && test != "EXIT")
			//std::cout << "should be ignored but wrong entry ... please try again" << std::endl;
			if (test == "ADD")
			{
						tryt.add_user();
						std::cout << "Enter ADD or SEARCH or EXIT " << std::endl;	
			}
			if (test == "SEARCH")
			{
					//tryt.print();
					if (tryt.print() != -1)
						tryt.print_index();
					std::cout << "Enter ADD or SEARCH or EXIT " << std::endl;	
			}
			if (test == "EXIT")
				return (0);
		}	
		return (0);	
}