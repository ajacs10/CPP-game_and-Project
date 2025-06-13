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


ScavTrap::ScavTrap() : ClapTrap(){

this->Hitpoints = 100;
this->Energypoints = 50; 
this->Attackdamage = 20;
std::cout << "ScavTrap " << this->name << " - Construtor padrao ScavTrap chamado." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->Hitpoints = 100;
	this->Energypoints = 50;
	this->Attackdamage = 20;
	
	std::cout << "construtor de inicializacao  ScavTrap chamado" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& bazinga) : ClapTrap(bazinga)
{
	std::cout << "ScavTrap " << this->name << " - Construtor de copia ScavTrap chamado." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& bazinga)
{
	std::cout << "ScavTrap " << this->name << " - Operador de atribuicao ScavTrap chamado." << std::endl;
	if(this != &bazinga)
	{
		ClapTrap::operator=(bazinga);
	}
	return(*this);
}
void ScavTrap::attack(const std::string& target)
{
	if(Hitpoints == 0 || Energypoints == 0)
	{
		std::cout << "nao tens pontos de vida ou de energia para atackar " << std::endl;
		std::cout << "ScavTrap " << name << "tens " << Hitpoints << " pontos de vida" << std::endl;
		std::cout << "ScavTrap " << name << "tens " << Energypoints << " pontos de Energia" << std::endl;
		return ;
	}
	else
	{
		Energypoints = Energypoints -1;
		
		std::cout<< "ScavTrap" << name << " attacks " << target << " , causing " << Attackdamage << " points of damage!" <<std::endl; 
		
	}
}
	
void ScavTrap::guardGate()
{	
	std::cout << " ScavTrap " << getName() << "está agora no modo Guardião do Portão" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " - Destrutor ScavTrap chamado." << std::endl;
}
