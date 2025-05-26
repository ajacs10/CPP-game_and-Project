/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conctat_get_set.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:14:07 by asobrinh          #+#    #+#             */
/*   Updated: 2025/01/25 14:35:53 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secrets)
{
    this->firstName = first;
    this->lastName = last;
    this->nickName = nick;
    this->phoneNumber = phone;
    this->darkestSecret = secrets;
}

std::string Contact::get_first_name()
{
    return(this->firstName);
}

std::string Contact::get_last_name()
{
    return(this->lastName);
}

std::string Contact::get_nick_name()
{
    return(this->nickName);
}
std::string Contact::get_phone_number()
{
    return(this->phoneNumber);
}
std::string Contact::get_darkest_Secret()
{
    return(this->darkestSecret);
}

void Contact::set_first_name(std::string first)
{
    this->firstName = first; 
}
void Contact::set_last_name(std::string last)
{   
    this->lastName = last;
}
void Contact::set_nick_name(std::string nick)
{
    this->nickName = nick;
}
void Contact::set_phone_number(std::string phone)
{
    this->phoneNumber = phone;
}
void Contact::set_darkest_secret(std::string secrets)
{
    this->darkestSecret = secrets;
}   

Contact::~Contact() {}



