/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:00:11 by asobrinh          #+#    #+#             */
/*   Updated: 2025/05/26 17:40:33 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
	std::string niveis[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ponteito_funcao[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int wyconta = 0;

	while (wyconta < 4 && niveis[wyconta] != level)
		wyconta++;

	switch (wyconta)
	{
		case 0:
			(this->*ponteito_funcao[0])();
			(this->*ponteito_funcao[1])();
			(this->*ponteito_funcao[2])();
			(this->*ponteito_funcao[3])();
			break;
		case 1:
			(this->*ponteito_funcao[1])();
			(this->*ponteito_funcao[2])();
			(this->*ponteito_funcao[3])();
			break;
		case 2:
			(this->*ponteito_funcao[2])();
			(this->*ponteito_funcao[3])();
			break;
		case 3:
			(this->*ponteito_funcao[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

