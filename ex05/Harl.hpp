/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmcgrane <jmcgrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:06:37 by jmcgrane          #+#    #+#             */
/*   Updated: 2026/05/01 15:52:38 by jmcgrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
	private:
	
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:

	void complain(std::string level);
};

#endif