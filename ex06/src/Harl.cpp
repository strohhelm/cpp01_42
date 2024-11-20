/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:18:57 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/20 12:10:21 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTOR
*/
Harl::Harl(){}
Harl::~Harl(){}

/* ************************************************************************** */
/*		Class Functions
*/

void	Harl::complain(int level)
{
	void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch (level)
	{
		case 1:
			(this->*func[0])();
		case 2:
			(this->*func[1])();
		case 3:
			(this->*func[2])();
		case 4:
			(this->*func[3])();
			break ;
		default :
			std::cout<<"[ Probably complaining about insignificant problems ]\n"<<std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n"<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.this\n"<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n"<<std::endl;
}
