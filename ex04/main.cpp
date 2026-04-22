/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:13:16 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/22 15:22:55 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "./replace <filename> <s1> <s2>\n";
		return 1;
	}

	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream infile(av[1]);

	if(!infile.is_open())
	{
		std::cout << "Error file not found\n";
		return 1;
	}

	std::string ofile = std::string(av[1]) + ".replace";
	std::ofstream outfile(ofile);

	if(!outfile.is_open())
	{
		std::cout << "Error file not found\n";
		return 1;
	}

	std::string line;
	while(std::getline(infile, line))
	{
		size_t pos = line.find(s1);
		while(pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		outfile << line << "\n";
	}
	return 0;
}