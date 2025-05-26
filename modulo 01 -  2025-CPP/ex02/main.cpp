/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:34:26 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:37:20 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	Bazinga;
	Bazinga = "HI THIS IS BRAIN";
	
	std::string	*stringPTR  =  &Bazinga; 
	std::string	&stringREF = Bazinga;
	

	std::cout << "Endereço da string Bazinga       : " << &Bazinga << std::endl;
	std::cout << "Endereço apontado por stringPTR  : " << stringPTR << std::endl;
	std::cout << "Endereço referenciado por stringREF: " << &stringREF << std::endl;

	std::cout << "Valor da string Bazinga          : " << Bazinga << std::endl;
	std::cout << "Valor apontado por stringPTR     : " << *stringPTR << std::endl;
	std::cout << "Valor referenciado por stringREF : " << stringREF << std::endl;

	return (0);
}

