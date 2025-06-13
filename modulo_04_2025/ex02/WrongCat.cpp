/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:36:22 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 18:36:24 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->type = "Wrong Cat";
	std::cout << "Construtor WrongCat: O Gato Felix errado deu as caras! Ainda sem o saco magico" << std::endl;
}

WrongCat::WrongCat(const WrongCat& bazinga): WrongAnimal(bazinga)
{
	std::cout << "consrutor de copia chamado de WrongCat" << std::endl;

}

WrongCat& WrongCat::operator=(const WrongCat& bazinga)
{
	std::cout << "construtor de atribuicao chamado para WrongCat" << std::endl;
	if(this != &bazinga)
	{
		WrongAnimal::operator=(bazinga);
	}
	return(*this);
}
	
const std::string& WrongCat::getType() const
{
	return(this->type);
}
WrongCat::~WrongCat()
{
	 std::cout << "WrongCat: Minhas sete vidas acabaram. Ate mais! O Gato Felix perdeu o saco mágico" << std::endl;
}
void WrongCat::makeSound() const
{
	 std::cout << "Miau" << std::endl;
}
