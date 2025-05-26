/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:02:14 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:38:17 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>


#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define WHITE   "\033[1;37m"

int main() 
{
	std::cout << std::endl;
    std::cout << BLUE << "###### LUTA ENTRE DOIS HUMANOS SEM JUÍZO ######" << RESET << std::endl;
	std::cout << std::endl;

    Weapon codeTiros(std::string(RED) + "Sabre de Luz" + RESET);


    std::cout << GREEN << "Essa é a primeira sem juízo, a tal Humana A !" << RESET << std::endl;
	std::cout << std::endl;

    HumanA Ana("asobrinh", codeTiros);
    Ana.attack();  
    std::cout << BLUE << "ela pegou uma arma nem sei se sabe usar!" << RESET << std::endl;
     std::cout << std::endl;

    codeTiros.setType(std::string(YELLOW) + "Motoserra" + RESET);
    Ana.attack(); 
    std::cout << BLUE << "Essa tipo veja bwe de anime, na luta foi mais trocar de arma!" << RESET << std::endl;
     std::cout << std::endl;

	std::cout << std::endl;

	std::cout << MAGENTA << "Essa é outra sem juízo, que entrou na Luta a tal Humana B !" << RESET << std::endl;
	std::cout << std::endl;

    HumanB Engracia("Enobrega");
    Engracia.setWeapon(codeTiros);  
    Engracia.attack();
    
    std::cout << BLUE << "ela pegou da outra txé!" << RESET << std::endl;
     std::cout << std::endl;

    codeTiros.setType(std::string(CYAN) + "espada Sagrada do Deus Da Guerra" + RESET);
    Engracia.attack();
    
     std::cout << BLUE << "viu que nao estava a lhe cuiar, trocou !" << RESET << std::endl;
     std::cout << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW << "###### FIM DA LUTA ######" << RESET << std::endl;
	std::cout << std::endl;

    return 0;
}

