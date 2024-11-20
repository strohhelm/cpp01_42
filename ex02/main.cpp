/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:50:33 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/20 16:23:36 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef COLOURS_MAIN
#define COLOURS_MAIN
#define X   "\033[0m"
#define R   "\033[31m"
#define G   "\033[32m"
#define Y   "\033[33m"
#define B   "\033[34m"
#define M   "\033[35m"
#define C   "\033[36m"
#define W   "\033[37m"
#endif

#include <iostream>
#include <string>
int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *strPTR = &brain;
	std::string &strREF = brain;

	std::cout<<std::endl;
	std::cout	<<Y<<&brain		<<"\n"
				<<G<<strPTR		<<"\n"
				<<M<<&strREF	<<"\n\n"
				<<X<<std::endl;
				
	std::cout	<<Y<<brain		<<"\n"
				<<G<<*strPTR	<<"\n"
				<<M<<strREF		<<"\n\n"
				<<X<<std::endl;

	std::cout	<<Y<<brain		<<"\n"
				<<G<<strPTR		<<"\n"
				<<M<<strREF		<<"\n\n"
				<<X<<std::endl;

	return 0;
}