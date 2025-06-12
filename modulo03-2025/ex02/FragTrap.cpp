/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:18:53 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/31 17:18:55 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->Hitpoints = 100;
	this->Energypoints = 100;
	this->Attackdamage = 30;
	std::cout << "construtor FragTrap  chamado: " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap& bazinga) : ClapTrap(bazinga)
{
	std::cout << "construtor de copia  FragTrap chamado" << this->name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& bazinga)
{
	 std::cout << "construtor FragTrap  de atribuicao chamado." << this->name << std::endl;
	if(this != &bazinga)
	{
		ClapTrap::operator=(bazinga);
	}
	return(*this);
}
	
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " grita: TOCA AQUI,CADETE ! " << std::endl;

}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " está sendo destruído! Adeus, mundo cruel!" << std::endl;
}
