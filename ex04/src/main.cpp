/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:48:58 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/20 15:44:40 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cout	<<R<<"Wrong amount of arguments!! pattern:\t"
					<<G<<"<filename>  "
					<<Y" <string to be replaced>  "
					<<M" <string to replace with>"
					<<X<<std::endl;
		return 1;
	}

	std::ifstream	inFile ;
	std::string		outname = (std::string)argv[1] + ".replace";
	const std::string		to_replace = argv[2];
	const std::string		replace_with = argv [3];
	std::string		buff;
	int				len;
	size_t			i = 0;

	for (int i = 0; i < 4; i++){
		if (!*(argv[i])){
			std::cout<<R<<"How can i work with nothing as an input?"<<X<<std::endl;
			return 1;
		}
	}

	inFile.open(argv[1], std::ios::in);
	if (!inFile){
		std::cout<<R<<"there is no such file or the permissions are not set correctly!"<<X<<std::endl;
		return 1;
	}
	
	std::ofstream	outFile(outname, std::ios::trunc);
	if (!outFile){
		std::cout<<R<<"Oh something happened with the outputstream!"<<X<<std::endl;
		return 1;
	}
	
	inFile.seekg(0, std::ios::end);
	len = inFile.tellg();
	inFile.seekg(0, std::ios::beg);
	char *s = new char[len];
	inFile.read(s, len);
	buff = s;
	
	while ((i = buff.find(to_replace, i)) != std::string::npos)
	{
		buff.erase(i, to_replace.length());
		buff.insert(i, replace_with);
	}
	outFile<<buff;
	delete[] s;
	return (0);
}