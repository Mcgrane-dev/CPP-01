/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:00:14 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/15 15:23:08 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	private:
		
	Weapon &weapon;
	std::string name;
	
	public:

	HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
	}

	void attack(){
		std::cout << name << " attacks with their " << weapon.getType();
	}
};

#endif