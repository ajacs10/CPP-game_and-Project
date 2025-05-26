/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:00:13 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:36:28 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(int argc, char **argv)
{ 
	int	N;
	int	wyconta;
	std::string	name;
	
	
	
	std::cout << "Bazinga Horda Zombie"<< std::endl;
	std::cout <<std::endl;
	if (argc != 2)
	{
		std::cout << "use cadete: ./Zombie and nome" << std::endl;
		return (1);
	}
	
	N = 100;
	name   = argv[1];
	Zombie *BazingaHorda = zombieHorde(N, name);

	if (!BazingaHorda)
	{
		std::cout << "Bazinga: não foi possível criar a horda de zumbis!" << std::endl;
		return (1);
	}

	wyconta = 0;
	while (wyconta < N)
	{
		BazingaHorda[wyconta].announce();
		std::cout <<std::endl;
		wyconta++;
	}

	delete[] BazingaHorda;
	return 0;
}

