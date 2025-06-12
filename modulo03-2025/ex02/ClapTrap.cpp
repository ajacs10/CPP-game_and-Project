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

ClapTrap::ClapTrap()
{
	std::cout << "construtor defaut chamado" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& bazinga):
name(bazinga.name),
Hitpoints(bazinga.Hitpoints),
Energypoints(bazinga.Energypoints),
Attackdamage(bazinga.Attackdamage)
{
	std::cout << "construtor de copia chamado" << std::endl;
} 

ClapTrap& ClapTrap::operator=(const ClapTrap& bazinga)
{
	std::cout << "construtor de atribuicao chamado " << std::endl;
	
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
	std::cout << "construtor ClapTrap de inicializacao chamado " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(Hitpoints == 0 || Energypoints == 0)
	{
		std::cout << "nao tens pontos de vida ou de enrgia para atackar " << std::endl;
		std::cout << "ClapTrap " << name << "tens " << Hitpoints << " pontos de vida" << std::endl;
		std::cout << "ClapTrap " << name << "tens " << Energypoints << " pontos de Energia" << std::endl;
		return ;
	}
	else
	{
		Energypoints = Energypoints -1;
		
		std::cout<< " ClapTrap " << name << " attacks " << target << " , causing " << Attackdamage << " points of damage!" <<std::endl; 
		
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(Hitpoints == 0)
	{
		
		
		std::cout << "ClapTrap " << name << "tens " << Hitpoints << " pontos de vida" << std::endl;
		return;
	}
	if(amount >= Hitpoints)
	{
		Hitpoints = 0;
		 std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and is now out of hitpoints!" << std::endl;
	}
	else
	{
		Hitpoints = Hitpoints - amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Hitpoints restantes: " << Hitpoints << std::endl;
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
		Energypoints = Energypoints -1;
		std::cout << "ClapTrap " << name << " se repara em " << amount << " pontos. Vida: " << Hitpoints << ", Energia: " << Energypoints << std::endl;
	}
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

ClapTrap::~ClapTrap()
{
	 std::cout << this->name << " ClapTrap destructor called: sempre que existir um comeco havera fim!" << std::endl;
}
