/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:25:29 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 17:25:30 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	std::cout << "Construtor Cat: Grrr, mais um dia de liberdade! Plagg esta na area! Onde esta o queijo?" << std::endl;
}

Cat::Cat(const Cat& bazinga): Animal(bazinga)
{
	std::cout << "consrutor de copia chamado do cat " << std::endl;

}

Cat& Cat::operator=(const Cat& bazinga)
{
	std::cout << "construtor de atribuicao chamado para Cat" << std::endl;
	if(this != &bazinga)
	{
		Animal::operator=(bazinga);
	}
	return(*this);
}
	
const std::string& Cat::getType()const
{
	return(this->type);
}
Cat::~Cat()
{
	 std::cout << "Cat: O queijo... acabou? Plagg esta de saida! Ate a proxima transformacao!" << std::endl;
}
void Cat::makeSound() const
{
 std::cout << "Miau! "<< std::endl;
}
