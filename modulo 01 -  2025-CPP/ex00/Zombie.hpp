/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:17:12 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/08 11:17:14 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOOMBIE_HPP
#define ZOOMBIE_HPP

#include <iostream>



class Zombie
{
private:
	
	std:: string name;
public:
	Zombie(std::string name);
	void announce( void);
		
	~Zombie();
	
};


void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
