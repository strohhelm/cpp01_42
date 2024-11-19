/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:38:38 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/18 12:14:00 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *robert;
	Zombie	paul("Paul");
	robert = newZombie("Robert");
	robert->announce();
	randomChump("Frank");
	
	delete robert;
}