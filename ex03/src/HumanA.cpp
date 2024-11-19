/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:28:54 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/19 14:44:19 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTOR
*/

HumanA::HumanA(std::string name, Weapon &weapon)
		: rWeapon(weapon)
{
	this->name = name;
	std::cout	<<Y<<name
				<<" (HumanA)"<<X" woke up and chose violence, his weapon is: "
				<<M<<this->rWeapon.getType()<<X
				<<"\n"<<std::endl;
}
HumanA::~HumanA(){
	std::cout	<<Y<<this->name
				<<" (HumanA) "<<X<<"got deconstructed\n"
				<<"\n"<<std::endl;
}

/* ************************************************************************** */
/*		Weapon Class functions
*/

void	HumanA::attack(void)
{
	std::cout<<Y<<this->name<<X
			<<" attacks with their "
			<<M<<this->rWeapon.getType()<<X
			<<"\n"<<std::endl;
}