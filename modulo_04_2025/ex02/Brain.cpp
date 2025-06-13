/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:38:39 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 18:38:40 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	int	Wyconta;
	
	Wyconta = 0;
	
	while(Wyconta < 100)
	{
		std::stringstream	bazinga;
		
		bazinga << Wyconta;
		this->ideias[Wyconta] = "Helo Ana Tas bem ? " +  bazinga.str();
		Wyconta++;
	}
	std::cout << "Construtor padrao Brain chamado , que cerebro lindo criado! " << std::endl;
}
Brain::Brain(const Brain& bazinga)
{
	int	Wyconta;
	
	Wyconta = 0;
	
	while(Wyconta < 100)
	{
		this->ideias[Wyconta] = bazinga.ideias[Wyconta];
		Wyconta++;
	}
	std::cout << "Brain Um cerebro foi clonado! Ops, agora somos dois!" << std::endl;
}
Brain& Brain::operator=(const Brain& bazinga)
{
	std::cout << "Brain Um cerebro foi atribuido ! Ops, agora somos iguais!" << std::endl;
	if(this != &bazinga)
	{
		int	Wyconta;
		
		Wyconta = 0;
		while(Wyconta < 100)
		{
			this->ideias[Wyconta] = bazinga.ideias[Wyconta];
			Wyconta++;
		}
	}
	return(*this);
}
std::string Brain::getIdea(int indice) const
{
	if(indice >= 0 && indice < 100)
	{
		return(this->ideias[indice]);
	}
	else
	{
		std::cout << "indice invalido nao podemos adicionar sua ideia "<< indice << std::endl;
		return ("");
	}
	
}
void Brain::setIdea(int indice, const std::string& ideia)
{
	if(indice >= 0 && indice < 100 )
	{
		this->ideias[indice] = ideia;
	}
	else 
	{
		std::cout << "indice errado e estas sem ideia " << std::endl;
	}
}
Brain::~Brain()
{
	std::cout << "cerebro destruido (Barin)" << std::endl;
}
