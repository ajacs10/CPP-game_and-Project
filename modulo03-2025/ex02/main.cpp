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

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n--- Teste Básico ClapTrap ---" << std::endl;
    ClapTrap claptrap("Ana Sobrinho");
    claptrap.attack("um inimigo");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    std::cout << "\n--- Teste Básico ScavTrap ---" << std::endl;
    ScavTrap scavtrap("McDebug");
    scavtrap.attack("um intruso");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(3);
    scavtrap.guardGate();

    std::cout << "\n--- Teste Básico FragTrap ---" << std::endl;
    FragTrap fragtrap("AJACS");
    fragtrap.attack("um alvo distante");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(3);
    fragtrap.highFivesGuys();

    std::cout << "\n--- Fim dos Testes Básicos ---" << std::endl;
    return 0;
}
