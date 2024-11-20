/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:57:17 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/20 16:00:29 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define	HARL_HPP

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

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(int level);
	
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
