/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:00:08 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/21 12:56:25 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType();
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name){}