/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:19:20 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/12 15:19:22 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << CYAN << "\nFazendo sons para J e I:" << RESET << std::endl;
    j->makeSound();
    i->makeSound();
    
    delete j;
    delete i;
    
    std::cout << MAGENTA << BOLD << "\n--- Testes da Classe Brain ---" << RESET << std::endl;
    Brain brain1;
    std::cout << YELLOW << brain1.getIdea(0) << RESET << std::endl;
    std::cout << std::endl;
    brain1.setIdea(0, "diz O dia esta lindo!");
    brain1.setIdea(42, "diz Qual o sentido da vida?");
    brain1.setIdea(99, "diz Pronta para a aventura!");
    std::cout << YELLOW << " A ideia: " << RESET <<std::endl;
    std::cout << std::endl;
    std::cout << YELLOW << brain1.getIdea(0) << RESET <<std::endl;
    std::cout << YELLOW << brain1.getIdea(42)<< RESET << std::endl;
    std::cout << YELLOW << brain1.getIdea(99)<< RESET << std::endl;
    
    brain1.setIdea(100, " Eu a Lider! . ");
    brain1.getIdea(-5);
    brain1.getIdea(100);
    std::cout << std::endl;
    std::cout << MAGENTA << "\n -----Contrutor de copia--------" << RESET << std::endl;
    Brain brain2 = brain1;
    std::cout << std::endl;
    std::cout << YELLOW << " A copia : " << brain2.getIdea(0) << RESET << std::endl;
    std::cout <<std::endl;
    
    brain1.setIdea(0, " original a sua ideia é estranha , A ideia original mudou!");
    std::cout << YELLOW << " brain1  alterado : "  << brain1.getIdea(0) << RESET << std::endl;
    std::cout << std::endl;
    std::cout << YELLOW << "copia igual ao original sem aletracao : " <<  brain2.getIdea(0)    << RESET <<std::endl;
    std::cout << std::endl;
    
    if (brain2.getIdea(0) == "diz O dia esta lindo!") 
    {
        std::cout << GREEN << "SUCESSO: Construtor de copia do Brain fez copia profunda!" << RESET << std::endl;
    }
    else
    {
        std::cout << RED << "FALHA: Construtor de copia do Brain nao fez copia profunda!" << RESET << std::endl;
    }
     std::cout << MAGENTA << "\n ---construtor de atribuicao--------" << RESET << std::endl;
    Brain brain3;
    brain3.setIdea(0, "Brain3: Ideia temporaria.");
    std::cout << YELLOW << "\n antes da atribuicao Ideia [0]: \"" << brain3.getIdea(0) << "\"" << RESET << std::endl;
    brain3 = brain1;
    std::cout << YELLOW << "apos atribuicao, Ideia [0]: \"" << brain3.getIdea(0) << "\"" << RESET << std::endl;
    brain1.setIdea(0, " Chefe Ana ");
    std::cout << YELLOW << "apos ultima mudanca,  Ideia 0: \"" << brain1.getIdea(0) << "\"" << RESET << std::endl;
    std::cout << YELLOW << "brai3 apos atribuicao, deve ser a anterior de brain1 Ideia 0: \"" << brain3.getIdea(0) << "\"" << RESET << std::endl;
    if (brain3.getIdea(0) == " original a sua ideia é estranha , A ideia original mudou!") 
    {
        std::cout << GREEN << "SUCESSO: Operador de atribuicao do Brain fez copia profunda!" << RESET << std::endl;
    }
    else
    {
        std::cout << RED << "FALHA: Operador de atribuicao do Brain nao fez copia profunda!" << RESET << std::endl;
    }
    
    
    
    std::cout << std::endl;
    std::cout << BLUE << BOLD << "\n--- Array de Animais Simplificado ---" << RESET << std::endl;
    Animal* personagens[2];
    
    personagens[0] = new Dog();
    std::cout << CYAN << "Personagem [0] é um " << personagens[0]->getType() << " e diz: ";
    personagens[0]->makeSound();
    
    personagens[1] = new Cat();
    std::cout << CYAN << "Personagem [1] é um " << personagens[1]->getType() << " e diz: ";
    personagens[1]->makeSound();
    
    std::cout << BLUE << BOLD << "\n--- Hora de Testar a Mente (Brain) e Copias Profundas em Animais! ---" << RESET << std::endl;
    Dog* jef = new Dog();
    std::cout << CYAN << "\nJef (um " << jef->getType() << ") acabou de chegar!" << RESET << std::endl;
    jef->getBazingabrain()->setIdea(0, "Ideia do Jef: Correr atras da bola dourada!");
    jef->getBazingabrain()->setIdea(1, "Outra ideia do Jef: Ser o melhor amigo da Ana!");
    std::cout << YELLOW << "Jef pensa: \"" << jef->getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;
    
    Dog jefClone = *jef;
    std::cout << CYAN << "\nUm clone do Jef (" << jefClone.getType() << ") apareceu!" << RESET << std::endl;
    std::cout << YELLOW << "O clone do Jef pensa originalmente: \"" << jefClone.getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;
    jef->getBazingabrain()->setIdea(0, "Jef original pensa: \"Agora quero dormir na cama!\"");
    std::cout << YELLOW << "Jef original mudou de ideia: \"" << jef->getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;
    std::cout << YELLOW << "Clone do Jef ainda pensa: \"" << jefClone.getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;

    if (jefClone.getBazingabrain()->getIdea(0) == "Ideia do Jef: Correr atras da bola dourada!") 
    {
        std::cout << GREEN << "SUCESSO: O clone do Jef tem sua propria mente (copia profunda)!" << RESET << std::endl;
    }
    else
    {
        std::cout << RED << "FALHA: A mente do clone do Jef nao foi copiada profundamente!" << RESET << std::endl;
    }
    
    
    
    Dog jakeDaAventura;
    std::cout << CYAN << "\nJ ake da Aventura (" << jakeDaAventura.getType() << ") chegou!" << RESET << std::endl;
    jakeDaAventura.getBazingabrain()->setIdea(0, "Jake pensa: \"A aventura me chama!\"");
    
    std::cout << YELLOW << "Jake da Aventura pensa antes da atribuicao: \"" << jakeDaAventura.getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;
    jakeDaAventura = *jef;
    std::cout << YELLOW << "Jake da Aventura agora pensa (apos receber ideias do Jef): \"" << jakeDaAventura.getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;
    
    if (jakeDaAventura.getBazingabrain()->getIdea(0) == "Jef (original) pensa: \"Agora quero dormir na cama!\"") 
    {
        std::cout << GREEN << "SUCESSO: Jake da Aventura pegou as ideias do Jef (atribuicao profunda)!" << RESET << std::endl;
    }
    else
    {
        std::cout << RED << "FALHA: A atribuicao nao foi profunda para Jake da Aventura!" << RESET << std::endl;
    }
    
    Cat* gumball = new Cat();
    std::cout << CYAN << "\nChegou o Gumball (" << gumball->getType() << ")!" << RESET << std::endl;
    gumball->getBazingabrain()->setIdea(0, "Ideia do Gumball: Comer doces e fugir do Tobias!");
    std::cout << YELLOW << "Gumball pensa: \"" << gumball->getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;

    Cat darwing;
    std::cout << CYAN << "Chegou o Darwing (" << darwing.getType() << ")!" << RESET << std::endl;
    darwing.getBazingabrain()->setIdea(0, "Darwing pensa: \"Nadar em lagos congelados!\"");
    std::cout << YELLOW << "Darwing pensa: \"" << darwing.getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;

    darwing = *gumball;
    std::cout << YELLOW << "Darwing agora pensa (apos atribuicao do Gumball): \"" << darwing.getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;

    if (darwing.getBazingabrain()->getIdea(0) == "Ideia do Gumball: Comer doces e fugir do Tobias!") {
        std::cout << GREEN << "SUCESSO: Darwing pegou as ideias do Gumball (atribuicao profunda)!" << RESET << std::endl;
    } else {
        std::cout << RED << "FALHA: Atribuicao de Cat nao foi profunda!" << RESET << std::endl;
    }
    
    gumball->getBazingabrain()->setIdea(0, "Gumball (original) pensa: \"Apenas relaxar!\"");
    std::cout << YELLOW << "Gumball (original) mudou de ideia: \"" << gumball->getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;
    std::cout << YELLOW << "Darwing ainda pensa: \"" << darwing.getBazingabrain()->getIdea(0) << "\"" << RESET << std::endl;

    if (darwing.getBazingabrain()->getIdea(0) == "Ideia do Gumball: Comer doces e fugir do Tobias!") {
        std::cout << GREEN << "SUCESSO: Darwing ainda tem sua propria mente (copia profunda confirmada)!" << RESET << std::endl;
    } else {
        std::cout << RED << "FALHA: A mente de Darwing foi afetada!" << RESET << std::endl;
    }


    delete personagens[0];
    delete personagens[1];

    delete jef;
    delete gumball;

    std::cout << BLUE << BOLD << "\n--- Memoria Limpa. Ate a Proxima Aventura! ---" << RESET << std::endl;

    return 0;
}

