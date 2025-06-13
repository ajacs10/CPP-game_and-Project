/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:17:14 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/31 17:17:16 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ClapTrap.hpp"

ClapTrap::ClapTrap() :
name("Ana Sobrinho"),
Hitpoints(10),
Energypoints(10),
Attackdamage(0)
{
	std::cout << "ClapTrap " << name << " - Construtor padrao chamado." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& bazinga):
name(bazinga.name),
Hitpoints(bazinga.Hitpoints),
Energypoints(bazinga.Energypoints),
Attackdamage(bazinga.Attackdamage)
{
	 std::cout << "ClapTrap " << name << " - Construtor copia chamado." << std::endl;
} 

ClapTrap& ClapTrap::operator=(const ClapTrap& bazinga)
{
	 std::cout << "ClapTrap " << name << " - Construtor de atribuicao chamado." << std::endl;
	
	if(this != &bazinga)
	{
		name = bazinga.name;
		Hitpoints = bazinga.Hitpoints;
		Energypoints = bazinga.Energypoints;
		Attackdamage = bazinga.Attackdamage;
	}
	return(*this);
}

ClapTrap::ClapTrap(const std::string& name):
name(name),
Hitpoints(10),
Energypoints(10),
Attackdamage(0)
{
	 std::cout << "ClapTrap " << name << " - Construtor com nome chamado." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(Hitpoints == 0 || Energypoints == 0)
	{
		std::cout << "nao tens pontos de vida ou de energia para atackar " << std::endl;
		std::cout << "ClapTrap " << name << "tens " << Hitpoints << " pontos de vida" << std::endl;
		std::cout << "ClapTrap " << name << "tens " << Energypoints << " pontos de Energia" << std::endl;
		return ;
	}
	else
	{
		Energypoints = Energypoints -1;
		
		std::cout<< "ClapTrap" << name << " attacks " << target << " , causing " << Attackdamage << " points of damage!" <<std::endl; 
		
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hitpoints == 0)
	{
		std::cout << "ClapTrap " << name << " já está sem pontos de vida." << std::endl;
		return;
	}
	if (amount >= Hitpoints)
	{
		Hitpoints = 0;
		std::cout << "ClapTrap " << name << " sofre " << amount << " pontos de dano e está agora sem pontos de vida!" << std::endl;
	}
	else
	{
		Hitpoints = Hitpoints - amount;
		std::cout << "ClapTrap " << name << " sofre " << amount << " pontos de dano! Pontos de vida restantes: " << Hitpoints << std::endl;
	}
	
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(Hitpoints == 0 || Energypoints  ==  0)
	{
		std::cout << "nao tens pontos de vida ou de enrgia para atackar " << std::endl;
		std::cout << "ClapTrap " << name << "tens " << Hitpoints << " pontos de vida" << std::endl;
		std::cout << "ClapTrap " << name << "tens " << Energypoints << " pontos de Energia" << std::endl;
		return ;
		
	}
	else
	{
		Hitpoints = Hitpoints + amount;
		Energypoints = Energypoints - 1;
		std::cout << "ClapTrap " << name << " se repara em " << amount << " pontos. Vida: " << Hitpoints << ", Energia: " << Energypoints << std::endl;
	}
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " - Destrutor chamado." << std::endl;
}

std::string	ClapTrap::getName()
{
	return(name);
}
unsigned int	ClapTrap::getHitpoints()const
{
	return(Hitpoints);
}

unsigned int	ClapTrap::getEnergypoints()const
{
	return(Energypoints);
}

unsigned int	ClapTrap::getAttackdamage()const
{
	return(Attackdamage);
}
