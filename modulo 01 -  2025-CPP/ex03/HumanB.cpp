/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:02:01 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:37:58 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;

}

void HumanB::setWeapon(Weapon& Bazinga) 
{
	this->weapon = &Bazinga;
}

void HumanB::attack() 
{
	if (this->weapon) 
	{
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	} 
	else 
	{
		std::cout << this->name << " is unarmed!" << std::endl;
	}
}

HumanB::~HumanB()
{
}

