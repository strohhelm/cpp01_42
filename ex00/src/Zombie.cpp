/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:21:24 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/18 12:14:10 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTOR
*/
Zombie::Zombie()
{
	std::cout <<"Oh, a Zombie spawned!!"<<std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout <<name<<" came crawling out of its grave!\n"<<std::endl;
}

Zombie::~Zombie()
{
	std::cout <<this->name<<" finally went back to its grave!\n" <<std::endl;
}

/* ************************************************************************** */
/*		Zombie Class functions
*/
void	Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ...\n"<<std::endl;
}