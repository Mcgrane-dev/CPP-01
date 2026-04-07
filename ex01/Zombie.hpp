/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:06:39 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/04/07 13:56:42 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie{
	private:
	
	std::string name;
	int			n;

	public:

	Zombie(){}
	~Zombie();

	void setNameandN(int n, std::string s){
		this->name = s;
		this->n = n;
	}
	void announce(){
		std::cout << name << ": brainnnnzzzZ\n";
	}
};

Zombie* zombieHoard(int n, std::string name);