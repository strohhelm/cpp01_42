/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:18:57 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/20 16:10:25 by pstrohal         ###   ########.fr       */
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
			std::cout<<B<<"[ Probably complaining about insignificant problems ]\n"<<X<<std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout<<G<<"[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\nI really do!\n"<<X<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<Y<<"[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"<<X<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<M<<"[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.this\n"<<X<<std::endl;
}

void	Harl::error(void)
{
	std::cout<<R<<"[ ERROR ]\nThis is unacceptable!\nI want to speak to the manager now.\n"<<X<<std::endl;
}
