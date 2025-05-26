/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:17:04 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:36:11 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce( void)
{
	std:: cout  << name << " : BraiiiiiiinnnzzzZ... " <<  std::endl;
}

Zombie::~Zombie()
{
	std:: cout << name << " : destroyed" << std::endl; 
}
