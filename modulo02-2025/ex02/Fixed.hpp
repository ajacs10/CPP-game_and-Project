/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:09:59 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/02 16:20:20 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int valor;
		static const int fractionalbits = 8;
	public:
		Fixed();
		Fixed(const Fixed& bazinga);
		Fixed& operator=(const Fixed& bazinga);
		Fixed(const int bazinga);
		Fixed(const float bazinga);
		 
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		int toInt()const;
		float toFloat()const;
		
		bool operator>(const Fixed &bazinga)const;
		bool operator<(const Fixed &bazinga)const;
		bool operator<=(const Fixed &bazinga)const;
		bool operator>=(const Fixed &bazinga)const;
		bool operator==(const Fixed &bazinga)const;
		bool operator!=(const Fixed &bazinga)const;
		
		Fixed operator+(const Fixed &bazinga)const;
		Fixed operator-(const Fixed &bazinga)const;
		Fixed operator*(const Fixed &bazinga)const;
		Fixed operator/(const Fixed &bazinga)const;
		
		Fixed operator++(int);
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator--(int);
		
		
		static Fixed &max(Fixed &bazinga,Fixed &bazingadas);
		static const Fixed &max(const Fixed &bazinga,const Fixed &bazingadas);
		static Fixed &min(Fixed &bazinga,Fixed &bazingadas);
		static const Fixed &min(const Fixed &bazinga,const Fixed &bazingadas);
		
	
		
		~Fixed();	
};

std::ostream& operator<<(std::ostream& saida, const Fixed& bazinga);

#endif
