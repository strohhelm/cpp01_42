/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:01:27 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/20 12:30:20 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define X   "\033[0m"
#define R   "\033[31m"
#define G   "\033[32m"
#define Y   "\033[33m"
#define B   "\033[34m"
#define M   "\033[35m"
#define C   "\033[36m"
#define W   "\033[37m"

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
	
	private:
		std::string name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif