/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 08:33:25 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 08:33:27 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void bazingareplica(std::string& name_file,std::string& str1,std::string& str2)
{
	std::string	wyconta;
	std::string	result;
	char	letter;
	size_t	i;
	size_t	pos;

	std::ifstream file(name_file.c_str());
	if(!file.is_open())
	{
		std::cerr << "Erro: Nao foi possivel abrir o ficheiro: " << name_file << std::endl;
		return;
	}
	while(file.get(letter))
	{
		wyconta = wyconta + letter;
	}
	file.close();

	i = 0;
	if(str1.empty())
	{
		result = wyconta;
	}
	else
	{
		while((pos = wyconta.find(str1, i)) != std::string::npos)
		{
			result.append(wyconta.substr(i, pos - i));
			result.append(str2);
			i = pos + str1.length();
		}
		result.append(wyconta.substr(i));
	}
	std::string outfile = name_file + ".replace";
	std::ofstream outfiles(outfile.c_str());

	if(!outfiles.is_open())
	{
		std::cerr << "Erro: Nao foi possivel criar o arquivo de saida: " << outfile << std::endl;
		return;
	}
	outfiles << result;
	outfiles.close();
	std::cout << "Replicado com sucesso para: " << outfile << std::endl;
}
