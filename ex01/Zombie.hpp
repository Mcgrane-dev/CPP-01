/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:06:39 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/21 12:55:02 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	private:
	
	int			n;
	std::string name;

	public:

	Zombie();
	~Zombie();

	void setNameandN(int n, std::string name);
	void announce();
};

Zombie* zombieHoard(int n, std::string name);

#endif