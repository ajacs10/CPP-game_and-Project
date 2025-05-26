/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:03:41 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 15:03:46 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int arguments(int ac, char **av)
{	
	std::string file_name;
	std::string str1;
	std::string str2;
	
	if (ac != 4)
	{
		std::cerr << "Erro: Use cadete: " << av[0] << " [ficheiro] [s1 a substituir] [s2 para substituir]" << std::endl;
		return 1;	
	}
	file_name = av[1];
	str1 = av[2];
	str2 = av[3];
	
	bazingareplica(file_name, str1, str2);
	
	return 0;
}
