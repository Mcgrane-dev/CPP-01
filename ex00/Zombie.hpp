/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:58:21 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/03/31 15:43:12 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {
		
private:

	std::string name;

public:

	Zombie(std::string s){
		name = s;
	}
	std::string getName() const {
		return name;
	}
	void announce(void){ 
		std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
	}
};

void	randomChump(std::string name);
Zombie* newZombie(std::string zombieName);
