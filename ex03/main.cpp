/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:00:28 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/21 12:43:55 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon club("crude spiked club\n");
	HumanA bob("Bob", club);

	bob.attack();
	club.setType("some other type of club\n");
	bob.attack();

	// Weapon club("crude spiked club\n");
	// HumanB jim("Jim");

	// jim.setWeapon(club);
	// jim.attack();
	// club.setType("some other type of club\n");
	// jim.attack();
	
	return 0;
}