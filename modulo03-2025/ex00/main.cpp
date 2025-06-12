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
    std::cout << "###2002#12#07#02##  CLAP TRAP ###2002#12#07#02" << std::endl << std::endl;
    std::cout << std::endl;

    std::cout << "--- primeiro teste  ClapTrap Ana Sobrinho ---" << std::endl;
    std::cout << std::endl;
    std::string Name = " Ana Sobrinho ";
    ClapTrap ana(Name);

    std::cout << "\nStatus Inicial de " << ana.getName() << ":" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Vida: " << ana.getHitpoints() << std::endl;
    std::cout << "Energia: " << ana.getEnergypoints() << std::endl;
    std::cout << "Dano de Ataque: " << ana.getAttackdamage() << std::endl;

    std::cout << "\n" << ana.getName() << " Atacando um alvo sabendo que AttackDamage padrão = 0" << std::endl;
    std::cout << std::endl;
    
    ana.attack("Muro na cara");
    std::cout << std::endl;
    ana.attack("Muro no estomago");

    std::cout << "\n" << ana.getName() << " tentará reparar-se repara 3 pontos de vida, gasta 1 ponto de energia:" << std::endl;
    std::cout<<std::endl;
    
    ana.beRepaired(3);
    std::cout << "Status após reparo de " << ana.getName() << ":" << std::endl;
    std::cout << "Vida: " << ana.getHitpoints() << std::endl;
    std::cout << "Energia: " << ana.getEnergypoints() << std::endl;
    std::cout << std::endl;
    
    

    std::cout << " Segundo teste ClapTrap Juliana Dacosta ---" << std::endl;
    std::cout << std::endl;
    
    std::string NameJuliana = " Juliana Dacosta ";
    ClapTrap juliana(NameJuliana);

    std::cout << "\nStatus Inicial de " << juliana.getName() << ":" << std::endl;
    std::cout << "Vida: " << juliana.getHitpoints() << std::endl;
    std::cout << "Energia: " << juliana.getEnergypoints() << std::endl;
    std::cout << "Dano de Ataque: " << juliana.getAttackdamage() << std::endl;
    std::cout << std::endl;
    
    juliana.attack(" Inimigo  ");
    juliana.takeDamage(5);
    juliana.beRepaired(2);
    
    std::cout << "Status após ações de " << juliana.getName() << ":" << std::endl;
    std::cout << "Vida: " << juliana.getHitpoints() << std::endl;
    std::cout << "Energia: " << juliana.getEnergypoints() << std::endl;
    std::cout << std::endl;

    std::cout << "--- Terceir teste ClapTrap ajacs construtor Cópia de Juliana Dacosta---" << std::endl;
    std::cout << std::endl;
    
    ClapTrap ajacs(juliana);
    std::cout << "\nStatus Inicial de ajacs cópia de " << juliana.getName() << ":" << std::endl;
    std::cout << "Nome: " << ajacs.getName() << std::endl;
    std::cout << "Vida: " << ajacs.getHitpoints() << std::endl;
    std::cout << "Energia: " << ajacs.getEnergypoints() << std::endl;
    std::cout << "Dano de Ataque: " << ajacs.getAttackdamage() << std::endl;

    ajacs.attack("Clone Malvado");
    ajacs.takeDamage(10);
    ajacs.attack("Outro Clone");
    std::cout << "Status após ações de " << ajacs.getName() << ":" << std::endl;
    std::cout << "Vida: " << ajacs.getHitpoints() << std::endl;
    std::cout << "Energia: " << ajacs.getEnergypoints() << std::endl;
    std::cout << std::endl;

    std::cout << "--- Cenário 4: Testando operador de atribuição com mcdebug e bazinga ---" << std::endl;
    std::string mcdebugName = "mcdebug";
    ClapTrap mcdebug(mcdebugName);
    
    std::string bazingaName = "bazinga";
    ClapTrap bazinga(bazingaName);

    std::cout << "Status Inicial de " << mcdebug.getName() << ":" << std::endl;
    std::cout << "Vida: " << mcdebug.getHitpoints() << ", Energia: " << mcdebug.getEnergypoints() << ", Dano: " << mcdebug.getAttackdamage() << std::endl;
    std::cout << "Status Inicial de " << bazinga.getName() << ":" << std::endl;
    std::cout << "Vida: " << bazinga.getHitpoints() << ", Energia: " << bazinga.getEnergypoints() << ", Dano: " << bazinga.getAttackdamage() << std::endl;

    std::cout << "\nAtribuindo mcdebug a bazinga (bazinga = mcdebug):" << std::endl;
    bazinga = mcdebug;

    std::cout << "\nStatus de " << bazinga.getName() << " após atribuição  sera como mcdebug:" << std::endl;
    std::cout << "Vida: " << bazinga.getHitpoints() << std::endl;
    std::cout << "Energia: " << bazinga.getEnergypoints() << std::endl;
    std::cout << "Dano de Ataque: " << bazinga.getAttackdamage() << std::endl;
    bazinga.attack("Alvo Atribuido");
    std::cout << std::endl;

    std::cout << "--- Quinto este testando limites de vida e energia com um novo ClapTrap ---" << std::endl;
    std::string testBotName = "Limites ";
    ClapTrap testBot(testBotName);
    std::cout << std::endl;

    std::cout << "\nTestando quando a energia acabar para " << testBot.getName() << ":" << std::endl;
    std::cout << std::endl;
    
    int	whyconta;
    
    whyconta = 0;
    while ( whyconta < 11)
    {
        testBot.attack("inimigo distante");
        ++whyconta;
    }
    
    std::cout << "\nStatus de " << testBot.getName() << " após tentar esgotar energia:" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Vida: " << testBot.getHitpoints() << ", Energia: " << testBot.getEnergypoints() << std::endl;
    std::cout << std::endl;
    
    std::cout << "\nTentando atacar sem energia " << testBot.getName() << ":" << std::endl;
    testBot.attack(" inimigo imortal ");
    std::cout << std::endl;
     
    std::cout << " Tentando reparar-se sem energia " << testBot.getName() << ":" << std::endl;
    testBot.beRepaired(1);
    std::cout << std::endl;

    std::cout << "\nTestando quando a vida acabar para " << testBot.getName() << ":" << std::endl;
    testBot.takeDamage(testBot.getHitpoints() + 1);
     std::cout << std::endl;
     
    std::cout << "Status de " << testBot.getName() << " após tomar dano excessivo:" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Vida: " << testBot.getHitpoints() << ", Energia: " << testBot.getEnergypoints() << std::endl;
    
    std::cout << "\n" << testBot.getName() << " tentará atacar sem vida:" << std::endl;
    testBot.attack("Inimigo Final");
     std::cout << std::endl;
    std::cout << testBot.getName() << " tentará reparar sem vida:" << std::endl;
    testBot.beRepaired(5);
    std::cout << std::endl;

    std::cout << "###2002#12#07#02##  CLAP TRAP ###2002#12#07#02" << std::endl << std::endl;

    return 0;
}
