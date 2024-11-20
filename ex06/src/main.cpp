/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:18:28 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/20 12:17:16 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	Karen;
	int		k = 0;

	std::string	s[] = {"DEBUG", "INFO", "WARNING","ERROR"};
	for(int i = 0; i < 4 && i >= 0; i++){
		k += (argc == 2 && std::string(argv[1]) == s[i]) * (i + 1);
	}
	Karen.complain(k);
	return 0;
}