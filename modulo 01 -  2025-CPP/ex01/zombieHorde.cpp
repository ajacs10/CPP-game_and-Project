/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:00:46 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:36:50 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N,std::string name)
{
	int	wyconta;
	
	wyconta = 0;
	if (N <= 0)
	{
		std::cout << "Bazinga: nenhum zombie!" << std::endl;
	}

	Zombie* HordeBazingaZombie = new Zombie[N]; 
	
	while(wyconta < N)
	{
		HordeBazingaZombie[wyconta].setName(name);
		
		wyconta++;
	}
	
	return (HordeBazingaZombie); 
}

