/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils_two.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:17:59 by asobrinh          #+#    #+#             */
/*   Updated: 2025/01/25 14:35:10 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::write_message()
{
    std::cout << "*(ASOBRINH)ERRAR É HUMANO, MAS SOLUCIONAR BUGS TORNA-ME PROGRAMADORA.(ASOBRINH)*" << std::endl;
    
    std::cout<<std::endl;
    
    std::cout << "*asobrinh********THIS IS YOUR PHONEBOOK CADETE********asobrinh*" << std::endl;
    std::cout << "*                                                             *" << std::endl;
    std::cout << "*      1 -> ADD   *       2 -> SEARCH     *     3 -> EXIT     *" << std::endl;
    std::cout << "*                                                             *" << std::endl;
    std::cout << "*asobrinh*********************************************asobrinh*" << std::endl;
    
     std::cout<<std::endl;
}

void PhoneBook::print()
{
    std::cout << " (ASOBRINH) ESTAS A GOSTAR DO MEU PROJECTO? (ASOBRINH)" << std::endl;
    std::cout << "|  INDEX   |FIRSTNAME |LASTNAME  |NICKNAME  |" << std::endl;
}

bool ISfail(int valor)
{
    return (valor < 0);
}

