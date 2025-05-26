/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:01:00 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:36:58 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std:: string name;
public:
	Zombie();
	void announce(void);
	void setName(std::string name);
	~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif

