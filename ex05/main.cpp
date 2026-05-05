/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:04:52 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/05/05 12:20:12 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	harl.complain("DEBUG");
	std::cout << "\n";
	harl.complain("INFO");
	std::cout << "\n";
	harl.complain("WARNING");
	std::cout << "\n";
	harl.complain("ERROR");
	std::cout << "\n";
	return 0;
}