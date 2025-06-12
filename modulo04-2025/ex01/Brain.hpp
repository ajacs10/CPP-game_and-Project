/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:38:32 by asobrinh          #+#    #+#             */
/*   Updated: 2025/06/11 18:38:34 by asobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain 
{
	private:
		std::string ideias[100];
	
	public:
		Brain();
		Brain(const Brain& bazinga);
		Brain& operator=(const Brain& bazinga);
		
		 std::string getIdea(int indice) const;
    		void setIdea(int indice, const std::string& ideia);
		~Brain();
};
#endif

