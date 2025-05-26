/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:13:08 by asobrinh          #+#    #+#             */
/*   Updated: 2025/01/25 14:34:50 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    size = 0;
}

bool isValidName(const std::string& name)
{
    size_t index = 0;
    while (index < name.length())
    {
        if (!((name[index] >= 'a' && name[index] <= 'z') || (name[index] >= 'A' && name[index] <= 'Z') || (name[index] == ' ')))
        {
            return false;
        }
        index++;
    }
    return true;
}

bool isValidPhoneNumber(const std::string& phone)
{
    unsigned int index = 0;
    while (index < phone.length())
    {
        if (phone[index] < '0' || phone[index] > '9' || phone[index] == ' ')
        {
            return false;
        }
        index++;
    }
    return true;
}

void PhoneBook::IsExibir()
{
    print();

    int indice = 0;
    while (indice < this->index)
    {
        std::cout
            << "|" << std::setw(10) << indice
            << "|" << std::setw(10) << rendericao(ContactInfo[indice].get_first_name())
            << "|" << std::setw(10) << rendericao(ContactInfo[indice].get_last_name())
            << "|" << std::setw(10) << rendericao(ContactInfo[indice].get_nick_name())
            << "|"
            << std::endl;

        indice++;
    }
}

bool PhoneBook::checkInput()
{
    int indice;
    std::cin >> indice;
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(10000, '\n');  
        return true;
    }

    return (indice >= 0 && indice < this->index);
}

std::string PhoneBook::rendericao(std::string regular)
{
    if (regular.length() > 10)
    {
        return regular.substr(0, 9) + ".";
    }
    else
    {
        return regular;
    }
}

void PhoneBook::IsAdd()
{
    Contact Bazinga;
    std::string first;
    std::string last;
    std::string nick;
    std::string phone;
    std::string darkest;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, first);
    while (!isValidName(first))
    {
        std::cout << "INVALID FIRST NAME CADETE. USE ONLY LETTERS:⎆ ";
        std::getline(std::cin, first);
    }
    Bazinga.set_first_name(first);

    std::cout << "Enter your last name: ";
    std::getline(std::cin, last);
    while (!isValidName(last))
    {
        std::cout << "INVALID FIRST NAME, CADETE. USE ONLY LETTERS:⎆ ";
        std::getline(std::cin, last);
    }
    Bazinga.set_last_name(last);

    std::cout << "Enter your nick name: ";
    std::getline(std::cin, nick);
    while (!isValidName(nick))
    {
        std::cout << "INVALID FIRST NAME, CADETE. USE ONLY LETTERS:⎆ ";
        std::getline(std::cin, nick);
    }
    Bazinga.set_nick_name(nick);
    
    std::cout << "Enter your phone number: ";
    std::getline(std::cin, phone);
    while (!isValidPhoneNumber(phone))
    {
        std::cout << "INVALID PHONE NUMBER, CADETE. USE ONLY NUMBERS: ";
        std::getline(std::cin, phone);
    }
    Bazinga.set_phone_number(phone);
    
    std::cout << "Enter your darkest secret: ";
    std::getline(std::cin, darkest);
    Bazinga.set_darkest_secret(darkest);

    this->ContactInfo[this->index % max] = Bazinga;
    this->index++;
    this->size = std::min(this->size + 1, max);

    std::cout << "BAZINGA👌! CONTACT ADDED SUCCESSFULLY!" << std::endl;
}


void PhoneBook::verificar()
{
    if (this->index <= max)
    {
        this->size = this->index;
    }
}


void PhoneBook::IsSearch()
{
    int index;

    IsExibir();

    std::cout << "ENTER WHITH INDEX CADETE!⎆: " << std::endl;
    std::cin >> index;

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "INVALID INDEX CADETE 🗶! IS NOT NUMBER VALID👾." << std::endl;
    }
    else if (index >= 0 && index < this->index)
    {
        std::cout << "First Name:     " << this->ContactInfo[index].get_first_name() << std::endl;
        std::cout << "Last Name:      " << this->ContactInfo[index].get_last_name() << std::endl;
        std::cout << "Nick Name:      " << this->ContactInfo[index].get_nick_name() << std::endl;
        std::cout << "Phone Number:   " << this->ContactInfo[index].get_phone_number() << std::endl;
        std::cout << "Darkest Secret: " << this->ContactInfo[index].get_darkest_Secret() << std::endl;
    }
    else 
    {
        std::cout << "INVALID INDEX CADETE 🇽 !." << std::endl;
    }

    std::cin.clear();
    std::cin.ignore(10000, '\n');
}

PhoneBook::~PhoneBook() {}
