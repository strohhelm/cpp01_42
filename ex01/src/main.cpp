/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:21:21 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/18 12:42:07 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde;
	int		n;

	n = 10;
	horde = zombieHorde(n, "William");
	
	for(int i = 0; i < n; i++)
		horde[i].announce();
	
	delete[]	horde;
}