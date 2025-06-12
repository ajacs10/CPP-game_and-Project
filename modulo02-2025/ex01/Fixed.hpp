/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:09:59 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/02 16:19:40 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int valor;
		static const int fractionalbits = 8;
	public:
		Fixed();
		Fixed(const Fixed& bazinga);
		Fixed& operator =(const Fixed& bazinga);
		Fixed(const int bazinga);
		Fixed(const float bazinga);
		 
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		int toInt()const;
		float toFloat()const;
		~Fixed();	
};

std::ostream& operator<<(std::ostream& saida, const Fixed& bazinga);

#endif
