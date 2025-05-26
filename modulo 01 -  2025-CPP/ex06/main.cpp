/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:59:59 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:40:44 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **argv)
{
    Harl bazinga;

    if (ac != 2)
    {
        std::cout << "Use cadete!: ./harlFilter < NIVEL>" << std::endl;
        return (1);
    }

    std::string nivel = argv[1];

    bazinga.complain(nivel);

    return (0);
}
