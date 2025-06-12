/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:24:51 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 17:24:53 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	public:
	Dog();
	Dog(const Dog& bazinga);
	Dog& operator= (const Dog& bazinga);
	
	virtual const std::string& getType()const;
	virtual void makeSound() const;
	virtual ~Dog();
};
#endif
