/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:19:40 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/20 14:48:14 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	if (N < 1)
		return (nullptr);
	Zombie *horde = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		horde[i].nameZombie(name);
	}
	return horde;
} 