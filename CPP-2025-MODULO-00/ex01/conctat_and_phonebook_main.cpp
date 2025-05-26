/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conctat_and_phonebook_main.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:13:23 by asobrinh          #+#    #+#             */
/*   Updated: 2025/01/25 14:34:01 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp" 

int main()
{
    PhoneBook asobrinh;
    std::string command;

    asobrinh.write_message();

    while (true)
    {
        std::cout << std::endl;
        std::cout << " 🏋→ ";
        std::cout << std::endl;
        if (!std::getline(std::cin, command)) 
        {
            break; 
        }
        if (command == "ADD" || command == "add" || command == "1")
        {
            asobrinh.IsAdd();
        }
        else if (command == "SEARCH" || command == "search" || command == "2")
        {
            asobrinh.IsSearch();
        }
        else if (command == "EXIT" || command == "exit" || command == "3")
        {
            std::cout << "GOOD BYE MY FRIEND CADETE🏴" << std::endl;
            break;
        }
        else
        {
            std::cout << "COMMAND NOT FOUND, CADETE! PLEASE ENTER THE CORRECT OPTION🚨." << std::endl;
        }
    }

    return 0;
}

