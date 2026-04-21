/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:06:32 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/21 12:55:30 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setNameandN(int n, std::string s)
{
	this->n = n;
	this->name = s;
}

void Zombie::announce()
{
	std::cout << name << ": brainnnnzzzZ\n";
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed\n";
}
