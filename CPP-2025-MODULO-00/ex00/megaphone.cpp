/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:05:18 by asobrinh          #+#    #+#             */
/*   Updated: 2025/01/25 14:39:59 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void imprime() 
{
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

char ft_toupper(char c) 
{
    if (c >= 'a' && c <= 'z') 
    {
        return (c - 32);
    }
    return (c);
}

void process_arguments(int ac, char **av) 
{
    int	index;
    int	join;
    char caracter;
    char *str;
    
    index = 1;
    while (index < ac) 
    {
        str = av[index];
        join = 0;
        while (str[join]) 
        {
            caracter = ft_toupper(str[join]);
            std::cout << caracter;
            join++;
        }
        if (index < ac - 1) 
        {
            std::cout << " ";
        }
        index++;
    }
    std::cout << std::endl;
}

int main(int argc, char **a) 
{
    if (argc == 1) 
    {
        imprime();
    } 
    else 
    {
        process_arguments(argc, a);
    }
    return 0;
}

