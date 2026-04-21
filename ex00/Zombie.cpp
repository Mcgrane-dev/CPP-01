/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:58:15 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/21 12:56:03 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::getName() const
{
	return name;
}

void Zombie::announce()
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed\n";
}
