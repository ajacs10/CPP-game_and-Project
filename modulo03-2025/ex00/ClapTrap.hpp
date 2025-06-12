/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:17:25 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/31 17:17:26 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string	name;
		unsigned int	Hitpoints;
		unsigned int	Energypoints;
		unsigned int	Attackdamage;
		
	public:
	ClapTrap();
	ClapTrap(const ClapTrap& Bazinga);
	ClapTrap& operator=(const ClapTrap& Bazinga);
	ClapTrap(std::string& name);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	std::string	getName();
	unsigned int	getHitpoints()const;
	unsigned int	getEnergypoints()const;
	unsigned int	getAttackdamage()const;
	
	~ClapTrap();
};

#endif
