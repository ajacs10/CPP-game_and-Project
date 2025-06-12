/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:18:36 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/31 17:18:37 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->Hitpoints = 100;
	this->Energypoints = 50;
	this->Attackdamage = 20;
	std::cout << "construtor de inicializacao  ScavTrap chamado" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& bazinga) : ClapTrap(bazinga)
{
	std::cout << "construtor de copia  ScavTrap chamado" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& bazinga)
{
	if(this != &bazinga)
	{
		ClapTrap::operator=(bazinga);
	}
	return(*this);
}
	
void ScavTrap::guardGate()
{	
	std::cout << " ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << "destrutor chamado  pelo guardiao do reino das fadas!" << std::endl; 
}
