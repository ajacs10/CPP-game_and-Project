/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:25:37 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 17:25:38 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() 
{
	this->type = "Dog";
	std::cout << "Construtor Dog: Que loucura! Jake, o cao, chegou na area! Pronto para esticar as pernas" << std::endl;
}

Dog::Dog(const Dog& bazinga) : Animal(bazinga)
{
	std::cout << "construtor copia para Dog" << std::endl;
}

Dog& Dog::operator= (const Dog& bazinga)
{
	std::cout << "construtor de atribuicao chamado para Dog" << std::endl;
	
	if(this != &bazinga)
	{
		Animal::operator=(bazinga);
	}
	return(*this);
}
	
const std::string& Dog::getType() const
{
	return(this->type);
}
void Dog::makeSound() const
{
	std::cout<< "Auu Auu!" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog Ugh, meu recheio ta vazando! Hora de virar lanche de fantasma. Jake, o Cão, sentindo o fim" << std::endl;

}
