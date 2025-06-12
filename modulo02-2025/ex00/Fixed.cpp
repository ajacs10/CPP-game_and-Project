/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:14:39 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/02 16:19:00 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->valor = 0;
	std::cout << "construtor  defaut chamado  "<< std::endl;
	
}
Fixed::Fixed(const Fixed& bazinga)
{
	std::cout << "construtor copia chamado  "<<std::endl;
	valor = bazinga.valor; 
}

Fixed&  Fixed::operator =(const Fixed& bazinga)
{
	std::cout << "construtor de atribuição de objeto  chamado" << std::endl;
	
	if (this == &bazinga)
	{
		return(*this);
	}
	this->valor = bazinga.valor;
	
	if(this->fractionalbits >= 0 && this->fractionalbits < (int)((sizeof(int) * 8)))
	{
		std::cout << "passa o tamanho de um int (int possue 32 bits que sao 4bytes)" << valor << std::endl;
	}
	return(*this);
}


int Fixed::getRawBits( void ) const
{
	std::cout << "funcao getRawBits chamada " << std::endl;

	return (this->valor);
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "funcao setRawBits chamada " << std::endl;
	this->valor = raw;
}
Fixed::~Fixed()
{
	std::cout << "detrutor chamado "  <<std::endl;
}	

