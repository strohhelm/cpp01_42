/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:01:48 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/19 14:40:59 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
	
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon& w);

	private:
		std::string name;
		Weapon *weapon;
};

#endif