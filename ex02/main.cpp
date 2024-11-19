/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:50:33 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/18 13:26:25 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *strPTR = &brain;
	std::string &strREF = brain;

	std::cout<<std::endl;
	std::cout	<< &brain	<<"\n"
				<<strPTR	<<"\n"
				<<&strREF	<<"\n\n"
				<<std::endl;
	std::cout	<<brain		<<"\n"
				<<*strPTR	<<"\n"
				<<strREF	<<"\n\n"
				<<std::endl;
	return 0;
}