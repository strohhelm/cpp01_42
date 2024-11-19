/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:36:55 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/19 13:06:01 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTOR
*/
Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout	<<G<<type<<X
				<<" was found laying around!"
				<<"\n"<<std::endl;
}
Weapon::Weapon(){}
Weapon::~Weapon(){
	std::cout	<<G<<type<<X
				<<" got lost somehow.."
				<<"\n"<<std::endl;
}

/* ************************************************************************** */
/*		Weapon Class functions
*/
const std::string& Weapon::getType(void)
{
	const std::string &rType = this->type;
	return(rType);
}

void	Weapon::setType(std::string newType)
{
	std::cout	<<"Oh! The weapon "
				<<G<<this->type<<X
				<<" got changed to "
				<<G<<newType<<X
				<<"\n"<<std::endl;
	this->type = newType;
}
