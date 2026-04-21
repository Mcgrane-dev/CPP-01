/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:58:21 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/21 12:51:59 by jmcgrane         ###   ########.fr       */
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

	Zombie(std::string name);
	~Zombie();
	
	std::string getName() const;
	void announce(void);
};

void	randomChump(std::string name);
Zombie* newZombie(std::string zombieName);

#endif
