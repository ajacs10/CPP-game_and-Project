/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:09:54 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/02 16:19:34 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp" 

Fixed::Fixed()
{
    std::cout << "Construtor default chamado" << std::endl;
    this->valor = 0;
   
}

Fixed::Fixed(const Fixed& bazinga)
{
    std::cout << "Construtor de copia chamado" << std::endl;
    this->valor = bazinga.valor; 
}

Fixed& Fixed::operator =(const Fixed& bazinga)
{
    std::cout << "Operador de atribuicao de objeto chamado" << std::endl;
    
    if (this == &bazinga)
    {
        return(*this);
    }
    this->valor = bazinga.valor;
    
    return(*this);
}

Fixed::Fixed(const int bazinga)
{
    std::cout << "Construtor int chamado " << std::endl;
    this->valor = bazinga << Fixed::fractionalbits;
}

Fixed::Fixed(const float bazinga)
{
    std::cout << "Construtor float chamado " << std::endl;
    
    static const int escala = (1 << Fixed::fractionalbits);
    
    float result_escala = bazinga * static_cast<float>(escala);

    this->valor = static_cast<int>(result_escala);
}

float Fixed::toFloat()const
{
    static const int escala = (1 << Fixed::fractionalbits);
    return(static_cast<float>(this->valor) / static_cast<float>(escala));
}

int Fixed::toInt()const
{
    return this->valor >> Fixed::fractionalbits;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "funcao getRawBits chamada" << std::endl;
    return (this->valor);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "funcao setRawBits chamada" << std::endl;
    this->valor = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destrutor chamado  "  << std::endl;
}

std::ostream& operator<<(std::ostream& saida, const Fixed& bazinga)
{
    saida << bazinga.toFloat();
    return saida;
}
	
	
	
	
	
	
	

