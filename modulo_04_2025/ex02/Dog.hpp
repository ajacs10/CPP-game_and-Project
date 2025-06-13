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
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* Bazingabrain;
	public:
	Dog();
	Dog(const Dog& bazinga);
	Dog& operator= (const Dog& bazinga);
	
	const std::string& getType()const;
	void makeSound() const;
	
	Brain* getBazingabrain() const;
	
	 ~Dog();
};

#endif
