/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:00:13 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:36:28 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int c, char **av)
{
    int	N;
    int	wyconta;
    if (c != 1) 
    {
        std::cerr << "Uso correto cadete!: " << av[0] << std::endl;
        return (1);
    }

    N = 2002;
    std::string name = "asobrinh";

    std::cout << "Bazinga Horda Zombie" << std::endl;
    std::cout << std::endl;

    Zombie *BazingaHorda = zombieHorde(N, name);

    if (!BazingaHorda && N > 0)
    {
        std::cerr << "Bazinga: nao foi possivel criar a horda de zumbis!" << std::endl;
        return (1);
    }
    
    if (N > 0) 
    {
        wyconta = 0;
        while (wyconta < N)
        {
            BazingaHorda[wyconta].announce();
            wyconta++;
        }
    } else {
        std::cout << "Nenhum zumbi para anunciar." << std::endl;
    }

    delete[] BazingaHorda;
    return 0;
}

