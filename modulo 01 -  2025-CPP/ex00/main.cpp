/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:16:48 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:35:39 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define RESET   "\033[0m"
#define BLUE    "\033[1;34m"
#define PINK    "\033[1;35m"
#define CYAN    "\033[1;36m"
#define YELLOW  "\033[1;33m"
#define GREEN   "\033[1;32m"
#define RED     "\033[1;31m"

int main()
{
    std::cout << CYAN << "##########################" << RESET << std::endl;
    std::cout << CYAN << "## Bazinga Zombie heap ##" << RESET << std::endl;
    std::cout << CYAN << "##########################" << RESET << std::endl;
    
    std::cout << std::endl;
    std::cout << std::endl;   
    
    Zombie* BazingaZombie = newZombie("Bazinga");
    BazingaZombie->announce();
   
    delete BazingaZombie;

    std::cout << std::endl;
    std::cout << std::endl; 

    std::cout << CYAN << "#############################" << RESET << std::endl;
    std::cout << CYAN << "## Bazinga Zombie na pilha ##" << RESET << std::endl;
    std::cout << CYAN << "#############################" << RESET << std::endl;

    std::cout << std::endl; 


    randomChump("Ana");

    return 0;
}

