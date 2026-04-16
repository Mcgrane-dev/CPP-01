/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:00:23 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/16 13:47:40 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
	
	std::string name;
	Weapon 		*weapon;

	public:

	HumanB(std::string name) : name(name), weapon(NULL){}

	void setWeapon(Weapon &weapon){
		this->weapon = &weapon;
	}
	void attack();
};

#endif