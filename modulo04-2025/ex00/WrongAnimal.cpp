/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:36:41 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 18:36:43 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Construtor WrongAnimal: Um ser errado surgiu... parece que nao foi bem planejado. Que estranho..." << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
    std::cout << "Construtor de copia WrongAnimal: Um animal errado foi copiado." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Operador de atribuicao WrongAnimal: Atribuindo um animal errado." << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

const std::string& WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
   std::cout << "Animal som genérico errado." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal o pior aconteceu estou morrendo !" << std::endl;

}
