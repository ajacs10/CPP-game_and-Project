/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:09:54 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/02 16:20:12 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp" 

Fixed::Fixed()
{
    this->valor = 0;
   
}

Fixed::Fixed(const Fixed& bazinga)
{
    this->valor = bazinga.valor; 
}

Fixed& Fixed::operator =(const Fixed& bazinga)
{
    
    if (this == &bazinga)
    {
        return(*this);
    }
    this->valor = bazinga.valor;
    
    return(*this);
}

Fixed::Fixed(const int bazinga)
{
    this->valor = bazinga << Fixed::fractionalbits;
}

Fixed::Fixed(const float bazinga)
{
    
    static const int escala = (1 << Fixed::fractionalbits);
    
    float result_escala = bazinga * static_cast<float>(escala);

    this->valor = static_cast<int>(roundf(result_escala));
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
    return (this->valor);
}

void Fixed::setRawBits( int const raw )
{
    this->valor = raw;
}


std::ostream& operator<<(std::ostream& saida, const Fixed& bazinga)
{
    saida << bazinga.toFloat();
    return saida;
}

bool Fixed::operator>(const Fixed &bazinga)const
{
	return(valor > bazinga.valor);
}

bool Fixed::operator<(const Fixed &bazinga)const
{
	return(valor < bazinga.valor);
}

bool Fixed::operator<=(const Fixed &bazinga)const
{
	return(valor >= bazinga.valor);
}
bool Fixed::operator>=(const Fixed &bazinga)const
{
	return(valor >= bazinga.valor);
}
bool Fixed::operator==(const Fixed &bazinga)const
{
	return(valor == bazinga.valor);
}
bool Fixed::operator!=(const Fixed &bazinga)const
{
	return(valor != bazinga.valor);
}
		
Fixed Fixed::operator+(const Fixed &bazinga)const
{
	return Fixed(this->toFloat() + bazinga.toFloat());
}

Fixed Fixed::operator-(const Fixed &bazinga)const
{	
	return Fixed(this->toFloat() - bazinga.toFloat());
}

Fixed Fixed::operator*(const Fixed &bazinga)const
{
	return Fixed(this->toFloat() * bazinga.toFloat());
}

Fixed Fixed::operator/(const Fixed &bazinga)const
{
	return Fixed(this->toFloat() / bazinga.toFloat());
}
		
Fixed Fixed::operator++(int)
{
	Fixed depois(*this);
	++valor;
	return(depois);
}

Fixed &Fixed::operator++()
{
	++valor;
	return(*this);
}

Fixed &Fixed::operator--()
{
	--valor;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed antes(*this);
	--valor;
	return(antes);
}
				
Fixed &Fixed::max(Fixed &bazinga,Fixed &bazingadas)
{
	if(bazinga > bazingadas)
		return(bazinga);
	return(bazingadas);
}

const Fixed &Fixed::max(const Fixed &bazinga,const Fixed &bazingadas)
{
	
	if(bazinga > bazingadas)
		return(bazinga);
	return(bazingadas);
}

Fixed &Fixed::min(Fixed &bazinga,Fixed &bazingadas)
{
	
	if(bazinga  < bazingadas)
		return(bazinga);
	return(bazingadas);
	
}
const Fixed &Fixed::min(const Fixed &bazinga,const Fixed &bazingadas)
{
	
	if(bazinga < bazingadas)
		return(bazinga);
	return(bazingadas);
}

Fixed::~Fixed()
{
}
	

