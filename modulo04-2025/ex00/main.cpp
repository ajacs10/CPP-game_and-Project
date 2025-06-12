/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:07:08 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 17:08:46 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << std::endl;	
    std::cout << "--- Testes de Polimorfismo para Animal, Dog, Cat ---" << std::endl;
    std::cout << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    
    std::cout << "Tipo de j: " << j->getType() << " " << std::endl;
    std::cout << "Tipo de i: " << i->getType() << " " << std::endl;
    
    std::cout << std::endl;
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    std::cout << "\n--- Testes de Polimorfismo Incorreto WrongAnimal e WrongCat ---" << std::endl;
     std::cout << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();
    
    std::cout << std::endl;

    std::cout << "\n--- Deletando Objetos ---" << std::endl;
    std::cout << std::endl;
    
    delete wrongCat;
    delete wrongMeta;

    delete i;
    delete j;
    delete meta;
    
    std::cout << "\n############### FIM DE TODOS OS TESTES ###############" << std::endl;
    return 0;
}
