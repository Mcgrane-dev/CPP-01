/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:06:39 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/07 15:55:44 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	private:
	
	std::string name;
	int			n;

	public:

	Zombie(){}
	~Zombie();

	void setNameandN(int n, std::string s){
		this->n = n;
		this->name = s;
	}

	void announce(){
		std::cout << name << ": brainnnnzzzZ\n";
	}
};

Zombie* zombieHoard(int n, std::string name);

#endif