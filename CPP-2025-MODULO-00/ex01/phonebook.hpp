/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:13:24 by asobrinh          #+#    #+#             */
/*   Updated: 2025/01/25 14:34:59 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <iomanip>
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

static const int max = 8;

class	PhoneBook
{
private:
	int index;
	int size;
	Contact	ContactInfo[max];
	
public: 
	PhoneBook();
	
	void IsAdd();
	void IsSearch();
	void IsExibir();
	void write_message();
	void verificar();
	bool checkInput();
	void print();
	std::string rendericao(std::string regular);
	
	~PhoneBook();
};
#endif
