/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:17:01 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/31 17:17:03 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ScavTrap.hpp"


int main() 
{
    std::cout << std::endl;
    ScavTrap mcDebugScav;
    std::cout << std::endl;

    std::string username = "Ana Sobrinho";
    ScavTrap anaScav(username);
    std::cout << std::endl;

    std::cout << "--- Ana Sobrinho ataca ---" << std::endl;
    mcDebugScav.attack("o alvo principal");
    std::cout << std::endl;

    std::cout << "--- Ana Sobrinho recebe dano ---" << std::endl;
    mcDebugScav.takeDamage(15);
    std::cout << std::endl;

    std::cout << "--- Ana Sobrinho se repara ---" << std::endl;
    mcDebugScav.beRepaired(5);
    std::cout << std::endl;

    std::cout << "--- Ana Sobrinho entra no modo Guardião do Portão ---" << std::endl;
    mcDebugScav.guardGate();
    std::cout << std::endl;

    return 0;
}

