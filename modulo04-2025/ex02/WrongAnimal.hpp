/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:36:49 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 18:36:50 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& bazinga);
	WrongAnimal& operator= (const WrongAnimal& bazinga);
	
	const std::string& getType()const;
	void makeSound() const;
	~WrongAnimal();
};
#endif
