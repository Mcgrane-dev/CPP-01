#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon{
	private:

	std::string type;

	public:

	Weapon(std::string type);
	void setType(std::string type);
	const std::string& getType() const;

};

#endif