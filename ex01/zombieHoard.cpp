/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:06:46 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/15 12:15:57 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHoard(int n, std::string name)
{
	Zombie* hoard = new Zombie[n];
	
	for(int i = 0; i < n; i++)
	{
		hoard[i].setNameandN(i, name);
		hoard[i].announce();
	}
	return hoard;
}