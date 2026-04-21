/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:00:18 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/21 12:56:39 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if(this->weapon != NULL)
		std::cout << name << " attacks with their " << weapon->getType();
	else
		std::cout << name << " does not have a weapon yet\n";
}

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}
