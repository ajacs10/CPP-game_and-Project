/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:47:30 by asobrinh          #+#    #+#             */
/*   Updated: 2025/01/25 14:34:31 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact(std::string first = "", std::string last = "", std::string nick = "", std::string phone = "", std::string secrets = "");
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nick_name();
    std::string get_phone_number();
    std::string get_darkest_Secret();
    
    void set_first_name(std::string first);
    void set_last_name(std::string last);
    void set_nick_name(std::string nick);
    void set_phone_number(std::string phone);
    void set_darkest_secret(std::string secrets);
    
    ~Contact();
};

#endif

