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

#include  "ClapTrap.hpp"


int main() 
{
   std::cout << std::endl;
    ClapTrap mcDebugClap;
    std::cout << std::endl;

    std::string username = "Ana Sobrinho";
    ClapTrap ajacs(username);
    std::cout << std::endl;
  
    std::cout << "--- Ana Sobrinho ataca ---" << std::endl;
    mcDebugClap.attack("a vilão");
    std::cout << std::endl;
    
    std::cout << "--- Ana Sobrinho recebe dano ---" << std::endl;
    mcDebugClap.takeDamage(9);
    std::cout << std::endl;

    std::cout << "--- Ana Sobrinho se repara ---" << std::endl;
    mcDebugClap.beRepaired(3);
    std::cout << std::endl;

    return 0;
}
