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

#include  "FragTrap.hpp"


int main()
{
    std::cout << "\n############### INÍCIO DOS TESTES ###############" << std::endl;
    std::cout << "CLAPTRAP " << std::endl;
    std::cout << std::endl;

    ClapTrap morty("Morty ");
    
    std::cout << "Status: " << morty.getName() << std::endl;
    std::cout << " Ponto de Vida: " << morty.getHitpoints() << std::endl;
    std::cout << " Ponto de Energia: " << morty.getEnergypoints() << std::endl;
    std:: cout << " Dano: " << morty.getAttackdamage() << std::endl;

    std::cout << "\n Mortyataca e se repara:" << std::endl;
    morty.attack("Um Cronenberguinho");
    morty.beRepaired(2);
    std::cout << "Status: " << morty.getName() << " Ponto de Vida: " << morty.getHitpoints()
              << " Ponto de Energia: " << morty.getEnergypoints() << std::endl;

    std::cout << "\nMorty  tomando muito dano:" << std::endl;
    morty.takeDamage(15);
    std::cout << "Status: " << morty.getName() << " Ponto de Vida: " << morty.getHitpoints()
              << " Ponto de Energia: " << morty.getEnergypoints() << std::endl;
    morty.attack("Nada");
    morty.beRepaired(1);

    std::cout << "\nCriando ClapTrap Jerry  de cópia de Morty :" << std::endl;
    ClapTrap jerry = morty;
    std::cout << "Status: " << jerry.getName() << " Ponto de Vida: " << jerry.getHitpoints()
              << " Ponto de Energia: " << jerry.getEnergypoints() << " Dano: " << jerry.getAttackdamage() << std::endl;
    
    std::cout << "\nCriando ClapTrap Beth e atribuindo Morty :" << std::endl;
    ClapTrap beth("Beth");
    beth = morty;
    std::cout << "Status: " << beth.getName() << " Ponto de Vida: " << beth.getHitpoints()
              << " Ponto de Energia: " << beth.getEnergypoints() << " Dano: " << beth.getAttackdamage() << std::endl;

    std::cout << "\n--- FIM DOS TESTES CLAPTRAP ---\n" << std::endl;

    std::cout << "\nSCAVTRAP" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Criando ScavTrap Guardião do Conserto:" << std::endl;
    ScavTrap conserto("Guardião do Conserto");
    std::cout << "Status: " << conserto.getName() << " Ponto de Vida: " << conserto.getHitpoints()
              << " Ponto de Energia: " << conserto.getEnergypoints() << " Dano: " << conserto.getAttackdamage() << std::endl;

    std::cout << "\n Guardião do Conserto ataca e usa habilidade especial:" << std::endl;
    conserto.attack("Um Meeseeks Inútil");
    conserto.guardGate();
    std::cout << "Status: " << conserto.getName() << " Ponto de Vida: " << conserto.getHitpoints()
              << " Ponto de Energia: " << conserto.getEnergypoints() << std::endl;

    std::cout << "\n Guardião do Conserto toma dano e repara:" << std::endl;
    conserto.takeDamage(40);
    conserto.beRepaired(20);
    std::cout << "Status: " << conserto.getName() << " Ponto de Vida: " << conserto.getHitpoints()
              << " Ponto de Energia: " << conserto.getEnergypoints() << std::endl;

    std::cout << "\nCriando ScavTrap Unity (cópia de Guardião do Conserto):" << std::endl;
    ScavTrap unity = conserto;
    std::cout << "Status: " << unity.getName() << " Ponto de Vida: " << unity.getHitpoints()
              << " Ponto de Energia: " << unity.getEnergypoints() << " Dano: " << unity.getAttackdamage() << std::endl;
    
    std::cout << "\n--- FIM DOS TESTES SCAVTRAP ---\n" << std::endl;

    std::cout << "\nFRAGTRAP" << std::endl;
    std::cout << "Criando FragTrap Rick Furioso:" << std::endl;
    FragTrap rickFurioso("Rick Furioso");
    std::cout << "Status: " << rickFurioso.getName() << " Ponto de Vida: " << rickFurioso.getHitpoints()
              << " Ponto de Energia: " << rickFurioso.getEnergypoints() << " Dano: " << rickFurioso.getAttackdamage() << std::endl;

    std::cout << "\n Rick Furioso ataca e usa habilidade especial:" << std::endl;
    rickFurioso.attack("Squanchy Desprevenido");
    rickFurioso.highFivesGuys();
    std::cout << "Status: " << rickFurioso.getName() << " Ponto de Vida: " << rickFurioso.getHitpoints()
              << " Ponto de Energia: " << rickFurioso.getEnergypoints() << std::endl;

    std::cout << "\n Rick Furioso toma dano e repara:" << std::endl;
    rickFurioso.takeDamage(70);
    rickFurioso.beRepaired(50);
    std::cout << "Status: " << rickFurioso.getName() << " Ponto de Vida: " << rickFurioso.getHitpoints()
              << " Ponto de Energia: " << rickFurioso.getEnergypoints() << std::endl;

    std::cout << "\nCriando FragTrap Birdperson cópia de Rick Furioso:" << std::endl;
    FragTrap birdperson = rickFurioso;
    std::cout << "Status: " << birdperson.getName() << " Ponto de Vida: " << birdperson.getHitpoints()
              << " Ponto de Energia: " << birdperson.getEnergypoints() << " Dano: " << birdperson.getAttackdamage() << std::endl;
    
    std::cout << "\n--- FIM DOS TESTES FRAGTRAP ---\n" << std::endl;

    std::cout << "\n############### FIM DE TODOS OS TESTES ###############" << std::endl;
    
    return 0;
}
