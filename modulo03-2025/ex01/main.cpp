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

int main() {
    std::cout << std::endl;

    std::cout << "########2002####### TESTES SCAVTRAP HERANÇA #######12#####07###" << std::endl << std::endl;

    std::cout << "ScavTrap Juliana Dcosta" << std::endl;
    std::string julianaName = "Juliana Dacosta";
    std::cout << std::endl;
    
    ScavTrap juliana(julianaName);

    std::cout << "\n Status Inicial de " << juliana.getName() << ":" << std::endl;
    std::cout << "Vida: " << juliana.getHitpoints() << ", Energia: " << juliana.getEnergypoints() << ", Dano: " << juliana.getAttackdamage() << std::endl;

    std::cout << "\n" << juliana.getName() << " atacando Dano esperado = 20:" << std::endl;
    juliana.attack("Gangue de Bandidos do reino das fadas");
    std::cout << std::endl;
    std::cout << "Status após ataque de " << juliana.getName() << ":" << std::endl;
    std::cout << "Vida: " << juliana.getHitpoints() << ", Energia: " << juliana.getEnergypoints() << std::endl;
    std::cout << std::endl;
    
    juliana.takeDamage(25);
    std::cout << "Status após dano de " << juliana.getName() << ":" << std::endl;
    std::cout << "Vida: " << juliana.getHitpoints() << ", Energia: " << juliana.getEnergypoints() << std::endl;

    std::cout << "\n" << juliana.getName() << " se reparando... :" << std::endl;
    juliana.beRepaired(10);
    std::cout << "Status após reparo de " << juliana.getName() << ":" << std::endl;
    std::cout << "Vida: " << juliana.getHitpoints() << ", Energia: " << juliana.getEnergypoints() << std::endl;

    std::cout << "\n" << juliana.getName() << " ativando o modo Guardião do Portão:" << std::endl;
    juliana.guardGate();
    std::cout << std::endl;

    std::cout << "ScavTrap ajacs Cópia de Juliana Dcosta " << std::endl;
    ScavTrap ajacs(juliana);

    std::cout << "\n Status Inicial de " << ajacs.getName() << " (cópia de " << juliana.getName() << "):" << std::endl;
    std::cout << "Vida: " << ajacs.getHitpoints() << ", Energia: " << ajacs.getEnergypoints() << ", Dano: " << ajacs.getAttackdamage() << std::endl;

    ajacs.attack("Inimigo Copiado");
    ajacs.takeDamage(50);
    ajacs.beRepaired(20);
    std::cout << "Status após ações de " << ajacs.getName() << ":" << std::endl;
    std::cout << "Vida: " << ajacs.getHitpoints() << ", Energia: " << ajacs.getEnergypoints() << std::endl;
    std::cout << std::endl;

    std::cout << "--- Cenário 2.3: ScavTrap 'bazinga' (Operador de Atribuição) ---" << std::endl;
    std::string bazingaName = "bazinga";
    
    ScavTrap bazinga(bazingaName);

    std::cout << "\nStatus Inicial de " << bazinga.getName() << ":" << std::endl;
    std::cout << "Vida: " << bazinga.getHitpoints() << ", Energia: " << bazinga.getEnergypoints() << ", Dano: " << bazinga.getAttackdamage() << std::endl;

    std::cout << "\nAtribuindo juliana a bazinga (bazinga = juliana):" << std::endl;
    bazinga = juliana;

    std::cout << "\n Status de " << bazinga.getName() << " após atribuição deve ser como juliana:" << std::endl;
    std::cout << "Vida: " << bazinga.getHitpoints() << ", Energia: " << bazinga.getEnergypoints() << ", Dano: " << bazinga.getAttackdamage() << std::endl;
    std::cout << std::endl;
    bazinga.attack(" Alvo Atribuido");
    bazinga.guardGate();
    std::cout << std::endl;

    std::cout << "############### FIM DOS TESTES ###############" << std::endl << std::endl;

    return 0;
}


