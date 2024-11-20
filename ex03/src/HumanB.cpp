/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:36:29 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/20 14:52:51 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTOR
*/
	HumanB::HumanB(){}
	HumanB::HumanB(std::string name)
			:weapon(nullptr)
	{
		this->name = name;
		std::cout	<<C<<name
					<<" (HumanB)"<<X<<" woke up and chose violence, he does not have a weapon."\
					<<"\n"<<std::endl;
	}
	
	HumanB::~HumanB(){
			std::cout	<<C<<this->name
				<<" (HumanB)"<<X<<"got deconstructed\n"
				<<std::endl;
	}

/* ************************************************************************** */
/*		HumanB Class functions
*/

void HumanB::attack(void){
	std::cout	<<C<<this->name<<X;
	if (this->weapon)
	{
		std::cout	<<" attacks with their "
					<<M<<this->weapon->getType()<<X;
	}
	else
		std::cout<<"does not have a weapon!";
	std::cout			<<"\n"<<std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w; 
}