/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:02:07 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:38:07 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string	name;
    Weapon	*weapon;

public:
    HumanB(std::string name);
    void setWeapon(Weapon& Bazinga);
    void attack();
    ~HumanB();
};

#endif

