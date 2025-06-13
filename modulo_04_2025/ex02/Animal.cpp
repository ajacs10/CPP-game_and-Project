/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:08:56 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 17:08:58 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Construtor Animal, Um novo ser acaba de aparecer no Reino de Ooo! Ele eh bem basico ainda" << std::endl;
}
Animal::Animal(const Animal& bazinga): type (bazinga.type)
{
	std::cout << "construto de copia  Animal chamado" << getType() << std::endl;
}
Animal& Animal::operator= (const Animal& bazinga)
{
	std::cout << "construto de atribuicao de Animal chamado " << getType() << std::endl;
	
	if(this != &bazinga)
	{
		this->type = bazinga.type;
	}
	return(*this);
}
	
const std::string& Animal::getType()const
{
	return(this->type);
}
Animal::~Animal()
{
	 std::cout << "Animal  parece que minha aventura aqui chegou ao fim. Pronto pra uma soneca eterna?" << std::endl;
}
