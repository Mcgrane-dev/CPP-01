/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:58:21 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/07 15:55:55 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
		
private:

	std::string name;

public:

	Zombie(std::string s){
		name = s;
	}
	~Zombie();
	std::string getName() const {
		return name;
	}
	void announce(void){ 
		std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
	}
};

void	randomChump(std::string name);
Zombie* newZombie(std::string zombieName);

#endif
