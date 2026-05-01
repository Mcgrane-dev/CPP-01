/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:06:30 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/05/01 15:51:36 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "DBEUG: \n";
}

void Harl::info(void)
{
	std::cout << "INFO: \n";
}

void Harl::warning(void)
{
	std::cout << "WARNING: \n";
}

void Harl::error(void)
{
	std::cout << "ERROR: \n";
}

void Harl::complain(std::string level)
{
	
}