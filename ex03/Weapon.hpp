/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:00:40 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/15 15:37:22 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
private: 

	std::string type;

public:

	Weapon(std::string type): type(type){
	}
	
	void setType(std::string type){
		this->type = type;
	}

	const std::string& getType() const {
		return type;
	}
};

#endif