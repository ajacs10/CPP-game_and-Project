/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:09:08 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 17:09:09 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
	Animal();
	Animal(const Animal& bazinga);
	Animal& operator= (const Animal& bazinga);
	
	virtual const std::string& getType()const;
	virtual void makeSound() const;
	virtual~Animal();
};
#endif

