/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:14:57 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/02 16:19:06 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED

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
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int esquerda()const;
		int direita ()const;
		~Fixed();	
};

#endif
